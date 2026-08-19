"""Interactive target and force test for the Gazebo admittance controller."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    pose_publisher_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare("eli_cs_robot_usr"), "launch", "pose_target_publisher.launch.py"
        ])),
        launch_arguments={
            "target_topic": "/admittance_controller/target_poses",
            "use_sim_time": LaunchConfiguration("use_sim_time"),
            "interactive_input": "true",
            "execute_after_input": "false",
            "execute_after_yaml": "false",
            "angles_in_degrees": LaunchConfiguration("angles_in_degrees"),
        }.items(),
    )

    force_command = ExecuteProcess(
        condition=IfCondition(LaunchConfiguration("apply_force")),
        cmd=[
            "ign", "topic",
            "-t", PathJoinSubstitution([
                "/world/", LaunchConfiguration("world"), "/wrench/persistent"
            ]),
            "-m", "ignition.msgs.EntityWrench",
            "-p", [
                "entity: {name: '", LaunchConfiguration("link"),
                "', type: LINK}, wrench: {force: {x: ", LaunchConfiguration("force_x"),
                ", y: ", LaunchConfiguration("force_y"),
                ", z: ", LaunchConfiguration("force_z"), "}}",
            ],
        ],
        output="screen",
    )

    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="true"),
        DeclareLaunchArgument("angles_in_degrees", default_value="true"),
        DeclareLaunchArgument("apply_force", default_value="false"),
        DeclareLaunchArgument("world", default_value="ls65_ft_world"),
        DeclareLaunchArgument("link", default_value="ls65::wrist_3_link"),
        DeclareLaunchArgument("force_x", default_value="0.0"),
        DeclareLaunchArgument("force_y", default_value="0.0"),
        DeclareLaunchArgument("force_z", default_value="0.0"),
        pose_publisher_launch,
        force_command,
    ])
