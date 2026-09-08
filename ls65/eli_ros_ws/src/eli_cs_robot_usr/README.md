# Eli CS 末端位姿与柔顺控制

本包通过 MoveIt 将末端位姿转换为关节轨迹，并在到达目标后根据六维力传感器的数据进行平移柔顺控制。

真机柔顺参数位于：

```text
config/compliant_real.yaml
```

## 当前计算模型

每个柔顺轴使用准静态关系：

```text
effective_force = sign(F) * max(abs(F) - force_deadband, 0)
equilibrium_offset = effective_force / stiffness
```

最终命令位置为：

```text
command_xyz = raw_target_xyz + compliance_offset
```

实际偏移还会受合力限幅、单轴位移上限、偏移速度上限和过载保护影响。

## 参数说明

### `stiffness`

虚拟刚度，单位为 `N/m`。数值越小，同样外力产生的位移越大。

已知期望力和期望位移时，可按下式计算：

```text
stiffness = (expected_force - force_deadband) / expected_offset
```

当前配置：

```yaml
stiffness: [1323.3, 1323.3, 1323.3]
force_deadband: [1.5, 1.5, 1.5]
```

因此：

```text
5 N   -> (5 - 1.5) / 1323.3 = 0.00265 m，约 2.7 mm
20 N  -> (20 - 1.5) / 1323.3 = 0.0140 m，约 1.4 cm
50 N  -> (50 - 1.5) / 1323.3 = 0.0366 m，约 3.7 cm
100 N -> (100 - 1.5) / 1323.3 = 0.0744 m，约 7.4 cm
200 N -> (200 - 1.5) / 1323.3 = 0.150 m，约 15 cm
```

单一线性刚度不能同时精确满足“5 N 位移 1 cm”和“200 N 位移 15 cm”。如果更关注小力灵敏度，5 N 对应 1 cm 时应使用：

```yaml
stiffness: [350.0, 350.0, 350.0]
```

但此时约 `54 N` 就会达到 `15 cm` 位移上限。

### `force_deadband`

力死区，单位为 `N`，用于消除传感器零点波动和小幅噪声。

```yaml
force_deadband: [1.5, 1.5, 1.5]
```

- 末端在无外力时漂移：适当增大。
- 小力完全没有响应：适当减小。
- 调整死区后需重新计算 `stiffness`。

### `compliance_time_constant`

力到柔顺平衡位移的一阶平滑时间常数，单位为秒。

```yaml
compliance_time_constant: 0.15
```

- 减小：目标偏移响应更快，但对力噪声更敏感。
- 增大：响应更平滑，但手感更慢。
- 真机建议在 `0.15~0.50 s` 内逐步调整。

### `max_compliance_speed`

柔顺偏移本身的最大变化速度，单位为 `m/s`。

```yaml
max_compliance_speed: [0.08, 0.08, 0.08]
```

当前每轴最多按 `8 cm/s` 改变柔顺目标。这个参数只限制目标生成速度，不代表机械臂必然能以同样速度跟随。

### `trajectory_duration`

每条真机关节轨迹点的名义执行时间，单位为秒。

```yaml
trajectory_duration: 0.06
```

- 减小：机械臂更快追赶 `command_xyz`，关节动作也会更激进。
- 增大：跟踪更柔和，但 `actual_xyz` 的滞后增大。
- 真机建议不要一次大幅减小，可按 `0.10 -> 0.08 -> 0.06 s` 逐级测试。

### `max_compliance_offset`

每个轴相对原始目标的最大柔顺位移，单位为米。

```yaml
max_compliance_offset: [0.15, 0.15, 0.15]
```

当前 X/Y/Z 每轴最多偏移 `15 cm`。达到单轴上限后，该轴保持最大偏移；撤力后返回原始目标。上限必须根据当前位姿的实际工作空间设置。

### `force_norm_limit`

参与柔顺计算的三轴合力上限。多轴受力时会按比例统一缩放，以保持受力方向。

```yaml
force_norm_limit: 200.0
```

### `overload_force_threshold` 和 `protection_release_force`

```yaml
overload_force_threshold: 200.0
protection_release_force: 3.0
```

