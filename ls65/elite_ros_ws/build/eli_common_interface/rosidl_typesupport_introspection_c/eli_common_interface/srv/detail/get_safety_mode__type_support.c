// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eli_common_interface:srv/GetSafetyMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eli_common_interface/srv/detail/get_safety_mode__rosidl_typesupport_introspection_c.h"
#include "eli_common_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eli_common_interface/srv/detail/get_safety_mode__functions.h"
#include "eli_common_interface/srv/detail/get_safety_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eli_common_interface__srv__GetSafetyMode_Request__init(message_memory);
}

void eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_fini_function(void * message_memory)
{
  eli_common_interface__srv__GetSafetyMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__srv__GetSafetyMode_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_members = {
  "eli_common_interface__srv",  // message namespace
  "GetSafetyMode_Request",  // message name
  1,  // number of fields
  sizeof(eli_common_interface__srv__GetSafetyMode_Request),
  eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_member_array,  // message members
  eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_type_support_handle = {
  0,
  &eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eli_common_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode_Request)() {
  if (!eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_type_support_handle.typesupport_identifier) {
    eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eli_common_interface__srv__GetSafetyMode_Request__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "eli_common_interface/srv/detail/get_safety_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "eli_common_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "eli_common_interface/srv/detail/get_safety_mode__functions.h"
// already included above
// #include "eli_common_interface/srv/detail/get_safety_mode__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `mode`
#include "eli_common_interface/msg/safety_mode.h"
// Member `mode`
#include "eli_common_interface/msg/detail/safety_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eli_common_interface__srv__GetSafetyMode_Response__init(message_memory);
}

void eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_fini_function(void * message_memory)
{
  eli_common_interface__srv__GetSafetyMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__srv__GetSafetyMode_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__srv__GetSafetyMode_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__srv__GetSafetyMode_Response, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_members = {
  "eli_common_interface__srv",  // message namespace
  "GetSafetyMode_Response",  // message name
  3,  // number of fields
  sizeof(eli_common_interface__srv__GetSafetyMode_Response),
  eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_member_array,  // message members
  eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_type_support_handle = {
  0,
  &eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eli_common_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode_Response)() {
  eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, msg, SafetyMode)();
  if (!eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_type_support_handle.typesupport_identifier) {
    eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eli_common_interface__srv__GetSafetyMode_Response__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "eli_common_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "eli_common_interface/srv/detail/get_safety_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_members = {
  "eli_common_interface__srv",  // service namespace
  "GetSafetyMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_Request_message_type_support_handle,
  NULL  // response message
  // eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_type_support_handle = {
  0,
  &eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eli_common_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode)() {
  if (!eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_type_support_handle.typesupport_identifier) {
    eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, srv, GetSafetyMode_Response)()->data;
  }

  return &eli_common_interface__srv__detail__get_safety_mode__rosidl_typesupport_introspection_c__GetSafetyMode_service_type_support_handle;
}
