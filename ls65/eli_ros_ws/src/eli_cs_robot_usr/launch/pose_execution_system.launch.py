"""Launch the pose execution pipeline for either Gazebo or a real robot."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    use_simulation = LaunchConfiguration("use_simulation")
    cs_type = LaunchConfiguration("cs_type")
    launch_rviz = LaunchConfiguration("launch_rviz")
    start_publisher = LaunchConfiguration("start_publisher")
    interactive_input = LaunchConfiguration("interactive_input")
    execute_after_input = LaunchConfiguration("execute_after_input")
    execute_after_yaml = LaunchConfiguration("execute_after_yaml")
    angles_in_degrees = LaunchConfiguration("angles_in_degrees")
    config_file = LaunchConfiguration("config_file")
    initial_config_file = LaunchConfiguration("initial_config_file")

    simulation_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_simulation_gz"),
                "launch",
                "cs_sim_moveit.launch.py",
            ])
        ),
        condition=IfCondition(use_simulation),
        launch_arguments={
            "cs_type": cs_type,
            "launch_rviz": launch_rviz,
            "launch_servo": "false",
        }.items(),
    )

    # The real robot driver must already be running. This include starts MoveIt
    # with the real scaled_joint_trajectory_controller selected as its default.
    real_moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_moveit_config"),
                "launch",
                "cs_moveit.launch.py",
            ])
        ),
        condition=UnlessCondition(use_simulation),
        launch_arguments={
            "cs_type": cs_type,
            "use_fake_hardware": "false",
            "use_sim_time": "false",
            "launch_rviz": launch_rviz,
            "launch_servo": "false",
        }.items(),
    )

    # MoveIt executor is defined directly here. There is no second launch file
    # to maintain just for starting this one node.
    executor_node = Node(
        package="eli_cs_robot_usr",
        executable="moveit_pose_executor",
        name="moveit_pose_executor",
        output="screen",
        parameters=[
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_moveit_config"),
                "config",
                "kinematics.yaml",
            ]),
            # Initial joint configuration is kept separate from Cartesian targets.
            initial_config_file,
            {
                "planning_group": "cs_manipulator",
                "end_effector_link": "tool0",
                "reference_frame": "base_link",
                "velocity_scaling": 0.2,
                "acceleration_scaling": 0.2,
                "planning_time": 5.0,
                "cartesian_eef_step": 0.01,
                "cartesian_jump_threshold": 0.0,
                "cartesian_min_fraction": 0.95,
                "use_sim_time": use_simulation,
            },
        ],
    )

    publisher_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_usr"),
                "launch",
                "pose_target_publisher.launch.py",
            ])
        ),
        condition=IfCondition(start_publisher),
        launch_arguments={
            "use_sim_time": use_simulation,
            "config_file": config_file,
            "interactive_input": interactive_input,
            "execute_after_input": execute_after_input,
            "execute_after_yaml": execute_after_yaml,
            "angles_in_degrees": angles_in_degrees,
        }.items(),
    )

    default_config = PathJoinSubstitution([
        FindPackageShare("eli_cs_robot_usr"),
        "config",
        "cartesian_path.yaml",
    ])
    default_initial_config = PathJoinSubstitution([
        FindPackageShare("eli_cs_robot_usr"),
        "config",
        "initial_joint_pose.yaml",
    ])

    return LaunchDescription([
        DeclareLaunchArgument(
            "use_simulation",
            default_value="true",
            description=(
                "true: Gazebo + joint_trajectory_controller; "
                "false: real robot + scaled_joint_trajectory_controller"
            ),
        ),
        DeclareLaunchArgument(
            "cs_type",
            default_value="ls65",
            description="Elite robot model",
        ),
        DeclareLaunchArgument(
            "launch_rviz",
            default_value="true",
            description="Launch RViz",
        ),
        DeclareLaunchArgument(
            "start_publisher",
            default_value="false",
            description="Also start the configured pose target publisher",
        ),
        DeclareLaunchArgument(
            "interactive_input",
            default_value="false",
            description="Read interactive x y z roll pitch yaw from the terminal",
        ),
        DeclareLaunchArgument(
            "execute_after_input",
            default_value="true",
            description="Automatically execute each interactive pose",
        ),
        DeclareLaunchArgument(
            "execute_after_yaml",
            default_value="false",
            description="Automatically execute the YAML target after publishing it",
        ),
        DeclareLaunchArgument(
            "angles_in_degrees",
            default_value="false",
            description="Interpret interactive roll pitch yaw as degrees",
        ),
        DeclareLaunchArgument(
            "config_file",
            default_value=default_config,
            description="Pose target YAML used when start_publisher is true",
        ),
        DeclareLaunchArgument(
            "initial_config_file",
            default_value=default_initial_config,
            description="YAML containing the initial joint pose",
        ),
        simulation_launch,
        real_moveit_launch,
        executor_node,
        TimerAction(period=5.0, actions=[publisher_launch]),
    ])
