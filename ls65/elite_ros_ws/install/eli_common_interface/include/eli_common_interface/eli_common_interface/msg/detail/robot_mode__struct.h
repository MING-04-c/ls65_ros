// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__ROBOT_MODE__STRUCT_H_

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
  eli_common_interface__msg__RobotMode__UNKNOWN = -2
};

/// Constant 'NO_CONTROLLER'.
enum
{
  eli_common_interface__msg__RobotMode__NO_CONTROLLER = -1
};

/// Constant 'DISCONNECTED'.
enum
{
  eli_common_interface__msg__RobotMode__DISCONNECTED = 0
};

/// Constant 'CONFIRM_SAFETY'.
enum
{
  eli_common_interface__msg__RobotMode__CONFIRM_SAFETY = 1
};

/// Constant 'BOOTING'.
enum
{
  eli_common_interface__msg__RobotMode__BOOTING = 2
};

/// Constant 'POWER_OFF'.
enum
{
  eli_common_interface__msg__RobotMode__POWER_OFF = 3
};

/// Constant 'POWER_ON'.
enum
{
  eli_common_interface__msg__RobotMode__POWER_ON = 4
};

/// Constant 'IDLE'.
enum
{
  eli_common_interface__msg__RobotMode__IDLE = 5
};

/// Constant 'BACKDRIVE'.
enum
{
  eli_common_interface__msg__RobotMode__BACKDRIVE = 6
};

/// Constant 'RUNNING'.
enum
{
  eli_common_interface__msg__RobotMode__RUNNING = 7
};

/// Constant 'UPDATING_FIRMWARE'.
enum
{
  eli_common_interface__msg__RobotMode__UPDATING_FIRMWARE = 8
};

/// Constant 'WAITING_CALIBRATION'.
enum
{
  eli_common_interface__msg__RobotMode__WAITING_CALIBRATION = 9
};

/// Struct defined in msg/RobotMode in the package eli_common_interface.
typedef struct eli_common_interface__msg__RobotMode
{
  int8_t mode;
} eli_common_interface__msg__RobotMode;

// Struct for a sequence of eli_common_interface__msg__RobotMode.
typedef struct eli_common_interface__msg__RobotMode__Sequence
{
  eli_common_interface__msg__RobotMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__msg__RobotMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
