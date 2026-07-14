// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__STRUCT_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Analog in the package eli_common_interface.
typedef struct eli_common_interface__msg__Analog
{
  uint8_t type;
  double value;
} eli_common_interface__msg__Analog;

// Struct for a sequence of eli_common_interface__msg__Analog.
typedef struct eli_common_interface__msg__Analog__Sequence
{
  eli_common_interface__msg__Analog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__msg__Analog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__STRUCT_H_
