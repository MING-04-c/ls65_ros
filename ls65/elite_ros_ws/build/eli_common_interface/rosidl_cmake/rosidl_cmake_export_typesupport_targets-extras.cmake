# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:eli_common_interface__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:eli_common_interface__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:eli_common_interface__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:eli_common_interface__rosidl_typesupport_c;__rosidl_generator_cpp:eli_common_interface__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:eli_common_interface__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:eli_common_interface__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:eli_common_interface__rosidl_typesupport_cpp;__rosidl_generator_py:eli_common_interface__rosidl_generator_py")

# populate eli_common_interface_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "eli_common_interface::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'eli_common_interface' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND eli_common_interface_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
