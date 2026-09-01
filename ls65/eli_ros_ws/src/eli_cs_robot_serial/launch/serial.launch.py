from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    config = PathJoinSubstitution([
        FindPackageShare("eli_cs_robot_serial"), "config", "serial.yaml"
    ])
    return LaunchDescription([
        DeclareLaunchArgument("config_file", default_value=config),
        Node(
            package="eli_cs_robot_serial",
            executable="serial_node",
            name="serial_node",
            output="screen",
            parameters=[LaunchConfiguration("config_file")],
        ),
    ])
