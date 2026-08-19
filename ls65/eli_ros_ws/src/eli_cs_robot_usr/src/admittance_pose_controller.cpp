// 基于末端力反馈的笛卡尔导纳控制节点。
//
// 数据流如下：
//   目标 Pose / PoseArray + 当前 tool0 位姿 + TCP 力
//                         |
//                         v
//   导纳模型 M*x_ddot + D*x_dot + K*x = F_external
//                         |
//                         v
//   MoveIt IK -> 六轴关节角 -> forward_position_controller
//
// 这个节点只在独立的 Gazebo 导纳仿真中使用位置控制器，不修改真机控制器。

#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include <geometry_msgs/msg/pose_array.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <moveit/robot_state/robot_state.h>
#include <moveit/robot_model_loader/robot_model_loader.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_srvs/srv/set_bool.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Vector3.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>

class AdmittancePoseController : public rclcpp::Node
{
public:
  AdmittancePoseController()
  : Node("admittance_controller"),
    tf_buffer_(get_clock()),
    tf_listener_(tf_buffer_)
  {
    // 导纳计算统一在 base_frame 中进行。末端当前位姿由 TF 查询，目标位姿
    // 的 header.frame_id 也必须为空或等于这个坐标系。
    base_frame_ = declare_parameter<std::string>("base_frame", "base_link");
    end_effector_frame_ = declare_parameter<std::string>("end_effector_frame", "tool0");

    // Gazebo 的传感器消息使用一个 scoped sensor 名称作为 frame_id，这个名称
    // 通常不在 ROS TF 树中。传感器安装在 wrist_3_joint 上，因此仿真时用
    // wrist_3_link 的 TF 方向把传感器测得的力旋转到 base_link。
    wrench_transform_frame_ = declare_parameter<std::string>(
      "wrench_transform_frame", "wrist_3_link");

    // position 模式用于仿真，发布 Float64MultiArray；trajectory 模式用于真机，
    // 发布 JointTrajectory。两种模式不能同时向同一个话题发布。
    joint_command_topic_ = declare_parameter<std::string>(
      "joint_command_topic", "/forward_position_controller/commands");
    output_mode_ = declare_parameter<std::string>("output_mode", "position");
    // trajectory 模式下，每个新 IK 目标点的名义到达时间，单位秒。
    // 它是轨迹消息的 time_from_start，不是导纳方程的积分周期。
    trajectory_duration_ = declare_parameter<double>("trajectory_duration", 0.2);
    speed_scaling_topic_ = declare_parameter<std::string>(
      "speed_scaling_topic", "/speed_scaling_state_broadcaster/speed_scaling");
    require_speed_scaling_ = declare_parameter<bool>("require_speed_scaling", false);
    wrench_topic_ = declare_parameter<std::string>(
      "wrench_topic", "/force_torque_sensor_broadcaster/ft_data");

    // 导纳离散积分使用的控制频率。实际 control_step() 由力传感器回调触发。
    control_rate_ = declare_parameter<double>("control_rate", 100.0);
    // 位置和姿态误差小于阈值时，当前点才会被视为到达。
    position_tolerance_ = declare_parameter<double>("position_tolerance", 0.005);
    orientation_tolerance_ = declare_parameter<double>("orientation_tolerance", 0.03);

    // 导纳模型参数，三个数组的顺序均为 [x, y, z]：
    // M 为虚拟质量，D 为虚拟阻尼，K 为虚拟刚度。
    // 它们决定受到同样外力时，末端偏移多少、启动多快以及是否容易振荡。
    mass_ = read_xyz_parameter("mass", {2.0, 2.0, 2.0});
    damping_ = read_xyz_parameter("damping", {40.0, 40.0, 40.0});
    stiffness_ = read_xyz_parameter("stiffness", {250.0, 250.0, 250.0});
    force_deadband_ = read_xyz_parameter("force_deadband", {0.5, 0.5, 0.5});
    force_limit_ = read_xyz_parameter("force_limit", {20.0, 20.0, 20.0});
    max_compliance_offset_ = read_xyz_parameter(
      "max_compliance_offset", {0.08, 0.08, 0.08});
    max_compliance_speed_ = read_xyz_parameter(
      "max_compliance_speed", {0.05, 0.05, 0.05});

    // 默认仅打开 base_link 的 Y 轴柔顺。这样用户向世界 Y 方向施力时，
    // 机器人只沿 Y 方向让位，其他两个方向仍严格跟踪目标位置。
    const std::string compliant_axes = declare_parameter<std::string>(
      "compliant_axes", "y");
    compliant_axis_[0] = compliant_axes.find('x') != std::string::npos;
    compliant_axis_[1] = compliant_axes.find('y') != std::string::npos;
    compliant_axis_[2] = compliant_axes.find('z') != std::string::npos;

    // 一阶低通滤波系数 alpha：new = old + alpha * (sample - old)。
    // alpha 越小越平滑但延迟越大，alpha 越大响应越快但噪声更明显。
    filter_alpha_ = std::clamp(
      declare_parameter<double>("force_filter_alpha", 0.15), 0.0, 1.0);
    bias_sample_count_ = static_cast<std::size_t>(std::max<std::int64_t>(
      1, declare_parameter<std::int64_t>("bias_sample_count", 100)));

    external_wrench_publisher_ = create_publisher<geometry_msgs::msg::WrenchStamped>(
      "~/external_wrench", rclcpp::QoS(10).best_effort());
    if (output_mode_ != "position" && output_mode_ != "trajectory") {
      throw std::runtime_error("output_mode must be 'position' or 'trajectory'");
    }
    if (trajectory_duration_ <= 0.0) {
      throw std::runtime_error("trajectory_duration must be greater than zero");
    }
    if (output_mode_ == "position") {
      joint_command_publisher_ = create_publisher<std_msgs::msg::Float64MultiArray>(
        joint_command_topic_, rclcpp::QoS(10).reliable());
    } else {
      trajectory_publisher_ = create_publisher<trajectory_msgs::msg::JointTrajectory>(
        joint_command_topic_, rclcpp::QoS(10).reliable());
    }

    // 不在控制回调里调用 MoveGroupInterface::getCurrentState()。那个函数会
    // 阻塞等待 /joint_states；本节点使用单线程 spin 时，阻塞期间恰好无法
    // 执行 /joint_states 的回调，于是会一直超时。这里直接订阅并缓存最新
    // 六轴角度，后面的 IK 每次都用真实的当前关节角作为初始解。
    joint_state_subscription_ = create_subscription<sensor_msgs::msg::JointState>(
      "/joint_states", rclcpp::SensorDataQoS(),
      std::bind(
        &AdmittancePoseController::joint_state_callback, this, std::placeholders::_1));

    // 真机控制器自己会读取这个缩放值来推进轨迹。节点同时缓存它，用于
    // 日志和导纳偏移速度保护；不会把它硬编码成某个固定百分比。
    speed_scaling_subscription_ = create_subscription<std_msgs::msg::Float64>(
      speed_scaling_topic_, rclcpp::QoS(10).best_effort(),
      [this](const std_msgs::msg::Float64::ConstSharedPtr message) {
        std::lock_guard<std::mutex> lock(speed_scaling_mutex_);
        speed_scaling_percent_ = std::clamp(message->data, 0.0, 100.0);
        have_speed_scaling_ = true;
      });

    wrench_subscription_ = create_subscription<geometry_msgs::msg::WrenchStamped>(
      wrench_topic_, rclcpp::SensorDataQoS(),
      std::bind(&AdmittancePoseController::wrench_callback, this, std::placeholders::_1));

    // 单点接口，适合直接使用 ros2 topic pub 发布一个 PoseStamped。
    pose_subscription_ = create_subscription<geometry_msgs::msg::PoseStamped>(
      "~/target_pose", rclcpp::QoS(10).reliable(),
      std::bind(&AdmittancePoseController::pose_callback, this, std::placeholders::_1));

    // 多点接口兼容仓库已有的 pose_target_publisher。PoseArray 中的点会按顺序
    // 依次跟踪，到达当前点后才切换到下一个点。
    poses_subscription_ = create_subscription<geometry_msgs::msg::PoseArray>(
      "~/target_poses", rclcpp::QoS(10).reliable(),
      std::bind(&AdmittancePoseController::poses_callback, this, std::placeholders::_1));

    enable_service_ = create_service<std_srvs::srv::SetBool>(
      "~/enable",
      [this](
        const std_srvs::srv::SetBool::Request::SharedPtr request,
        std_srvs::srv::SetBool::Response::SharedPtr response)
      {
        enabled_ = request->data;
        if (!enabled_) {
          reset_admittance_state();
        }
        response->success = true;
        response->message = enabled_ ? "admittance control enabled" : "admittance control disabled";
      });

    tare_service_ = create_service<std_srvs::srv::Trigger>(
      "~/tare",
      [this](
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr response)
      {
        std::lock_guard<std::mutex> lock(data_mutex_);
        begin_bias_collection();
        response->success = true;
        response->message = "force bias collection restarted; keep the tool unloaded";
      });

    RCLCPP_INFO(
      get_logger(),
      "Admittance controller ready: target='%s/target_pose(s)', wrench='%s', axes='%s'",
      get_fully_qualified_name(), wrench_topic_.c_str(), compliant_axes.c_str());
    RCLCPP_INFO(
      get_logger(),
      "Keep the tool unloaded while collecting the first %zu force samples",
      bias_sample_count_);
  }

