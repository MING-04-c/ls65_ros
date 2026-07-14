// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__STRUCT_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'standard_out'
// Member 'config_out'
// Member 'tool_out'
// Member 'standard_in'
// Member 'config_in'
// Member 'tool_in'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'standard_analog_out'
// Member 'standard_analog_in'
#include "eli_common_interface/msg/detail/analog__struct.h"

/// Struct defined in msg/IOState in the package eli_common_interface.
typedef struct eli_common_interface__msg__IOState
{
  rosidl_runtime_c__boolean__Sequence standard_out;
  rosidl_runtime_c__boolean__Sequence config_out;
  rosidl_runtime_c__boolean__Sequence tool_out;
  rosidl_runtime_c__boolean__Sequence standard_in;
  rosidl_runtime_c__boolean__Sequence config_in;
  rosidl_runtime_c__boolean__Sequence tool_in;
  eli_common_interface__msg__Analog__Sequence standard_analog_out;
  eli_common_interface__msg__Analog__Sequence standard_analog_in;
} eli_common_interface__msg__IOState;

// Struct for a sequence of eli_common_interface__msg__IOState.
typedef struct eli_common_interface__msg__IOState__Sequence
{
  eli_common_interface__msg__IOState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__msg__IOState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__STRUCT_H_
