// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:srv/GetRobotMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_ROBOT_MODE__STRUCT_H_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_ROBOT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRobotMode in the package eli_common_interface.
typedef struct eli_common_interface__srv__GetRobotMode_Request
{
  uint8_t structure_needs_at_least_one_member;
} eli_common_interface__srv__GetRobotMode_Request;

// Struct for a sequence of eli_common_interface__srv__GetRobotMode_Request.
typedef struct eli_common_interface__srv__GetRobotMode_Request__Sequence
{
  eli_common_interface__srv__GetRobotMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__srv__GetRobotMode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'mode'
#include "eli_common_interface/msg/detail/robot_mode__struct.h"

/// Struct defined in srv/GetRobotMode in the package eli_common_interface.
typedef struct eli_common_interface__srv__GetRobotMode_Response
{
  bool success;
  rosidl_runtime_c__String message;
  eli_common_interface__msg__RobotMode mode;
} eli_common_interface__srv__GetRobotMode_Response;

// Struct for a sequence of eli_common_interface__srv__GetRobotMode_Response.
typedef struct eli_common_interface__srv__GetRobotMode_Response__Sequence
{
  eli_common_interface__srv__GetRobotMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__srv__GetRobotMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_ROBOT_MODE__STRUCT_H_
