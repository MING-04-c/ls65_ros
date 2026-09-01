from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, RegisterEventHandler
from launch.conditions import IfCondition, UnlessCondition
from launch.event_handlers import OnShutdown
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    default_config = PathJoinSubstitution([
        FindPackageShare("eli_cs_robot_usr"),
        "config",
        "cartesian_path.yaml",
    ])

    # 普通 YAML 模式直接启动节点；交互模式则用 gnome-terminal 打开一个
    # 独立终端。ros2 launch 管理的子进程不能直接读取启动终端的键盘输入，
    # 独立终端可以把标准输入正确交给 C++ 节点。
    parameters = [
        LaunchConfiguration("config_file"),
        {
            "target_topic": LaunchConfiguration("target_topic"),
            "use_sim_time": LaunchConfiguration("use_sim_time"),
            "interactive_mode": LaunchConfiguration("interactive_input"),
            "execute_after_input": LaunchConfiguration("execute_after_input"),
            "execute_after_yaml": LaunchConfiguration("execute_after_yaml"),
            "angles_in_degrees": LaunchConfiguration("angles_in_degrees"),
        },
    ]

    yaml_publisher = Node(
        package="eli_cs_robot_usr",
        executable="pose_target_publisher",
        name="pose_target_publisher",
        output="screen",
        condition=UnlessCondition(LaunchConfiguration("interactive_input")),
        parameters=parameters,
    )

    terminal_publisher = Node(
        package="eli_cs_robot_usr",
        executable="pose_target_publisher",
        name="pose_target_publisher",
        output="screen",
        condition=IfCondition(LaunchConfiguration("interactive_input")),
        prefix="gnome-terminal --wait --title=MoveIt-Pose-Input --",
        parameters=parameters,
    )

    # 交互模式会额外打开 gnome-terminal。它属于独立的终端进程组，主 launch
    # 收到 Ctrl+C 时不一定会自动把信号传给里面的 pose_target_publisher；即使
    # 子节点已经退出，终端窗口也可能因为 gnome-terminal 的服务进程仍存在而留着。
    # 因此关闭 launch 时同时清理发布器进程和这个测试终端窗口。
    cleanup_interactive_publisher = RegisterEventHandler(
        OnShutdown(
            on_shutdown=[
                ExecuteProcess(
                    cmd=[
                        "bash", "-lc",
                        "pkill -TERM -f 'gnome-terminal.*MoveIt-Pose-Input' || true; "
                        "pkill -TERM -f '__node:=pose_target_publisher' || true; "
                        "sleep 0.2; "
                        "pkill -KILL -f 'gnome-terminal.*MoveIt-Pose-Input' || true; "
                        "pkill -KILL -f '__node:=pose_target_publisher' || true",
                    ],
                    output="log",
                )
            ]
        )
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            "config_file",
            default_value=default_config,
            description="YAML file containing one pose or Cartesian waypoints",
        ),
        DeclareLaunchArgument(
            "target_topic",
            default_value="/moveit_pose_executor/target_poses",
            description="PoseArray topic receiving the published targets",
        ),
        DeclareLaunchArgument(
            "use_sim_time",
            default_value="false",
            description="Use the Gazebo simulation clock",
        ),
        DeclareLaunchArgument(
            "interactive_input",
            default_value="false",
            description="Read x y z roll pitch yaw from the terminal",
        ),
        DeclareLaunchArgument(
            "execute_after_input",
            default_value="true",
            description="Automatically call MoveIt after an interactive pose is entered",
        ),
        DeclareLaunchArgument(
            "execute_after_yaml",
            default_value="false",
            description="Automatically call MoveIt after the YAML target is published",
        ),
        DeclareLaunchArgument(
            "angles_in_degrees",
            default_value="false",
            description="Interpret roll pitch yaw as degrees instead of radians",
        ),
        yaml_publisher,
        terminal_publisher,
        cleanup_interactive_publisher,
    ])