  // 这里只加载 URDF、SRDF 和 kinematics.yaml，作为 IK 所需的机器人模型。
  // 不使用 MoveGroupInterface：导纳控制既不做全局规划，也不调用 MoveIt action，
  // 因而没有必要创建状态监视器、轨迹执行客户端和其他无关 ROS 接口。
  void initialize()
  {
    robot_model_loader_ = std::make_unique<robot_model_loader::RobotModelLoader>(
      shared_from_this(), "robot_description", true);
    robot_model_ = robot_model_loader_->getModel();
    if (!robot_model_) {
      throw std::runtime_error("Could not load MoveIt robot model from robot_description");
    }
    if (robot_model_->getJointModelGroup("cs_manipulator") == nullptr) {
      throw std::runtime_error("MoveIt group 'cs_manipulator' is missing from robot_description_semantic");
    }
    RCLCPP_INFO(
      get_logger(), "Direct IK output enabled: %s", joint_command_topic_.c_str());
    RCLCPP_INFO(
      get_logger(), "Output mode: %s; speed scaling topic: %s",
      output_mode_.c_str(), speed_scaling_topic_.c_str());
  }

private:
  using Vector3 = std::array<double, 3>;

  Vector3 read_xyz_parameter(const std::string & name, const Vector3 & defaults)
  {
    const auto values = declare_parameter<std::vector<double>>(
      name, std::vector<double>(defaults.begin(), defaults.end()));
    if (values.size() != 3) {
      throw std::runtime_error("Parameter '" + name + "' must contain exactly three values");
    }
    return {values[0], values[1], values[2]};
  }

