"""Start MoveIt Servo and keyboard control for a running real-robot driver."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    cs_type = LaunchConfiguration("cs_type")

    # The real robot driver and scaled_joint_trajectory_controller must already
    # be running. This launch starts only MoveIt, Servo, RViz, and the keyboard.
    moveit = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_moveit_config"),
                "launch",
                "cs_moveit.launch.py",
            ])
        ),
        launch_arguments={
            "cs_type": cs_type,
            "use_fake_hardware": "false",
            "use_sim_time": "false",
            "launch_rviz": LaunchConfiguration("launch_rviz"),
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
            "use_sim_time": "false",
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
        # Real-robot defaults are deliberately slower than simulation defaults.
        DeclareLaunchArgument("linear_speed", default_value="0.01"),
        DeclareLaunchArgument("angular_speed", default_value="0.05"),
        DeclareLaunchArgument("key_timeout", default_value="0.12"),
        DeclareLaunchArgument("debounce_ms", default_value="20"),
        moveit,
        TimerAction(period=5.0, actions=[keyboard]),
    ])
