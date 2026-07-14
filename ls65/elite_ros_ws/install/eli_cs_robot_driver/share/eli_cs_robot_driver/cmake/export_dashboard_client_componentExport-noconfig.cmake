#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "eli_cs_robot_driver::dashboard_client_component" for configuration ""
set_property(TARGET eli_cs_robot_driver::dashboard_client_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(eli_cs_robot_driver::dashboard_client_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libdashboard_client_component.so"
  IMPORTED_SONAME_NOCONFIG "libdashboard_client_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS eli_cs_robot_driver::dashboard_client_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_eli_cs_robot_driver::dashboard_client_component "${_IMPORT_PREFIX}/lib/libdashboard_client_component.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