  static bool finite_pose(const geometry_msgs::msg::Pose & pose)
  {
    const auto & p = pose.position;
    const auto & q = pose.orientation;
    const double quaternion_norm = q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w;
    return std::isfinite(p.x) && std::isfinite(p.y) && std::isfinite(p.z) &&
           std::isfinite(q.x) && std::isfinite(q.y) && std::isfinite(q.z) &&
           std::isfinite(q.w) && quaternion_norm > 1e-12;
  }

  static geometry_msgs::msg::Pose normalized_pose(geometry_msgs::msg::Pose pose)
  {
    const double norm = std::sqrt(
      pose.orientation.x * pose.orientation.x +
      pose.orientation.y * pose.orientation.y +
      pose.orientation.z * pose.orientation.z +
      pose.orientation.w * pose.orientation.w);
    pose.orientation.x /= norm;
    pose.orientation.y /= norm;
    pose.orientation.z /= norm;
    pose.orientation.w /= norm;
    return pose;
  }

  void pose_callback(const geometry_msgs::msg::PoseStamped::ConstSharedPtr message)
  {
    if (!message->header.frame_id.empty() && message->header.frame_id != base_frame_) {
      RCLCPP_ERROR(
        get_logger(), "Target frame must be '%s', received '%s'",
        base_frame_.c_str(), message->header.frame_id.c_str());
      return;
    }
    if (!finite_pose(message->pose)) {
      RCLCPP_ERROR(get_logger(), "Rejected target containing an invalid pose or quaternion");
      return;
    }

    set_targets({normalized_pose(message->pose)});
  }

