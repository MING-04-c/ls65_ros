# Install script for directory: /home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_cs_robot_driver")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/dashboard_client")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/dashboard_client")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/libdashboard_client_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdashboard_client_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/primary_client")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/primary_client")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/libprimary_client_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprimary_client_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/script_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/script_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/libscript_node_component.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libscript_node_component.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/eli_components_loader")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_components_loader")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/hardware_interface_plugin.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/libeli_cs_hardware_interface_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libeli_cs_hardware_interface_plugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/controller_stopper_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/controller_stopper_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/eli_ros2_control_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/eli_ros2_control_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE DIRECTORY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/resources")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE DIRECTORY FILES
    "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/config"
    "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/launch"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/launch/" TYPE DIRECTORY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/example/launch/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/config/" TYPE DIRECTORY FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/example/config/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE PROGRAM RENAME "example_safe_joint_move_py" FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/example/python/example_safe_joint_move.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver" TYPE EXECUTABLE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/example_safe_joint_move")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move"
         OLD_RPATH "/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_common_interface/lib:/home/robot/project/ls65_ros/ls65/elite_ros_ws/install/eli_dashboard_interface/lib:/opt/ros/humble/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/eli_cs_robot_driver/example_safe_joint_move")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/environment" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/eli_cs_robot_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/eli_cs_robot_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/environment" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/environment" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_index/share/ament_index/resource_index/packages/eli_cs_robot_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rclcpp_components" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_index/share/ament_index/resource_index/rclcpp_components/eli_cs_robot_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/hardware_interface__pluginlib__plugin" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_index/share/ament_index/resource_index/hardware_interface__pluginlib__plugin/eli_cs_robot_driver")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport.cmake"
         "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_dashboard_client_componentExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport.cmake"
         "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_primary_client_componentExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_script_node_componentExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_script_node_componentExport.cmake"
         "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_script_node_componentExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_script_node_componentExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake/export_script_node_componentExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_script_node_componentExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/CMakeFiles/Export/share/eli_cs_robot_driver/cmake/export_script_node_componentExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver/cmake" TYPE FILE FILES
    "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_core/eli_cs_robot_driverConfig.cmake"
    "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/ament_cmake_core/eli_cs_robot_driverConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/eli_cs_robot_driver" TYPE FILE FILES "/home/robot/project/ls65_ros/ls65/elite_ros_ws/src/eli_cs_robot_driver/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/robot/project/ls65_ros/ls65/elite_ros_ws/build/eli_cs_robot_driver/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
