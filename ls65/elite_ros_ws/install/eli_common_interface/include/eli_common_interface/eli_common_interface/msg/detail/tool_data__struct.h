// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__STRUCT_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ToolData in the package eli_common_interface.
typedef struct eli_common_interface__msg__ToolData
{
  uint8_t mode;
  double output_voltage;
  double output_current;
  double temperature;
  uint8_t analog_input_type;
  double analog_input;
  uint8_t analog_output_type;
  double analog_output;
} eli_common_interface__msg__ToolData;

// Struct for a sequence of eli_common_interface__msg__ToolData.
typedef struct eli_common_interface__msg__ToolData__Sequence
{
  eli_common_interface__msg__ToolData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__msg__ToolData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__STRUCT_H_
