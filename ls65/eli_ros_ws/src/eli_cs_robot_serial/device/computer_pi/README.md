# Raspberry Pi TCP communication

The Raspberry Pi is expected to run a TCP server at `169.254.199.100:9001`.
This ROS 2 node runs as a TCP client and reconnects automatically after a
connection failure.

## Start

```bash
cd ~/project/ls65_ros/ls65/eli_ros_ws
source /opt/ros/humble/setup.bash
source install/setup.bash

ros2 launch eli_cs_robot_serial computer_pi_tcp.launch.py
```

Override the endpoint without editing the YAML file:

```bash
ros2 launch eli_cs_robot_serial computer_pi_tcp.launch.py \
  host:=192.168.1.20 port:=9000
```

## Receive

```bash
ros2 topic echo /computer_pi/rx
ros2 topic echo /computer_pi/rx_bytes
```

`/computer_pi/rx` publishes one message for every LF-terminated text line.
`/computer_pi/rx_bytes` publishes the same payload as a byte array.

## Send

```bash
ros2 topic pub --once /computer_pi/tx \
  std_msgs/msg/String "{data: 'hello pi'}"

ros2 topic pub --once /computer_pi/tx_float \
  std_msgs/msg/Float64 "{data: 3.14}"

ros2 topic pub --once /computer_pi/tx_int \
  std_msgs/msg/Int64 "{data: 42}"

ros2 service call /computer_pi/write \
  eli_cs_robot_serial/srv/WriteSerial "{data: 'hello pi'}"
```

Text, float, and integer messages are sent as ASCII followed by LF when
`append_newline: true`.

Send a file as raw binary data:

```bash
ros2 service call /computer_pi/send_file \
  eli_cs_robot_serial/srv/SendFile \
  "{path: '/home/robot/data.bin'}"
```

TCP is a byte stream and does not preserve message boundaries. Both computers
must use the same text delimiter or application-level binary frame format.

## Camera JPEG stream (MASC Camera TCP Protocol v1)

The camera stream is independent of the text/debug connection on port 9001.
The camera computer runs `hik_camera_ros2_driver` and
`ros2 launch masc_user_serial masc_tcp.launch.py`, listening on
`169.254.199.100:9002`. This computer must have `169.254.199.250/24`
on its Ethernet interface because the server accepts only that source IP.

```bash
ros2 launch eli_cs_robot_serial computer_pi_camera_tcp.launch.py
```

The launch command also opens a live camera window. Press `q` or `Esc` to
close the window. On a headless machine, use `show_image:=false`.

The receiver reconnects after a disconnect. It publishes JPEG data as
`sensor_msgs/msg/CompressedImage` on
`/computer_pi/camera/image/compressed`, preserving the source frame ID and
timestamp. The latest JPEG and its JSON header are atomically saved to
`/tmp/computer_pi_camera/latest.jpg` and `latest.json`. The files are
overwritten on each frame. Set `latest_file:=''` to disable file output.

The launch arguments `host`, `port`, `local_ip`, `compressed_topic`,
`latest_file`, and `reconnect_period` can be overridden. For example:

```bash
ros2 launch eli_cs_robot_serial computer_pi_camera_tcp.launch.py \
  host:=169.254.199.100 port:=9002 local_ip:=169.254.199.250
```

The receiver validates the MIMG magic, protocol version, JSON header,
JPEG format, and length limits (64 KiB header, 32 MiB image). It reads
each field to completion because TCP does not preserve frame boundaries.