  void poses_callback(const geometry_msgs::msg::PoseArray::ConstSharedPtr message)
  {
    if (!message->header.frame_id.empty() && message->header.frame_id != base_frame_) {
      RCLCPP_ERROR(
        get_logger(), "Target frame must be '%s', received '%s'",
        base_frame_.c_str(), message->header.frame_id.c_str());
      return;
    }
    if (message->poses.empty()) {
      RCLCPP_ERROR(get_logger(), "Rejected an empty target PoseArray");
      return;
    }

    std::vector<geometry_msgs::msg::Pose> targets;
    targets.reserve(message->poses.size());
    for (const auto & pose : message->poses) {
      if (!finite_pose(pose)) {
        RCLCPP_ERROR(get_logger(), "Rejected PoseArray containing an invalid pose");
        return;
      }
      targets.push_back(normalized_pose(pose));
    }
    set_targets(std::move(targets));
  }

  void set_targets(std::vector<geometry_msgs::msg::Pose> targets)
  {
    std::lock_guard<std::mutex> lock(data_mutex_);
    targets_ = std::move(targets);
    target_index_ = 0;
    reset_admittance_state();
    RCLCPP_INFO(get_logger(), "Received %zu target pose(s)", targets_.size());
  }

  void joint_state_callback(const sensor_msgs::msg::JointState::ConstSharedPtr message)
  {
    if (message->name.size() != message->position.size()) {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "Ignored /joint_states because name and position lengths differ");
      return;
    }

    std::array<double, 6> ordered_positions{};
    for (std::size_t expected_index = 0;
      expected_index < controller_joint_names_.size(); ++expected_index)
    {
      const auto iterator = std::find(
        message->name.begin(), message->name.end(),
        controller_joint_names_[expected_index]);
      if (iterator == message->name.end()) {
        RCLCPP_WARN_THROTTLE(
          get_logger(), *get_clock(), 2000,
          "/joint_states is missing required joint '%s'",
          controller_joint_names_[expected_index].c_str());
        return;
      }

      const auto message_index = static_cast<std::size_t>(
        std::distance(message->name.begin(), iterator));
      ordered_positions[expected_index] = message->position[message_index];
    }

