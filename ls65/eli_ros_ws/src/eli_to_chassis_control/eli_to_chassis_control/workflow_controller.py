#!/usr/bin/env python3
"""Execute a YAML-defined chassis and robot motion workflow."""

import json
import math
from pathlib import Path

import rclpy
import yaml
from eli_cs_robot_serial.srv import ChassisControl
from geometry_msgs.msg import Pose, PoseArray
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, ReliabilityPolicy
from std_msgs.msg import Bool, String
from std_srvs.srv import Trigger


CONTROL_COMMANDS = {
    "chassis_execute": ChassisControl.Request.EXECUTE_TASK,
    "chassis_continue": ChassisControl.Request.CONTINUE,
    "chassis_stop": ChassisControl.Request.STOP,
}
SUPPORTED_ACTIONS = set(CONTROL_COMMANDS) | {
    "delay",
    "wait_chassis",
    "arm_poses",
}


class WorkflowController(Node):
    def __init__(self):
        super().__init__("workflow_controller")
        workflow_file = str(self.declare_parameter("workflow_file", "").value)
        if not workflow_file:
            raise ValueError("workflow_file parameter is required")
        self.workflow_path = Path(workflow_file).resolve()
        self.workflow = self.load_workflow(self.workflow_path)
        self.workflow_name = str(self.workflow.get("name", "unnamed_workflow"))
        self.steps = self.workflow["steps"]
        self.tasks = self.load_task_table(self.workflow)
        self.validate_task_references()
        self.auto_start = bool(
            self.declare_parameter(
                "auto_start", bool(self.workflow.get("auto_start", True))
            ).value
        )
        self.retry_period = float(
            self.declare_parameter("retry_period_sec", 1.0).value
        )
        self.control_service = str(
            self.declare_parameter(
                "control_service", "/computer_pi/chassis/control"
            ).value
        )
        self.online_topic = str(
            self.declare_parameter("online_topic", "/computer_pi/online").value
        )
        self.status_topic = str(
            self.declare_parameter(
                "chassis_status_topic", "/computer_pi/chassis_status"
            ).value
        )
        self.target_topic = str(
            self.declare_parameter(
                "target_topic", "/moveit_pose_executor/target_poses"
            ).value
        )
        self.execute_service = str(
            self.declare_parameter(
                "execute_service", "/moveit_pose_executor/execute_latest"
            ).value
        )
        if self.retry_period <= 0.0:
            raise ValueError("retry_period_sec must be positive")

        latched_qos = QoSProfile(depth=1)
        latched_qos.reliability = ReliabilityPolicy.RELIABLE
        latched_qos.durability = DurabilityPolicy.TRANSIENT_LOCAL
        self.online_subscription = self.create_subscription(
            Bool, self.online_topic, self.on_online, latched_qos
        )
        self.status_subscription = self.create_subscription(
            String, self.status_topic, self.on_chassis_status, 20
        )
        self.target_publisher = self.create_publisher(
            PoseArray, self.target_topic, 10
        )
        self.control_client = self.create_client(
            ChassisControl, self.control_service
        )
        self.execute_client = self.create_client(Trigger, self.execute_service)
        self.start_server = self.create_service(
            Trigger, "~/start", self.on_start_request
        )

        self.online = False
        self.active = self.auto_start
        self.failed = False
        self.step_index = 0
        self.phase = "ready"
        self.deadline_ns = 0
        self.seen_running = False
        self.running_task_ids = set()
        self.latest_chassis_status = {}
        self.timer = self.create_timer(0.1, self.advance)
        self.get_logger().info(
            f"Loaded workflow '{self.workflow_name}' with {len(self.steps)} steps "
            f"from {workflow_file}"
        )
        if self.auto_start:
            self.get_logger().info("Workflow will start automatically")
        else:
            self.get_logger().info("Call /workflow_controller/start to begin")

    @staticmethod
    def load_workflow(path):
        document = yaml.safe_load(path.read_text(encoding="utf-8"))
        if not isinstance(document, dict) or not isinstance(
            document.get("workflow"), dict
        ):
            raise ValueError("workflow YAML must contain a 'workflow' mapping")
        workflow = document["workflow"]
        steps = workflow.get("steps")
        if not isinstance(steps, list) or not steps:
            raise ValueError("workflow.steps must be a non-empty list")
        for index, step in enumerate(steps):
            if not isinstance(step, dict):
                raise ValueError(f"workflow step {index} must be a mapping")
            action = step.get("action")
            if action not in SUPPORTED_ACTIONS:
                raise ValueError(
                    f"workflow step {index} has unsupported action: {action}"
                )
            if action in ("chassis_execute", "wait_chassis") and not step.get(
                "task"
            ):
                raise ValueError(f"workflow step {index} requires task")
            if action == "delay" and float(step.get("seconds", -1.0)) < 0.0:
                raise ValueError(f"workflow step {index} has invalid seconds")
            if action == "arm_poses":
                WorkflowController.validate_pose_values(step.get("poses"), index)
        return workflow

    def load_task_table(self, workflow):
        table_name = workflow.get("task_table")
        if not table_name:
            return {}
        table_path = Path(str(table_name))
        if not table_path.is_absolute():
            table_path = self.workflow_path.parent / table_path
        document = yaml.safe_load(table_path.read_text(encoding="utf-8"))
        if not isinstance(document, dict) or not isinstance(
            document.get("tasks"), dict
        ):
            raise ValueError("task table YAML must contain a 'tasks' mapping")
        tasks = document["tasks"]
        for task_name, task_config in tasks.items():
            if not isinstance(task_name, str) or not task_name:
                raise ValueError("task names must be non-empty strings")
            if task_config is not None and not isinstance(task_config, dict):
                raise ValueError(f"task '{task_name}' config must be a mapping")
        self.get_logger().info(
            f"Loaded {len(tasks)} callable chassis task(s) from {table_path}"
        )
        return tasks

    def validate_task_references(self):
        for index, step in enumerate(self.steps):
            task_name = step.get("task")
            if task_name is not None and task_name not in self.tasks:
                raise ValueError(
                    f"workflow step {index} references unknown task: {task_name}"
                )

    @staticmethod
    def resolve_task(step):
        return str(step.get("task", ""))

    @staticmethod
    def validate_pose_values(poses, index):
        if not isinstance(poses, list) or not poses:
            raise ValueError(f"workflow step {index} requires poses")
        for pose in poses:
            if not isinstance(pose, list) or len(pose) != 6:
                raise ValueError(
                    f"each pose in workflow step {index} must contain 6 numbers"
                )
            if not all(math.isfinite(float(value)) for value in pose):
                raise ValueError(f"workflow step {index} contains invalid pose data")

    def current_step(self):
        if self.step_index >= len(self.steps):
            return None
        return self.steps[self.step_index]

    def on_start_request(self, request, response):
        del request
        if self.active:
            response.success = False
            response.message = "workflow is already running"
            return response
        if self.step_index >= len(self.steps) and not self.failed:
            self.step_index = 0
        if self.failed:
            self.step_index = 0
            self.failed = False
        self.phase = "ready"
        self.active = True
        response.success = True
        response.message = f"workflow '{self.workflow_name}' started"
        self.get_logger().info(response.message)
        return response

    def on_online(self, message):
        was_online = self.online
        self.online = bool(message.data)
        if self.online and not was_online:
            self.get_logger().info("Chassis connection is online")
        elif not self.online and was_online:
            self.get_logger().warn("Chassis connection is offline; workflow paused")

    def on_chassis_status(self, message):
        try:
            data = json.loads(message.data)
        except json.JSONDecodeError as exc:
            self.get_logger().warn(f"Ignoring invalid chassis JSON: {exc}")
            return
        if data.get("type") != "chassis_status":
            return
        task_name = data.get("task")
        if not isinstance(task_name, str) or not task_name:
            return
        self.latest_chassis_status[task_name] = data
        if data.get("state") == 1:
            self.running_task_ids.add(task_name)

        step = self.current_step()
        if (
            self.active
            and self.phase == "waiting_chassis"
            and step is not None
            and step["action"] == "wait_chassis"
        ):
            self.process_waiting_chassis_status(step, data)

    def process_waiting_chassis_status(self, step, data):
        expected_task = self.resolve_task(step)
        if data.get("task") != expected_task:
            return
        state = data.get("state")
        if state == 1:
            if not self.seen_running:
                self.get_logger().info(
                    f"Chassis task '{expected_task}' is running"
                )
            self.seen_running = True
            return
        require_running = bool(step.get("require_running", True))
        if state in (2, 3) and require_running and not self.seen_running:
            self.get_logger().warn(
                f"Ignoring stale terminal state for '{expected_task}' because "
                "this workflow has not observed running"
            )
            return
        if state == 3:
            self.fail_workflow(
                f"chassis task '{expected_task}' failed: "
                f"{data.get('message', '')}"
            )
        elif state == 2:
            self.get_logger().info(
                f"Chassis task '{expected_task}' completed"
            )
            self.complete_step()

    def advance(self):
        if not self.active or self.failed:
            return
        step = self.current_step()
        if step is None:
            self.active = False
            self.get_logger().info(
                f"Workflow '{self.workflow_name}' completed"
            )
            return
        action = step["action"]
        now_ns = self.get_clock().now().nanoseconds

        if action in CONTROL_COMMANDS:
            self.advance_chassis_control(step, action, now_ns)
        elif action == "delay":
            if self.phase == "ready":
                seconds = float(step.get("seconds", 0.0))
                self.deadline_ns = now_ns + int(seconds * 1_000_000_000)
                self.phase = "waiting_delay"
                self.get_logger().info(f"Waiting {seconds:.1f}s")
            elif self.phase == "waiting_delay" and now_ns >= self.deadline_ns:
                self.complete_step()
        elif action == "wait_chassis":
            if self.phase == "ready":
                task_name = self.resolve_task(step)
                self.seen_running = task_name in self.running_task_ids
                self.phase = "waiting_chassis"
                self.get_logger().info(
                    f"Waiting for chassis task '{task_name}' to complete"
                )
                cached = self.latest_chassis_status.get(task_name)
                if cached is not None:
                    self.process_waiting_chassis_status(step, cached)
        elif action == "arm_poses":
            self.advance_arm_poses(step, now_ns)

    def advance_chassis_control(self, step, action, now_ns):
        if self.phase == "retry" and now_ns < self.deadline_ns:
            return
        if self.phase not in ("ready", "retry"):
            return
        if not self.online or not self.control_client.service_is_ready():
            return
        request = ChassisControl.Request()
        request.command = CONTROL_COMMANDS[action]
        request.task = self.resolve_task(step)
        if action == "chassis_execute":
            self.running_task_ids.discard(request.task)
            self.latest_chassis_status.pop(request.task, None)
        self.phase = "control_pending"
        future = self.control_client.call_async(request)
        future.add_done_callback(self.on_control_response)
        detail = f" task={request.task}" if request.task else ""
        self.get_logger().info(f"Sending {action}{detail}")

    def on_control_response(self, future):
        try:
            response = future.result()
        except Exception as exc:  # noqa: BLE001
            self.schedule_retry(f"chassis control service failed: {exc}")
            return
        if not response.success:
            self.schedule_retry(
                f"chassis control rejected: {response.message}"
            )
            return
        self.get_logger().info(
            f"Chassis control queued as {response.command_id}"
        )
        self.complete_step()

    def schedule_retry(self, message):
        self.get_logger().error(message)
        self.phase = "retry"
        self.deadline_ns = (
            self.get_clock().now().nanoseconds
            + int(self.retry_period * 1_000_000_000)
        )

    def advance_arm_poses(self, step, now_ns):
        if self.phase == "ready":
            if not self.execute_client.service_is_ready():
                return
            target = self.make_pose_array(step)
            target.header.stamp = self.get_clock().now().to_msg()
            self.target_publisher.publish(target)
            delivery_delay = float(step.get("delivery_delay", 0.2))
            self.deadline_ns = now_ns + int(delivery_delay * 1_000_000_000)
            self.phase = "arm_delivery"
            self.get_logger().info(
                f"Published {len(target.poses)} robot pose(s)"
            )
        elif self.phase == "arm_delivery" and now_ns >= self.deadline_ns:
            self.phase = "arm_pending"
            future = self.execute_client.call_async(Trigger.Request())
            future.add_done_callback(self.on_arm_response)
            self.get_logger().info("MoveIt robot motion requested")

    def make_pose_array(self, step):
        target = PoseArray()
        target.header.frame_id = str(step.get("frame_id", "base_link"))
        degrees = bool(step.get("angles_in_degrees", True))
        for values in step["poses"]:
            x, y, z, roll, pitch, yaw = map(float, values)
            if degrees:
                roll, pitch, yaw = map(math.radians, (roll, pitch, yaw))
            cr, sr = math.cos(roll / 2.0), math.sin(roll / 2.0)
            cp, sp = math.cos(pitch / 2.0), math.sin(pitch / 2.0)
            cy, sy = math.cos(yaw / 2.0), math.sin(yaw / 2.0)
            pose = Pose()
            pose.position.x, pose.position.y, pose.position.z = x, y, z
            pose.orientation.x = sr * cp * cy - cr * sp * sy
            pose.orientation.y = cr * sp * cy + sr * cp * sy
            pose.orientation.z = cr * cp * sy - sr * sp * cy
            pose.orientation.w = cr * cp * cy + sr * sp * sy
            target.poses.append(pose)
        return target

    def on_arm_response(self, future):
        try:
            response = future.result()
        except Exception as exc:  # noqa: BLE001
            self.fail_workflow(f"MoveIt service call failed: {exc}")
            return
        if response.success:
            self.get_logger().info(f"Robot motion completed: {response.message}")
            self.complete_step()
        else:
            self.fail_workflow(f"Robot motion failed: {response.message}")

    def complete_step(self):
        self.step_index += 1
        self.phase = "ready"

    def fail_workflow(self, message):
        self.failed = True
        self.active = False
        self.phase = "failed"
        self.get_logger().error(
            f"Workflow '{self.workflow_name}' stopped: {message}"
        )


def main():
    rclpy.init()
    node = WorkflowController()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
