"""Real robot: use the existing driver and scaled trajectory controller."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    usr = FindPackageShare("eli_cs_robot_usr")
    moveit_cfg = FindPackageShare("eli_cs_robot_moveit_config")
    moveit = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([moveit_cfg, "launch", "cs_moveit.launch.py"])),
        launch_arguments={
            "cs_type": LaunchConfiguration("cs_type"), "use_fake_hardware": "false",
            "use_sim_time": "false", "launch_rviz": LaunchConfiguration("launch_rviz"),
            "launch_servo": "false",
        }.items(),
    )
    admittance = Node(
        package="eli_cs_robot_usr", executable="admittance_pose_controller",
        name="admittance_controller", output="screen",
        parameters=[PathJoinSubstitution([usr, "config", "compliant_real.yaml"]),
                    PathJoinSubstitution([moveit_cfg, "config", "kinematics.yaml"]),
                    {"use_sim_time": False}],
    )
    coordinator = Node(
        package="eli_cs_robot_usr", executable="staged_pose_coordinator",
        name="staged_pose_coordinator", output="screen",
        parameters=[PathJoinSubstitution([usr, "config", "compliant_real.yaml"]),
                    {"use_sim_time": False}],
    )
    publisher = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([usr, "launch", "pose_target_publisher.launch.py"])),
        launch_arguments={
            "target_topic": "/staged_pose_coordinator/target_poses",
            "use_sim_time": "false", "interactive_input": LaunchConfiguration("interactive_input"),
            "execute_after_input": "false", "execute_after_yaml": "false",
            "angles_in_degrees": LaunchConfiguration("angles_in_degrees"),
        }.items(),
    )
    serial = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare("eli_cs_robot_serial"), "launch", "serial.launch.py"
        ])),
        launch_arguments={
            "config_file": LaunchConfiguration("serial_config_file"),
            "publish_wrench": "true",
        }.items(),
        condition=IfCondition(LaunchConfiguration("launch_serial")),
    )
    return LaunchDescription([
        DeclareLaunchArgument("cs_type", default_value="ls65"),
        DeclareLaunchArgument("launch_rviz", default_value="true"),
        DeclareLaunchArgument("interactive_input", default_value="true"),
        DeclareLaunchArgument("angles_in_degrees", default_value="true"),
        DeclareLaunchArgument("launch_serial", default_value="true"),
        DeclareLaunchArgument(
            "serial_config_file",
            default_value="serial.yaml",
        ),
        moveit, serial, admittance, coordinator, publisher,
    ])
