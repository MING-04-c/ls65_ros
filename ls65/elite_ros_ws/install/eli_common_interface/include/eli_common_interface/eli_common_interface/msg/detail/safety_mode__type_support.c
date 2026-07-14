// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eli_common_interface:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eli_common_interface/msg/detail/safety_mode__rosidl_typesupport_introspection_c.h"
#include "eli_common_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eli_common_interface/msg/detail/safety_mode__functions.h"
#include "eli_common_interface/msg/detail/safety_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eli_common_interface__msg__SafetyMode__init(message_memory);
}

void eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_fini_function(void * message_memory)
{
  eli_common_interface__msg__SafetyMode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_member_array[1] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__SafetyMode, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_members = {
  "eli_common_interface__msg",  // message namespace
  "SafetyMode",  // message name
  1,  // number of fields
  sizeof(eli_common_interface__msg__SafetyMode),
  eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_member_array,  // message members
  eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_init_function,  // function to initialize message memory (memory has to be allocated)
  eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_type_support_handle = {
  0,
  &eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eli_common_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, msg, SafetyMode)() {
  if (!eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_type_support_handle.typesupport_identifier) {
    eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eli_common_interface__msg__SafetyMode__rosidl_typesupport_introspection_c__SafetyMode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