    std::lock_guard<std::mutex> lock(joint_state_mutex_);
    current_joint_positions_ = ordered_positions;
    have_joint_state_ = true;
  }

  void wrench_callback(const geometry_msgs::msg::WrenchStamped::ConstSharedPtr message)
  {
    // Gazebo 传感器给出的力分量位于传感器自身坐标系。导纳计算在 base_link
    // 中进行，所以这里只旋转力向量，不平移它。平移只会影响力矩，不影响力。
    geometry_msgs::msg::TransformStamped transform;
    try {
      const std::string source_frame = wrench_transform_frame_.empty() ?
        message->header.frame_id : wrench_transform_frame_;
      transform = tf_buffer_.lookupTransform(base_frame_, source_frame, tf2::TimePointZero);
    } catch (const tf2::TransformException & error) {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "Cannot transform TCP force to '%s': %s", base_frame_.c_str(), error.what());
      return;
    }

    // WrenchStamped 中的力分量属于传感器坐标系。这里只旋转力，不平移力；
    // 只有计算力矩时才需要考虑传感器原点到 TCP 的位置偏移。
    const auto & rotation = transform.transform.rotation;
    tf2::Quaternion quaternion(rotation.x, rotation.y, rotation.z, rotation.w);
    quaternion.normalize();
    const tf2::Vector3 measured_local(
      message->wrench.force.x, message->wrench.force.y, message->wrench.force.z);
    const tf2::Vector3 measured_base = tf2::quatRotate(quaternion, measured_local);

    {
      std::lock_guard<std::mutex> lock(data_mutex_);
      const Vector3 sample{measured_base.x(), measured_base.y(), measured_base.z()};

      // 启动后先对空载读数求平均。这样腕部自重、传感器零漂不会被误认为用户
      // 施加的外力。施力实验前应等待日志打印 "Force bias ready"。
      if (!bias_ready_) {
        for (std::size_t axis = 0; axis < 3; ++axis) {
          bias_sum_[axis] += sample[axis];
        }
        ++bias_samples_received_;
        if (bias_samples_received_ >= bias_sample_count_) {
          for (std::size_t axis = 0; axis < 3; ++axis) {
            force_bias_[axis] = bias_sum_[axis] / static_cast<double>(bias_samples_received_);
          }
          bias_ready_ = true;
          RCLCPP_INFO(
            get_logger(), "Force bias ready in base frame: [%.3f, %.3f, %.3f] N",
            force_bias_[0], force_bias_[1], force_bias_[2]);
        }
        return;
      }

      // 去零偏并进行一阶低通滤波。filtered_force_ 是后续导纳模型真正使用的力。
      for (std::size_t axis = 0; axis < 3; ++axis) {
        const double unbiased = sample[axis] - force_bias_[axis];
        filtered_force_[axis] += filter_alpha_ * (unbiased - filtered_force_[axis]);
      }
      last_wrench_time_ = now();
      have_wrench_ = true;
    }

    // F/T sensor 通常以约 100 Hz 发布，因此每收到一帧有效力数据就执行一次
    // 导纳计算。这样传感器采样和柔顺状态更新保持同步，不依赖额外 wall timer。
    control_step();
  }

  void begin_bias_collection()
  {
    bias_ready_ = false;
    bias_samples_received_ = 0;
    bias_sum_.fill(0.0);
    force_bias_.fill(0.0);
    filtered_force_.fill(0.0);
    have_wrench_ = false;
    reset_admittance_state();
  }

  void reset_admittance_state()
  {
    compliance_offset_.fill(0.0);
    compliance_velocity_.fill(0.0);
  }

  void control_step()
  {
    if (!enabled_ || !robot_model_) {
      return;
    }

    if (output_mode_ == "trajectory" && require_speed_scaling_) {
      std::lock_guard<std::mutex> lock(speed_scaling_mutex_);
      if (!have_speed_scaling_) {
        RCLCPP_WARN_THROTTLE(
          get_logger(), *get_clock(), 2000,
          "No teach-pendant speed scaling received; real-robot trajectory output is held");
        return;
      }
    }

    geometry_msgs::msg::Pose target;
    Vector3 force{0.0, 0.0, 0.0};
    {
      std::lock_guard<std::mutex> lock(data_mutex_);
      if (targets_.empty() || target_index_ >= targets_.size()) {
        return;
      }
      target = targets_[target_index_];

      // 传感器消息超时后不继续使用旧外力，否则清除 wrench 后机器人仍会
      // 一直认为有人在推它。位置目标跟踪仍可继续运行。
      if (have_wrench_ && (now() - last_wrench_time_).seconds() < 0.2) {
        force = filtered_force_;
      }
    }

    geometry_msgs::msg::TransformStamped current_transform;
    try {
      current_transform = tf_buffer_.lookupTransform(
        base_frame_, end_effector_frame_, tf2::TimePointZero);
    } catch (const tf2::TransformException & error) {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "Cannot read current TCP pose: %s", error.what());
      return;
    }

    // 把连续导纳方程离散化。这里使用固定名义 dt；如果传感器频率变化很大，
    // 应进一步改为使用相邻消息时间戳计算真实 dt。
    const double dt = 1.0 / std::max(1.0, control_rate_);
    for (std::size_t axis = 0; axis < 3; ++axis) {
      if (!compliant_axis_[axis]) {
        compliance_offset_[axis] = 0.0;
        compliance_velocity_[axis] = 0.0;
        continue;
      }

      // 先消除死区，再限幅。死区用于抑制噪声，限幅用于防止异常读数产生过大动作。
      double external_force = force[axis];
      if (std::abs(external_force) <= force_deadband_[axis]) {
        external_force = 0.0;
      } else {
        external_force -= std::copysign(force_deadband_[axis], external_force);
      }
      external_force = std::clamp(
        external_force, -force_limit_[axis], force_limit_[axis]);

      // 导纳方程：M*x_ddot + D*x_dot + K*x = F。
      // 外力不会直接写入电机；它先改变虚拟弹簧的位移 x，随后这个位移
      // 加到原始末端目标上。没有外力时，D 和 K 会让偏移逐渐回到 0。
      const double acceleration =
        (external_force - damping_[axis] * compliance_velocity_[axis] -
        stiffness_[axis] * compliance_offset_[axis]) / std::max(0.001, mass_[axis]);
      compliance_velocity_[axis] += acceleration * dt;
      // 速度限幅和位移限幅是两个独立的安全边界：前者限制让位速度，
      // 后者限制最多让位多远。
      compliance_velocity_[axis] = std::clamp(
        compliance_velocity_[axis],
        -max_compliance_speed_[axis], max_compliance_speed_[axis]);
      compliance_offset_[axis] += compliance_velocity_[axis] * dt;
      compliance_offset_[axis] = std::clamp(
        compliance_offset_[axis],
        -max_compliance_offset_[axis], max_compliance_offset_[axis]);
    }

    const auto & translation = current_transform.transform.translation;
    // 最终笛卡尔目标 = 用户目标 + 导纳偏移。
    // 位置误差只用于到位判断；实际发送前还要经过 IK 转成关节角。
    Vector3 position_error{
      target.position.x + compliance_offset_[0] - translation.x,
      target.position.y + compliance_offset_[1] - translation.y,
      target.position.z + compliance_offset_[2] - translation.z};

    tf2::Quaternion current_orientation(
      current_transform.transform.rotation.x,
      current_transform.transform.rotation.y,
      current_transform.transform.rotation.z,
      current_transform.transform.rotation.w);
    tf2::Quaternion target_orientation(
      target.orientation.x, target.orientation.y,
      target.orientation.z, target.orientation.w);
    current_orientation.normalize();
    target_orientation.normalize();
    tf2::Quaternion orientation_error = target_orientation * current_orientation.inverse();
    if (orientation_error.w() < 0.0) {
      orientation_error = tf2::Quaternion(
        -orientation_error.x(), -orientation_error.y(),
        -orientation_error.z(), -orientation_error.w());
    }

    geometry_msgs::msg::WrenchStamped external_wrench;
    external_wrench.header.stamp = now();
    external_wrench.header.frame_id = base_frame_;
    external_wrench.wrench.force.x = force[0];
    external_wrench.wrench.force.y = force[1];
    external_wrench.wrench.force.z = force[2];
    external_wrench_publisher_->publish(external_wrench);

    // 复制缓存时只短暂持锁，IK 计算本身不占用锁，避免阻塞 joint_states 回调。
    std::array<double, 6> current_joint_positions{};
    {
      std::lock_guard<std::mutex> lock(joint_state_mutex_);
      if (!have_joint_state_) {
        RCLCPP_WARN_THROTTLE(
          get_logger(), *get_clock(), 1000,
          "Waiting for a complete /joint_states message before solving IK");
        return;
      }
      current_joint_positions = current_joint_positions_;
    }

    // 把“目标位姿 + 导纳偏移”做逆运动学，得到完整六轴关节角。
    // 使用当前关节角作为 IK 初始种子，尽量保持解的连续性，减少突然跳到
    // 另一组等价 IK 解的风险。
    moveit::core::RobotState ik_state(robot_model_);
    ik_state.setToDefaultValues();
    for (std::size_t index = 0; index < controller_joint_names_.size(); ++index) {
      ik_state.setVariablePosition(controller_joint_names_[index], current_joint_positions[index]);
    }
    ik_state.update();

    const auto * joint_model_group = ik_state.getJointModelGroup("cs_manipulator");
    if (joint_model_group == nullptr) {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 1000,
        "MoveIt group 'cs_manipulator' is unavailable");
      return;
    }

    geometry_msgs::msg::Pose ik_target = target;
    ik_target.position.x += compliance_offset_[0];
    ik_target.position.y += compliance_offset_[1];
    ik_target.position.z += compliance_offset_[2];
    if (!ik_state.setFromIK(
        joint_model_group, ik_target, end_effector_frame_, 0.01))
    {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 1000, "MoveIt IK failed for the compliant target");
      return;
    }

    std::array<double, 6> target_joint_positions{};
    for (std::size_t index = 0; index < controller_joint_names_.size(); ++index) {
      target_joint_positions[index] =
        ik_state.getVariablePosition(controller_joint_names_[index]);
    }

    if (output_mode_ == "position") {
      // 仿真专用：forward_position_controller 接收六个目标位置。
      // 这种消息没有 time_from_start，也不会自动读取示教器速度缩放。
      std_msgs::msg::Float64MultiArray joint_command;
      joint_command.data.assign(
        target_joint_positions.begin(), target_joint_positions.end());
      joint_command_publisher_->publish(joint_command);
    } else {
      // 真机专用：scaled_joint_trajectory_controller 接收标准 JointTrajectory。
      // time_from_start 给出名义轨迹时间；控制器内部再根据机器人报告的
      // speed_scaling_factor 调整轨迹推进速度，因此示教器速度滑块仍然有效。
      trajectory_msgs::msg::JointTrajectory trajectory;
      trajectory.header.stamp = now();
      trajectory.joint_names.assign(
        controller_joint_names_.begin(), controller_joint_names_.end());
      trajectory_msgs::msg::JointTrajectoryPoint point;
      point.positions.assign(
        target_joint_positions.begin(), target_joint_positions.end());
      point.time_from_start = rclcpp::Duration::from_seconds(trajectory_duration_);
      trajectory.points.push_back(point);
      trajectory_publisher_->publish(trajectory);
    }

    const double position_error_norm = vector_norm(position_error);
    RCLCPP_INFO_THROTTLE(
      get_logger(), *get_clock(), 1000,
      "tracking waypoint %zu/%zu: error=%.3f m, force=[%.2f %.2f %.2f] N, "
      "offset=[%.3f %.3f %.3f] m, output=%s, teach pendant scaling=%.1f%%",
      target_index_ + 1, targets_.size(), position_error_norm,
      force[0], force[1], force[2],
      compliance_offset_[0], compliance_offset_[1], compliance_offset_[2],
      output_mode_.c_str(), speed_scaling_percent_);

    const double orientation_error_angle = 2.0 * std::acos(
      std::clamp(orientation_error.w(), -1.0, 1.0));
    if (position_error_norm < position_tolerance_ &&
      orientation_error_angle < orientation_tolerance_)
    {
      std::lock_guard<std::mutex> lock(data_mutex_);
      if (target_index_ + 1 < targets_.size()) {
        ++target_index_;
        RCLCPP_INFO(
          get_logger(), "Waypoint %zu/%zu reached; moving to the next waypoint",
          target_index_, targets_.size());
      }
    }
  }

  static double vector_norm(const Vector3 & vector)
  {
    return std::sqrt(
      vector[0] * vector[0] + vector[1] * vector[1] + vector[2] * vector[2]);
  }

  std::string base_frame_;
  std::string end_effector_frame_;
  std::string wrench_transform_frame_;
  std::string wrench_topic_;
  std::string joint_command_topic_;
  std::string output_mode_;
  std::string speed_scaling_topic_;
  bool require_speed_scaling_;

  double control_rate_;
  double trajectory_duration_;
  double position_tolerance_;
  double orientation_tolerance_;
  double filter_alpha_;
  std::size_t bias_sample_count_;

  Vector3 mass_;
  Vector3 damping_;
  Vector3 stiffness_;
  Vector3 force_deadband_;
  Vector3 force_limit_;
  Vector3 max_compliance_offset_;
  Vector3 max_compliance_speed_;
  std::array<bool, 3> compliant_axis_{false, true, false};

  std::mutex data_mutex_;
  std::mutex joint_state_mutex_;
  std::mutex speed_scaling_mutex_;
  const std::array<std::string, 6> controller_joint_names_{
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint"};
  std::array<double, 6> current_joint_positions_{};
  bool have_joint_state_{false};
  bool have_speed_scaling_{false};
  double speed_scaling_percent_{100.0};
  std::vector<geometry_msgs::msg::Pose> targets_;
  std::size_t target_index_{0};
  Vector3 compliance_offset_{0.0, 0.0, 0.0};
  Vector3 compliance_velocity_{0.0, 0.0, 0.0};
  Vector3 bias_sum_{0.0, 0.0, 0.0};
  Vector3 force_bias_{0.0, 0.0, 0.0};
  Vector3 filtered_force_{0.0, 0.0, 0.0};
  bool bias_ready_{false};
  std::size_t bias_samples_received_{0};
  bool have_wrench_{false};
  rclcpp::Time last_wrench_time_{0, 0, RCL_ROS_TIME};

  bool enabled_{true};
  tf2_ros::Buffer tf_buffer_;
  tf2_ros::TransformListener tf_listener_;
  rclcpp::Publisher<geometry_msgs::msg::WrenchStamped>::SharedPtr external_wrench_publisher_;
  rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr joint_command_publisher_;
  rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr trajectory_publisher_;
  rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr wrench_subscription_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_subscription_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr speed_scaling_subscription_;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_subscription_;
  rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr poses_subscription_;
  rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr enable_service_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr tare_service_;
  std::unique_ptr<robot_model_loader::RobotModelLoader> robot_model_loader_;
  moveit::core::RobotModelPtr robot_model_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  try {
    auto node = std::make_shared<AdmittancePoseController>();
    node->initialize();
    rclcpp::spin(node);
  } catch (const std::exception & error) {
    RCLCPP_FATAL(rclcpp::get_logger("admittance_controller"), "%s", error.what());
  }
  rclcpp::shutdown();
  return 0;
}
