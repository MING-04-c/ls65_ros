// 分段位姿控制协调器。
//
// 控制流程：
//   1. 接收最终目标位姿；
//   2. 沿指定方向生成一个距离目标更远的接近点；
//   3. 把接近点交给 moveit_pose_executor 做普通规划；
//   4. 规划执行成功后，把原始最终点交给 admittance_pose_controller；
//   5. 最后一小段由导纳控制完成。
//
// 这个节点不做碰撞检测，也不修改 MoveIt 或底层控制器。

#include <algorithm>
#include <chrono>
#include <cmath>
#include <functional>
#include <memory>
#include <mutex>
#include <string>

#include <controller_manager_msgs/srv/switch_controller.hpp>
#include <geometry_msgs/msg/pose_array.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_srvs/srv/set_bool.hpp>
#include <std_srvs/srv/trigger.hpp>

class StagedPoseCoordinator : public rclcpp::Node
{
public:
  StagedPoseCoordinator()
  : Node("staged_pose_coordinator")
  {
    approach_axis_ = declare_parameter<std::string>("approach_axis", "z");
    approach_offset_ = declare_parameter<double>("approach_offset", 0.05);
    transition_delay_ = declare_parameter<double>("transition_delay", 0.2);
    switch_controllers_ = declare_parameter<bool>("switch_controllers", true);
    moveit_controller_ = declare_parameter<std::string>(
      "moveit_controller", "joint_trajectory_controller");
    compliance_controller_ = declare_parameter<std::string>(
      "compliance_controller", "forward_position_controller");
    admittance_node_name_ = declare_parameter<std::string>(
      "admittance_node_name", "admittance_controller");
    moveit_target_topic_ = declare_parameter<std::string>(
      "moveit_target_topic", "/moveit_pose_executor/target_poses");
    moveit_execute_service_ = declare_parameter<std::string>(
      "moveit_execute_service", "/moveit_pose_executor/execute_latest");

    if (approach_axis_ != "x" && approach_axis_ != "y" && approach_axis_ != "z") {
      throw std::runtime_error("approach_axis must be x, y, or z");
    }
    if (approach_offset_ <= 0.0 || transition_delay_ < 0.0) {
      throw std::runtime_error("approach_offset must be positive and transition_delay non-negative");
    }

    approach_publisher_ = create_publisher<geometry_msgs::msg::PoseArray>(
      moveit_target_topic_, rclcpp::QoS(10).reliable());
    final_publisher_ = create_publisher<geometry_msgs::msg::PoseArray>(
      "/admittance_controller/target_poses", rclcpp::QoS(10).reliable());

    target_subscription_ = create_subscription<geometry_msgs::msg::PoseArray>(
      "~/target_poses", rclcpp::QoS(10).reliable(),
      [this](const geometry_msgs::msg::PoseArray::ConstSharedPtr message) {
        receive_target(*message);
      });

    execute_client_ = create_client<std_srvs::srv::Trigger>(moveit_execute_service_);
    admittance_enable_client_ = create_client<std_srvs::srv::SetBool>(
      "/" + admittance_node_name_ + "/enable");
    switch_controller_client_ =
      create_client<controller_manager_msgs::srv::SwitchController>(
      "/controller_manager/switch_controller");

    RCLCPP_INFO(
      get_logger(),
      "Staged control ready: approach axis=%s, offset=%.3f m, final controller=admittance",
      approach_axis_.c_str(), approach_offset_);
  }

private:
  void receive_target(const geometry_msgs::msg::PoseArray & message)
  {
    if (message.poses.empty()) {
      RCLCPP_ERROR(get_logger(), "Received an empty target PoseArray");
      return;
    }
    if (message.poses.size() != 1) {
      RCLCPP_ERROR(
        get_logger(),
        "This staged test currently accepts exactly one final pose; received %zu",
        message.poses.size());
      return;
    }

    if (executing_) {
      RCLCPP_WARN(get_logger(), "A staged motion is already running; target ignored");
      return;
    }
    executing_ = true;
    final_target_ = message;
    approach_target_ = message;
    offset_pose(approach_target_.poses.front());

    // 新目标到来时，先停止上一目标的导纳输出，避免 MoveIt 规划期间
    // admittance_pose_controller 继续发布旧目标的关节命令。
    disable_admittance_then_plan();
  }

  void disable_admittance_then_plan()
  {
    if (!admittance_enable_client_->service_is_ready()) {
      RCLCPP_ERROR(get_logger(), "Service /admittance_controller/enable is unavailable");
      executing_ = false;
      return;
    }

    auto request = std::make_shared<std_srvs::srv::SetBool::Request>();
    request->data = false;
    admittance_enable_client_->async_send_request(
      request,
      [this](rclcpp::Client<std_srvs::srv::SetBool>::SharedFuture future) {
        const auto response = future.get();
        if (!response->success) {
          RCLCPP_ERROR(get_logger(), "Could not disable admittance: %s", response->message.c_str());
          executing_ = false;
          return;
        }

        auto publish_approach = [this]() {
          approach_publisher_->publish(approach_target_);
          RCLCPP_INFO(get_logger(), "Approach pose published to MoveIt");
          transition_timer_ = create_wall_timer(
            std::chrono::duration_cast<std::chrono::nanoseconds>(
              std::chrono::duration<double>(transition_delay_)),
            [this]() { request_moveit_execution(); });
        };

        if (switch_controllers_) {
          // 仿真：MoveIt 用轨迹控制器，导纳用直接位置控制器。
          switch_controllers(
            moveit_controller_, compliance_controller_, std::move(publish_approach));
        } else {
          // 真机：MoveIt 和导纳都通过 scaled_joint_trajectory_controller，
          // 不调用控制器切换服务，避免打断真实机器人控制器。
          publish_approach();
        }
      });
  }

