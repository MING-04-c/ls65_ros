// MoveIt 末端位姿执行节点。
//
// 本文件完成的事情可以概括为：
//   1. 订阅一个或多个末端位姿；
//   2. 让 MoveIt 根据末端位姿求解关节角度并生成轨迹；
//   3. 把生成的轨迹交给 MoveIt 的控制器管理器执行。
//
// 本节点不直接操作 eli_cs_controllers，而是调用 MoveGroupInterface。
// MoveIt 会根据 controllers.yaml 中的配置，把轨迹发送到
// scaled_joint_trajectory_controller 的 FollowJointTrajectory action。
#include <atomic>
#include <cmath>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <utility>
#include <vector>

#include <geometry_msgs/msg/pose_array.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/robot_trajectory/robot_trajectory.h>
#include <moveit/trajectory_processing/iterative_time_parameterization.h>
#include <moveit_msgs/msg/robot_trajectory.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/trigger.hpp>

class MoveItPoseExecutor : public rclcpp::Node
{
public:
  // 构造 ROS 2 节点，并读取规划相关参数。
  //
  // Node 的名字最终会显示为：/moveit_pose_executor。
  // automatically_declare_parameters_from_overrides(true) 允许 launch 文件
  // 中传入的参数自动声明，这样可以在 launch 文件里覆盖下面的默认值。
  MoveItPoseExecutor()
  : Node(
      "moveit_pose_executor",
      rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true))
  {
    // cs_manipulator 来自 SRDF 中的 group name。
    // tool0 是机械臂末端执行器的 link。
    // base_link 是默认的位姿参考坐标系。
    planning_group_ = parameter_or<std::string>("planning_group", "cs_manipulator");
    end_effector_link_ = parameter_or<std::string>("end_effector_link", "tool0");
    reference_frame_ = parameter_or<std::string>("reference_frame", "base_link");
    // 速度和加速度缩放范围通常是 0.0 到 1.0。
    // 0.2 表示使用 MoveIt 允许最大速度/加速度的 20%。
    velocity_scaling_ = parameter_or<double>("velocity_scaling", 0.2);
    acceleration_scaling_ = parameter_or<double>("acceleration_scaling", 0.2);

    // 普通规划最多允许搜索 5 秒。
    planning_time_ = parameter_or<double>("planning_time", 5.0);

    // 多个位姿时使用笛卡尔路径：
    // eef_step 是末端插值步长，单位是米；
    // jump_threshold 用于限制关节角突然跳变，0.0 表示关闭这个检查；
    // min_cartesian_fraction 是允许执行的最小路径完成比例。
    eef_step_ = parameter_or<double>("cartesian_eef_step", 0.01);
    jump_threshold_ = parameter_or<double>("cartesian_jump_threshold", 0.0);
    min_cartesian_fraction_ = parameter_or<double>("cartesian_min_fraction", 0.95);
  }

  // 初始化 MoveGroupInterface、订阅者和服务。
  //
  // 这个函数没有放到构造函数里，是因为 shared_from_this() 只有在对象已经
  // 被 std::make_shared 创建以后才可以安全使用。
  void initialize()
  {
    // MoveGroupInterface 是 MoveIt 提供的 C++ 接口。
    // 它负责和已经启动的 move_group 节点通信，完成规划、求解和执行请求。
    move_group_ = std::make_unique<moveit::planning_interface::MoveGroupInterface>(
      shared_from_this(), planning_group_);

    // 告诉 MoveIt 使用哪个末端 link、哪个参考坐标系以及规划速度。
    move_group_->setEndEffectorLink(end_effector_link_);
    move_group_->setPoseReferenceFrame(reference_frame_);
    move_group_->setMaxVelocityScalingFactor(velocity_scaling_);
    move_group_->setMaxAccelerationScalingFactor(acceleration_scaling_);
    move_group_->setPlanningTime(planning_time_);

    // 订阅末端位姿数组。
    // "~" 表示使用当前节点名称作为前缀，因此最终 topic 是：
    // /moveit_pose_executor/target_poses
    //
    // PoseArray 中：
    //   header.frame_id：所有位姿所在的坐标系；
    //   poses：一个或多个 geometry_msgs/msg/Pose。
    target_subscription_ = create_subscription<geometry_msgs::msg::PoseArray>(
      "~/target_poses", rclcpp::QoS(1).reliable(),
      [this](geometry_msgs::msg::PoseArray::ConstSharedPtr message) {
        // 订阅回调和服务回调可能由不同线程执行。
        // 加锁后再写 latest_target_，避免两个线程同时读写同一份数据。
        std::lock_guard<std::mutex> lock(target_mutex_);
        latest_target_ = *message;
        RCLCPP_INFO(
          get_logger(), "Received %zu target pose(s) in frame '%s'",
          latest_target_.poses.size(), latest_target_.header.frame_id.c_str());
      });

    // 创建执行服务。
    // 调用这个服务时，节点会取出最近收到的 PoseArray 并开始规划执行。
    // 最终服务名是：/moveit_pose_executor/execute_latest
    execute_service_ = create_service<std_srvs::srv::Trigger>(
      "~/execute_latest",
      [this](
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr response) {
        execute_latest(response);
      });

    RCLCPP_INFO(
      get_logger(),
      "Ready: group='%s', end_effector='%s', default_frame='%s'",
      planning_group_.c_str(), end_effector_link_.c_str(), reference_frame_.c_str());
  }

