from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    use_simulation = LaunchConfiguration("use_simulation")

    communication = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_serial"),
                "launch",
                "computer_pi.launch.py",
            ])
        ),
        condition=IfCondition(LaunchConfiguration("start_communication")),
        launch_arguments={
            "enable_status": "true",
            "enable_camera": LaunchConfiguration("start_camera"),
            "show_image": LaunchConfiguration("show_image"),
        }.items(),
    )

    robot_motion_system = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("eli_cs_robot_usr"),
                "launch",
                "pose_execution_system.launch.py",
            ])
        ),
        condition=IfCondition(LaunchConfiguration("start_moveit")),
        launch_arguments={
            "use_simulation": use_simulation,
            "launch_rviz": LaunchConfiguration("launch_rviz"),
            "publisher_mode": "off",
            "initialize_on_startup": LaunchConfiguration(
                "initialize_arm_on_startup"
            ),
            "initialize_before_execution": LaunchConfiguration(
                "initialize_arm_before_motion"
            ),
        }.items(),
    )

    workflow_controller = Node(
        package="eli_to_chassis_control",
        executable="workflow_controller",
        name="workflow_controller",
        output="screen",
        parameters=[{
            "workflow_file": LaunchConfiguration("workflow_file"),
            "auto_start": ParameterValue(
                LaunchConfiguration("auto_start"), value_type=bool
            ),
        }],
    )

    return LaunchDescription([
        DeclareLaunchArgument("auto_start", default_value="true"),
        DeclareLaunchArgument("start_communication", default_value="true"),
        DeclareLaunchArgument("start_camera", default_value="true"),
        DeclareLaunchArgument("show_image", default_value="true"),
        DeclareLaunchArgument("start_moveit", default_value="true"),
        DeclareLaunchArgument("use_simulation", default_value="false"),
        DeclareLaunchArgument("launch_rviz", default_value="true"),
        DeclareLaunchArgument("initialize_arm_on_startup", default_value="false"),
        DeclareLaunchArgument("initialize_arm_before_motion", default_value="true"),
        DeclareLaunchArgument(
            "workflow_file",
            default_value=PathJoinSubstitution([
                FindPackageShare("eli_to_chassis_control"),
                "config",
                "test_workflow.yaml",
            ]),
        ),
        communication,
        robot_motion_system,
        workflow_controller,
    ])