  void switch_controllers(
    const std::string & activate,
    const std::string & deactivate,
    std::function<void()> on_success)
  {
    if (!switch_controller_client_->service_is_ready()) {
      RCLCPP_ERROR(get_logger(), "Service /controller_manager/switch_controller is unavailable");
      executing_ = false;
      return;
    }

    auto request =
      std::make_shared<controller_manager_msgs::srv::SwitchController::Request>();
    request->activate_controllers = {activate};
    request->deactivate_controllers = {deactivate};
    // BEST_EFFORT 允许“要激活的控制器已经 active”这种无害情况，服务返回后
    // 仍检查 ok，真正的资源冲突或控制器缺失不会被当作成功继续执行。
    request->strictness = request->BEST_EFFORT;
    request->activate_asap = true;
    request->timeout.sec = 5;

    switch_controller_client_->async_send_request(
      request,
      [this, activate, deactivate, on_success = std::move(on_success)](
        rclcpp::Client<controller_manager_msgs::srv::SwitchController>::SharedFuture future) {
        const auto response = future.get();
        if (!response->ok) {
          RCLCPP_ERROR(
            get_logger(), "Controller switch failed: deactivate '%s', activate '%s'",
            deactivate.c_str(), activate.c_str());
          executing_ = false;
          return;
        }
        RCLCPP_INFO(
          get_logger(), "Controller switched: '%s' -> '%s'",
          deactivate.c_str(), activate.c_str());
        on_success();
      });
  }

  void offset_pose(geometry_msgs::msg::Pose & pose) const
  {
    // 接近点位于最终目标的“外侧”。例如 z 轴时，最终点 z=0.40 m，
    // approach_offset=0.05 m，则先规划到 z=0.45 m，再向 z=0.40 m 运动。
    if (approach_axis_ == "x") {
      pose.position.x += approach_offset_;
    } else if (approach_axis_ == "y") {
      pose.position.y += approach_offset_;
    } else {
      pose.position.z += approach_offset_;
    }
  }

  void request_moveit_execution()
  {
    if (transition_timer_) {
      transition_timer_->cancel();
    }
    if (!execute_client_->service_is_ready()) {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "Waiting for /moveit_pose_executor/execute_latest");
      transition_timer_ = create_wall_timer(
        std::chrono::milliseconds(500),
        [this]() { request_moveit_execution(); });
      return;
    }

    auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
    execute_client_->async_send_request(
      request,
      [this](rclcpp::Client<std_srvs::srv::Trigger>::SharedFuture future) {
        const auto response = future.get();
        if (!response->success) {
          RCLCPP_ERROR(get_logger(), "Approach motion failed: %s", response->message.c_str());
          executing_ = false;
          return;
        }

        if (switch_controllers_) {
          // 仿真：切到 forward_position_controller 后，导纳的关节位置消息
          // 才会真正驱动 Gazebo。
          switch_controllers(
            compliance_controller_, moveit_controller_,
            [this]() { enable_admittance_then_publish_final(); });
        } else {
          // 真机不切换控制器，直接开启导纳节点；导纳节点会继续向
          // scaled_joint_trajectory_controller 发布带时间的轨迹点。
          enable_admittance_then_publish_final();
        }
      });
  }

  void enable_admittance_then_publish_final()
  {
    if (!admittance_enable_client_->service_is_ready()) {
      RCLCPP_ERROR(get_logger(), "Service /admittance_controller/enable is unavailable after MoveIt motion");
      executing_ = false;
      return;
    }

    auto request = std::make_shared<std_srvs::srv::SetBool::Request>();
    request->data = true;
    admittance_enable_client_->async_send_request(
      request,
      [this](rclcpp::Client<std_srvs::srv::SetBool>::SharedFuture future) {
        const auto response = future.get();
        if (!response->success) {
          RCLCPP_ERROR(get_logger(), "Could not enable admittance: %s", response->message.c_str());
          executing_ = false;
          return;
        }

        final_publisher_->publish(final_target_);
        RCLCPP_INFO(get_logger(), "Admittance enabled; final pose handed to admittance controller");
        executing_ = false;
      });
  }

  std::string approach_axis_;
  double approach_offset_;
  double transition_delay_;
  bool switch_controllers_{true};
  std::string moveit_controller_;
  std::string compliance_controller_;
  std::string admittance_node_name_;
  std::string moveit_target_topic_;
  std::string moveit_execute_service_;
  bool executing_{false};
  geometry_msgs::msg::PoseArray approach_target_;
  geometry_msgs::msg::PoseArray final_target_;
  rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr approach_publisher_;
  rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr final_publisher_;
  rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr target_subscription_;
  rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr execute_client_;
  rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr admittance_enable_client_;
  rclcpp::Client<controller_manager_msgs::srv::SwitchController>::SharedPtr
    switch_controller_client_;
  rclcpp::TimerBase::SharedPtr transition_timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  try {
    rclcpp::spin(std::make_shared<StagedPoseCoordinator>());
  } catch (const std::exception & error) {
    RCLCPP_FATAL(rclcpp::get_logger("staged_pose_coordinator"), "%s", error.what());
  }
  rclcpp::shutdown();
  return 0;
}
