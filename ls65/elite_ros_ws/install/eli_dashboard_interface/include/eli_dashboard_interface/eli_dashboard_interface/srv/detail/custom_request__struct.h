// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_dashboard_interface:srv/CustomRequest.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__STRUCT_H_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CustomRequest in the package eli_dashboard_interface.
typedef struct eli_dashboard_interface__srv__CustomRequest_Request
{
  rosidl_runtime_c__String request;
} eli_dashboard_interface__srv__CustomRequest_Request;

// Struct for a sequence of eli_dashboard_interface__srv__CustomRequest_Request.
typedef struct eli_dashboard_interface__srv__CustomRequest_Request__Sequence
{
  eli_dashboard_interface__srv__CustomRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_dashboard_interface__srv__CustomRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CustomRequest in the package eli_dashboard_interface.
typedef struct eli_dashboard_interface__srv__CustomRequest_Response
{
  rosidl_runtime_c__String response;
} eli_dashboard_interface__srv__CustomRequest_Response;

// Struct for a sequence of eli_dashboard_interface__srv__CustomRequest_Response.
typedef struct eli_dashboard_interface__srv__CustomRequest_Response__Sequence
{
  eli_dashboard_interface__srv__CustomRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_dashboard_interface__srv__CustomRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__STRUCT_H_
