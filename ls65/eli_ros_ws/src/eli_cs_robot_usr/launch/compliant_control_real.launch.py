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
    executor = Node(
        package="eli_cs_robot_usr", executable="moveit_pose_executor",
        name="moveit_pose_executor", output="screen",
        parameters=[
            PathJoinSubstitution([moveit_cfg, "config", "kinematics.yaml"]),
            {
                "planning_group": "cs_manipulator",
                "end_effector_link": "tool0",
                "reference_frame": "base_link",
                "velocity_scaling": 0.10,
                "acceleration_scaling": 0.10,
                "planning_time": 5.0,
                # 与 pose_execution_system.launch.py 一致：目标末端位姿使用
                # MoveIt 的笛卡尔路径插值，避免单个 Pose 交给 OMPL/RRTConnect
                # 后在关节空间绕远路。
                "cartesian_eef_step": 0.01,
                "cartesian_jump_threshold": 0.0,
                "cartesian_min_fraction": 0.95,
                "use_sim_time": False,
                "initialize_on_startup": False,
                "initialize_before_execution": False,
                "use_cartesian_path": True,
            },
        ],
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
    sensor = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare("eli_cs_robot_serial"), "launch", "sensor_usb.launch.py"
        ])),
        launch_arguments={
            "config_file": LaunchConfiguration("sensor_config_file"),
        }.items(),
        condition=IfCondition(LaunchConfiguration("launch_sensor")),
    )
    return LaunchDescription([
        DeclareLaunchArgument("cs_type", default_value="ls65"),
        DeclareLaunchArgument("launch_rviz", default_value="true"),
        DeclareLaunchArgument("interactive_input", default_value="true"),
        DeclareLaunchArgument("angles_in_degrees", default_value="true"),
        DeclareLaunchArgument("launch_sensor", default_value="true"),
        DeclareLaunchArgument(
            "sensor_config_file",
            default_value=PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_serial"),
                "device", "sensor", "config", "sensor_usb.yaml",
            ]),
        ),
        moveit, sensor, executor, admittance, coordinator, publisher,
    ])