合力达到 `200 N` 时，控制器立即锁定进入保护时的当前 TCP 位姿，不再增加偏移。合力降到 `3 N` 以下后解除保护。

`overload_force_threshold` 应小于或等于 `force_norm_limit`。因为保护判断使用 `>=`，所以要测试 20 cm 理论偏移时，应逐步接近 200 N，不要故意超过阈值。

### `force_filter_alpha`

力传感器一阶低通滤波系数，取值范围为 `(0, 1]`。

```yaml
force_filter_alpha: 0.05
```

- 增大：力更快进入控制器，但噪声和冲击更明显。
- 减小：力更平滑，但延迟更大。
- 建议先保持 `0.05`，只在确认传感器原始数据平稳后再提高。

### 其他参数

```yaml
compliant_axes: "xyz"
max_joint_command_step: 0.03
hold_orientation_during_compliance: true
bias_sample_count: 200
```

- `compliant_axes`：允许柔顺的平移轴，例如 `"z"` 或 `"xyz"`。
- `max_joint_command_step`：单次关节命令的最大变化，单位为弧度。
- `hold_orientation_during_compliance`：柔顺过程中保持进入柔顺阶段时的末端姿态。
- `bias_sample_count`：启动时采集的力零偏样本数；采样期间必须保持末端无负载。

## 推荐调参顺序

1. 确认无外力时 `/sensor/wrench` 接近零，并保持 `force_deadband=1.5 N`。
2. 只开启一个柔顺轴，例如 `compliant_axes: "z"`，验证力方向。
3. 根据期望的“力-位移”关系计算 `stiffness`。
4. 设置与工作空间相符的 `max_compliance_offset`。
5. 通过 `compliance_time_constant` 和 `max_compliance_speed` 调整目标偏移的响应。
6. 如果 `command_xyz` 变化快、`actual_xyz` 跟踪慢，再小幅减小 `trajectory_duration`。
7. 最后设置 `force_norm_limit` 和 `overload_force_threshold`，不要用提高保护阈值的方式掩盖跟踪问题。

每次只改一类参数，先用小力测试，确认方向、回零和姿态保持都正常后再逐步加力。

## 编译和启动

修改 YAML 后需要重新编译并重启柔顺控制节点：

```bash
cd ~/project/ls65_ros/ls65/eli_ros_ws
colcon build --packages-select eli_cs_robot_usr
source install/setup.bash

ros2 launch eli_cs_robot_usr compliant_control_real.launch.py \
  launch_rviz:=true \
  launch_sensor:=true \
  interactive_input:=true
```

参数是在节点启动时读取的。直接修改 YAML 不会改变已在运行的控制器，必须重启。

## 检查运行参数

```bash
ros2 param get /admittance_controller stiffness
ros2 param get /admittance_controller force_deadband
ros2 param get /admittance_controller compliance_time_constant
ros2 param get /admittance_controller max_compliance_speed
ros2 param get /admittance_controller max_compliance_offset
ros2 param get /admittance_controller overload_force_threshold
```

慢速查看实际生成的末端命令：

```bash
while true; do
  ros2 topic echo --once /admittance_controller/commanded_pose
  sleep 1
done
```

控制器日志中的主要字段：

- `force`：去零偏和滤波后的基坐坐标系外力。
- `offset`：当前柔顺偏移。
- `raw_target_xyz`：用户设置的原始末端目标。
- `command_xyz`：真正用于 IK 的柔顺目标。
- `actual_xyz`：从 TF 获得的当前末端位置。
- `overload_hold=true`：已进入过载保护，当前位姿被锁定。

## 真机测试注意事项

- 确认 `scaled_joint_trajectory_controller` 为 `active`。
- 确认 `/io_and_status_controller/robot_task_running` 为 `true`。
- 首次启动时保持末端无负载，等待 `Force bias ready` 后再施力。
- 从 `5 N` 开始逐步增加，不要直接冲击 `200 N` 保护阈值。
- 确保机械臂在当前方向有足够的工作空间，并随时准备急停。
- 如果末端方向错误、姿态明显改变、关节突跳或无法撤力回零，立即停止测试，不要继续增大外力。
