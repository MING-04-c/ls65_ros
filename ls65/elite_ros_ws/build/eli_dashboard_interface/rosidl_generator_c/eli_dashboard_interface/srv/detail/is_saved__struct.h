// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_dashboard_interface:srv/IsSaved.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__STRUCT_H_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IsSaved in the package eli_dashboard_interface.
typedef struct eli_dashboard_interface__srv__IsSaved_Request
{
  uint8_t structure_needs_at_least_one_member;
} eli_dashboard_interface__srv__IsSaved_Request;

// Struct for a sequence of eli_dashboard_interface__srv__IsSaved_Request.
typedef struct eli_dashboard_interface__srv__IsSaved_Request__Sequence
{
  eli_dashboard_interface__srv__IsSaved_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_dashboard_interface__srv__IsSaved_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IsSaved in the package eli_dashboard_interface.
typedef struct eli_dashboard_interface__srv__IsSaved_Response
{
  bool success;
  rosidl_runtime_c__String message;
  bool is_saved;
} eli_dashboard_interface__srv__IsSaved_Response;

// Struct for a sequence of eli_dashboard_interface__srv__IsSaved_Response.
typedef struct eli_dashboard_interface__srv__IsSaved_Response__Sequence
{
  eli_dashboard_interface__srv__IsSaved_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_dashboard_interface__srv__IsSaved_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__STRUCT_H_