private:
  template<typename T>
  T parameter_or(const std::string & name, const T & default_value)
  {
    // ROS 2 参数需要先声明才能读取。
    // 如果 launch 没有传入该参数，就使用这里的默认值。
    if (!has_parameter(name)) {
      declare_parameter<T>(name, default_value);
    }
    return get_parameter(name).get_value<T>();
  }

  static bool valid_pose(const geometry_msgs::msg::Pose & pose)
  {
    // position 必须是有限数字，四元数也必须是有限数字。
    // 四元数不能是全 0，因为全 0 不是合法的旋转表示。
    const auto & p = pose.position;
    const auto & q = pose.orientation;
    const double norm_squared = q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w;
    return std::isfinite(p.x) && std::isfinite(p.y) && std::isfinite(p.z) &&
           std::isfinite(q.x) && std::isfinite(q.y) && std::isfinite(q.z) &&
           std::isfinite(q.w) && norm_squared > 1e-12;
  }

  void execute_latest(std_srvs::srv::Trigger::Response::SharedPtr response)
  {
    // exchange(true) 会先返回旧值，再把 executing_ 设置为 true。
    // 如果旧值已经是 true，说明前一条轨迹仍在执行，拒绝重复执行。
    if (executing_.exchange(true)) {
      response->success = false;
      response->message = "An execution is already in progress";
      return;
    }

    struct ExecutionGuard
    {
      std::atomic_bool & flag;
      // 无论后面规划成功、失败还是提前 return，都自动清除执行标志。
      ~ExecutionGuard() {flag.store(false);}
    } guard{executing_};

    // 从共享变量复制一份目标数据。
    // 复制完成后立刻释放锁，耗时的 MoveIt 规划不占用这把锁。
    geometry_msgs::msg::PoseArray target;
    {
      std::lock_guard<std::mutex> lock(target_mutex_);
      target = latest_target_;
    }

    if (target.poses.empty()) {
      response->success = false;
      response->message = "No target poses received";
      return;
    }

    // 检查并归一化四元数。
    // 归一化后四元数的长度为 1，MoveIt 更容易正确解释其旋转含义。
    for (auto & pose : target.poses) {
      if (!valid_pose(pose)) {
        response->success = false;
        response->message = "Target contains a non-finite pose or a zero quaternion";
        return;
      }

      const double norm = std::sqrt(
        pose.orientation.x * pose.orientation.x +
        pose.orientation.y * pose.orientation.y +
        pose.orientation.z * pose.orientation.z +
        pose.orientation.w * pose.orientation.w);
      pose.orientation.x /= norm;
      pose.orientation.y /= norm;
      pose.orientation.z /= norm;
      pose.orientation.w /= norm;
    }

    // 如果发布者填写了 header.frame_id，就使用发布者指定的坐标系；
    // 如果没有填写，则使用 reference_frame_ 参数，默认是 base_link。
    const std::string input_frame =
      target.header.frame_id.empty() ? reference_frame_ : target.header.frame_id;
    move_group_->setPoseReferenceFrame(input_frame);
    move_group_->setStartStateToCurrentState();

    // 一个点：使用普通的 MoveIt 规划。
    // 多个点：使用笛卡尔路径，让末端依次经过这些点。
    if (target.poses.size() == 1) {
      execute_single_pose(target.poses.front(), response);
    } else {
      execute_cartesian_path(target.poses, response);
    }
  }

  void execute_single_pose(
    const geometry_msgs::msg::Pose & pose,
    std_srvs::srv::Trigger::Response::SharedPtr response)
  {
    // 设置末端目标。MoveIt 内部会进行逆运动学求解，并把末端目标转换成
    // 一组满足关节限制、碰撞约束和运动学约束的关节轨迹。
    move_group_->setPoseTarget(pose, end_effector_link_);
    moveit::planning_interface::MoveGroupInterface::Plan plan;

    // plan() 只负责规划，不会让机械臂运动。
    // 规划结果保存在 plan.trajectory_ 中。
    const auto planning_result = move_group_->plan(plan);
    move_group_->clearPoseTargets();

    if (planning_result != moveit::core::MoveItErrorCode::SUCCESS) {
      response->success = false;
      response->message = "MoveIt failed to plan to the target pose";
      return;
    }

    // execute() 会把 plan 中的 JointTrajectory 发送给 MoveIt 配置的控制器。
    const auto execution_result = move_group_->execute(plan);
    response->success = execution_result == moveit::core::MoveItErrorCode::SUCCESS;
    response->message = response->success ?
      "Single-pose trajectory executed" : "Controller failed to execute trajectory";
  }

  void execute_cartesian_path(
    const std::vector<geometry_msgs::msg::Pose> & waypoints,
    std_srvs::srv::Trigger::Response::SharedPtr response)
  {
    // RobotTrajectory 是 MoveIt 的轨迹消息，内部包含关节名称和每个轨迹点。
    moveit_msgs::msg::RobotTrajectory trajectory_message;

    // MoveIt 从当前机器人状态开始，依次连接 waypoints。
    // 返回值 fraction 表示成功计算出的路径比例：
    //   1.0：所有点都成功；
    //   0.5：大约只完成了一半；
    //   0.0：没有得到有效路径。
    const double fraction = move_group_->computeCartesianPath(
      waypoints, eef_step_, jump_threshold_, trajectory_message, true);

    if (fraction < min_cartesian_fraction_) {
      response->success = false;
      response->message = "Cartesian path fraction " + std::to_string(fraction) +
        " is below required " + std::to_string(min_cartesian_fraction_);
      return;
    }

    // computeCartesianPath 得到的轨迹可能没有完整的时间信息。
    // 读取当前关节状态，作为轨迹时间参数化的起点。
    const auto current_state = move_group_->getCurrentState(2.0);
    if (!current_state) {
      response->success = false;
      response->message = "Could not read current robot state for trajectory timing";
      return;
    }

    // 把 ROS 消息转换成 MoveIt 的 RobotTrajectory 对象，方便进行时间参数化。
    robot_trajectory::RobotTrajectory robot_trajectory(
      move_group_->getRobotModel(), planning_group_);
    robot_trajectory.setRobotTrajectoryMsg(*current_state, trajectory_message);
    // 根据速度和加速度限制，为每个轨迹点计算 time_from_start、速度和加速度。
    trajectory_processing::IterativeParabolicTimeParameterization time_parameterization;
    if (!time_parameterization.computeTimeStamps(
        robot_trajectory, velocity_scaling_, acceleration_scaling_))
    {
      response->success = false;
      response->message = "Failed to add timestamps to Cartesian trajectory";
      return;
    }
    robot_trajectory.getRobotTrajectoryMsg(trajectory_message);

    // 时间参数完整后，执行整条笛卡尔轨迹。
    const auto execution_result = move_group_->execute(trajectory_message);
    response->success = execution_result == moveit::core::MoveItErrorCode::SUCCESS;
    response->message = response->success ?
      "Cartesian trajectory executed; fraction=" + std::to_string(fraction) :
      "Controller failed to execute Cartesian trajectory";
  }

  // 下面是节点运行时保存的配置参数。
  std::string planning_group_;
  std::string end_effector_link_;
  std::string reference_frame_;
  double velocity_scaling_;
  double acceleration_scaling_;
  double planning_time_;
  double eef_step_;
  double jump_threshold_;
  double min_cartesian_fraction_;

  // unique_ptr 表示 MoveGroupInterface 由本节点独占管理，节点析构时自动释放。
  std::unique_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;

  // ROS 2 通信对象：订阅者和服务端。
  rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr target_subscription_;
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr execute_service_;
  geometry_msgs::msg::PoseArray latest_target_;
  std::mutex target_mutex_;  // 保护 latest_target_ 的并发访问。
  std::atomic_bool executing_{false};  // 防止同时执行两条轨迹。
};

int main(int argc, char ** argv)
{
  // 初始化 ROS 2。所有 ROS 2 节点都必须先调用 rclcpp::init。
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MoveItPoseExecutor>();

  // 使用多线程执行器：一个线程可以处理服务回调，另一个线程可以处理
  // MoveIt action 的反馈和状态更新。MoveGroupInterface 的阻塞调用因此
  // 不会完全阻塞节点内部的 ROS 通信。
  rclcpp::executors::MultiThreadedExecutor executor(rclcpp::ExecutorOptions(), 2);
  executor.add_node(node);
  std::thread spinner([&executor]() {executor.spin();});

  try {
    // 必须在 executor 已经开始 spin 后初始化 MoveIt，便于接收 robot_description
    // 和 MoveIt action/service 的通信。
    node->initialize();
  } catch (const std::exception & error) {
    RCLCPP_FATAL(node->get_logger(), "Failed to initialize MoveIt: %s", error.what());
    rclcpp::shutdown();
    spinner.join();
    return 1;
  }

  // 等待节点退出。通常由 Ctrl+C 触发 rclcpp shutdown，使 spin 返回。
  spinner.join();
  if (rclcpp::ok()) {
    rclcpp::shutdown();
  }
  return 0;
}
