"""Start Gazebo, MoveIt Servo, and end-effector keyboard control."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    cs_type = LaunchConfiguration("cs_type")
    launch_rviz = LaunchConfiguration("launch_rviz")

    simulation = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_simulation_gz"),
                "launch",
                "cs_sim_moveit.launch.py",
            ])
        ),
        launch_arguments={
            "cs_type": cs_type,
            "launch_rviz": launch_rviz,
            "launch_servo": "true",
        }.items(),
    )

    keyboard = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_usr"),
                "launch",
                "pose_keyboard_teleop.launch.py",
            ])
        ),
        launch_arguments={
            "use_sim_time": "true",
            "command_frame": "base_link",
            "linear_speed": LaunchConfiguration("linear_speed"),
            "angular_speed": LaunchConfiguration("angular_speed"),
            "key_timeout": LaunchConfiguration("key_timeout"),
            "debounce_ms": LaunchConfiguration("debounce_ms"),
        }.items(),
    )

    return LaunchDescription([
        DeclareLaunchArgument("cs_type", default_value="ls65"),
        DeclareLaunchArgument("launch_rviz", default_value="true"),
        DeclareLaunchArgument("linear_speed", default_value="0.05"),
        DeclareLaunchArgument("angular_speed", default_value="0.20"),
        # A desktop terminal has no key-release event. A longer simulation-only
        # timeout bridges the keyboard auto-repeat delay and makes motion visible.
        DeclareLaunchArgument("key_timeout", default_value="0.60"),
        DeclareLaunchArgument("debounce_ms", default_value="20"),
        simulation,
        TimerAction(period=6.0, actions=[keyboard]),
    ])
