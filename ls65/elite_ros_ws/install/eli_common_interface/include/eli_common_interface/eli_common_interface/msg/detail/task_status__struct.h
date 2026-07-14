// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__STRUCT_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  eli_common_interface__msg__TaskStatus__UNKNOWN = -1
};

/// Constant 'STOPPED'.
enum
{
  eli_common_interface__msg__TaskStatus__STOPPED = 0
};

/// Constant 'PAUSED'.
enum
{
  eli_common_interface__msg__TaskStatus__PAUSED = 1
};

/// Constant 'PLAYING'.
enum
{
  eli_common_interface__msg__TaskStatus__PLAYING = 2
};

/// Struct defined in msg/TaskStatus in the package eli_common_interface.
typedef struct eli_common_interface__msg__TaskStatus
{
  int8_t status;
} eli_common_interface__msg__TaskStatus;

// Struct for a sequence of eli_common_interface__msg__TaskStatus.
typedef struct eli_common_interface__msg__TaskStatus__Sequence
{
  eli_common_interface__msg__TaskStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__msg__TaskStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__STRUCT_H_
