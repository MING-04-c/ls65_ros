"""Start the isolated F/T Gazebo simulation and Cartesian admittance control."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    cs_type = LaunchConfiguration("cs_type")
    launch_rviz = LaunchConfiguration("launch_rviz")

    ft_simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare("eli_cs_robot_simulation_gz"),
            "launch",
            "cs_sim_ft.launch.py",
        ])),
        launch_arguments={
            "cs_type": cs_type,
            "launch_rviz": "false",
            "initial_joint_controller": "forward_position_controller",
        }.items(),
    )

    moveit_and_servo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare("eli_cs_robot_moveit_config"),
            "launch",
            "cs_moveit.launch.py",
        ])),
        launch_arguments={
            "cs_type": cs_type,
            "use_fake_hardware": "true",
            "use_sim_time": "true",
            "launch_rviz": launch_rviz,
            # This launch uses direct MoveIt IK output. Servo is deliberately
            # disabled so only one node publishes joint-position commands.
            "launch_servo": "false",
        }.items(),
    )

    controller_config = PathJoinSubstitution([
        FindPackageShare("eli_cs_robot_usr"),
        "config",
        "admittance_sim.yaml",
    ])
    # The admittance node performs IK itself. Loading this file on move_group
    # alone is not enough because ROS 2 parameters are private to each node.
    kinematics_config = PathJoinSubstitution([
        FindPackageShare("eli_cs_robot_moveit_config"),
        "config",
        "kinematics.yaml",
    ])
    admittance_controller = Node(
        package="eli_cs_robot_usr",
        executable="admittance_pose_controller",
        name="admittance_controller",
        output="screen",
        parameters=[
            controller_config,
            kinematics_config,
            {"use_sim_time": True},
        ],
    )

    return LaunchDescription([
        DeclareLaunchArgument("cs_type", default_value="ls65"),
        DeclareLaunchArgument("launch_rviz", default_value="true"),
        GroupAction(actions=[ft_simulation], scoped=True),
        GroupAction(actions=[moveit_and_servo], scoped=True),
        admittance_controller,
    ])
