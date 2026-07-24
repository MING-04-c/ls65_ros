"""Open a terminal for incremental end-effector keyboard control."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    keyboard_node = Node(
        package="eli_cs_robot_usr",
        executable="pose_keyboard_teleop",
        name="pose_keyboard_teleop",
        output="screen",
        # 键盘节点需要真正的标准输入，因此在独立终端窗口中运行。
        prefix="gnome-terminal --wait --title=MoveIt-Keyboard-Teleop --",
        parameters=[{
            "use_sim_time": LaunchConfiguration("use_sim_time"),
            "command_frame": LaunchConfiguration("command_frame"),
            "linear_speed": LaunchConfiguration("linear_speed"),
            "angular_speed": LaunchConfiguration("angular_speed"),
            "publish_rate": LaunchConfiguration("publish_rate"),
            "key_timeout": LaunchConfiguration("key_timeout"),
            "debounce_ms": LaunchConfiguration("debounce_ms"),
        }],
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            "use_sim_time",
            default_value="false",
            description="Use the Gazebo simulation clock",
        ),
        DeclareLaunchArgument(
            "command_frame",
            default_value="base_link",
            description="Frame used for Cartesian velocity commands",
        ),
        DeclareLaunchArgument(
            "linear_speed",
            default_value="0.05",
            description="Cartesian linear speed in metres per second",
        ),
        DeclareLaunchArgument(
            "angular_speed",
            default_value="0.20",
            description="Cartesian angular speed in radians per second",
        ),
        DeclareLaunchArgument(
            "publish_rate",
            default_value="50.0",
            description="Twist command publishing rate in Hz",
        ),
        DeclareLaunchArgument(
            "key_timeout",
            default_value="0.15",
            description="Stop after this many seconds without a key event",
        ),
        DeclareLaunchArgument(
            "debounce_ms",
            default_value="20",
            description="Ignore identical key events inside this interval",
        ),
        keyboard_node,
    ])
