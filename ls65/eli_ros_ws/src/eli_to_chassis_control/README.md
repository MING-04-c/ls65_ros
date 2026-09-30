# 底盘与机械臂 YAML 联合流程控制器

这里把底盘任务视为“远程调用”。任务表只登记对方实现了哪些调用；流程 YAML 决定调用顺序、等待时间和机械臂点位。

通信中只保留两个标识：

- `task`：调用名称，例如 `forward_10cm`。
- `event_id`：每条控制或状态消息的唯一编号，只用于 ACK 与去重，由程序自动生成。

## 可调用任务表

`config/chassis_tasks.yaml`：

```yaml
tasks:
  forward_10cm:
    description: Move forward 0.10 m
  backward_10cm:
    description: Move backward 0.10 m
  left_10cm:
    description: Move left 0.10 m
  right_10cm:
    description: Move right 0.10 m
  rotate_left_90deg:
    description: Rotate left 90 degrees
  rotate_right_90deg:
    description: Rotate right 90 degrees
```

任务表的键，例如 `forward_10cm`，就是发给对方的调用名称。只有对方已经实现的任务才能加入表中。

## 默认流程

`config/test_workflow.yaml`：

```yaml
workflow:
  name: test_joint_motion
  auto_start: true
  task_table: chassis_tasks.yaml

  steps:
    - action: chassis_execute
      task: forward_10cm

    - action: wait_chassis
      task: forward_10cm
      require_running: true

    - action: delay
      seconds: 3.0

    - action: arm_poses
      frame_id: base_link
      angles_in_degrees: true
      delivery_delay: 0.2
      poses:
        - [0.40, 0.00, 0.40, 0.00, 180.0, 0.00]
```

执行顺序：

1. 向对方发送 `execute_task(forward_10cm)`。
2. 等待对方发送 `task=forward_10cm, state=running`。
3. 等待对方发送 `task=forward_10cm, state=completed`。
4. 等待 3 秒。
5. 执行机械臂点位。

## 支持的流程动作

| action | 参数 | 含义 |
|---|---|---|
| `chassis_execute` | `task` | 直接调用一个底盘任务 |
| `chassis_continue` | 无 | 继续暂停的底盘任务 |
| `chassis_stop` | 无 | 停止底盘任务 |
| `wait_chassis` | `task`, `require_running` | 等待指定任务完成 |
| `delay` | `seconds` | 等待指定秒数 |
| `arm_poses` | `frame_id`, `angles_in_degrees`, `poses` | 执行机械臂末端点位 |

每个机械臂点位为：

```text
[x, y, z, roll, pitch, yaw]
```

位置单位为米。`angles_in_degrees: true` 时角度单位为度。

## 对方消息

收到主机调用：

```json
{"version":1,"type":"control_command","sequence":10,"timestamp_ns":1790593000000000000,"source":"supervisor","event_id":"control-abc123","command":"execute_task","task":"forward_10cm"}
```

对方 ACK 后执行 `forward_10cm`，并依次上报：

```json
{"version":1,"type":"chassis_status","sequence":20,"timestamp_ns":1790593010000000000,"source":"robot","event_id":"forward-10cm-running-001","task":"forward_10cm","state":1,"state_name":"running","message":"task_started"}
```

```json
{"version":1,"type":"chassis_status","sequence":21,"timestamp_ns":1790593020000000000,"source":"robot","event_id":"forward-10cm-completed-001","task":"forward_10cm","state":2,"state_name":"completed","progress":1.0,"message":"target_reached"}
```

默认要求先收到 `running` 才接受 `completed`，防止旧终态误触发。

## 启动

```bash
cd ~/project/ls65_ros/ls65/eli_ros_ws
source /opt/ros/humble/setup.bash
source install/setup.bash
ros2 launch eli_to_chassis_control joint_motion_test.launch.py
```

使用其他流程文件：

```bash
ros2 launch eli_to_chassis_control joint_motion_test.launch.py \
  workflow_file:=/absolute/path/to/workflow.yaml
```

禁止自动开始，改为服务启动：

```bash
ros2 launch eli_to_chassis_control joint_motion_test.launch.py auto_start:=false
ros2 service call /workflow_controller/start std_srvs/srv/Trigger "{}"
```

联合 launch 默认不会在启动时移动机械臂。底盘完成并等待结束后，MoveIt 才开始机械臂运动。
