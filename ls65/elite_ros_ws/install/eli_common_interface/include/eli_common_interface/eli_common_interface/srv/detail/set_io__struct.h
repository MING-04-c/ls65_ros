// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__STRUCT_H_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FUN_SET_DIGITAL_OUT'.
enum
{
  eli_common_interface__srv__SetIO_Request__FUN_SET_DIGITAL_OUT = 1
};

/// Constant 'FUN_SET_CONFIGURE_OUT'.
enum
{
  eli_common_interface__srv__SetIO_Request__FUN_SET_CONFIGURE_OUT = 2
};

/// Constant 'FUN_SET_TOOL_DIG_OUT'.
enum
{
  eli_common_interface__srv__SetIO_Request__FUN_SET_TOOL_DIG_OUT = 3
};

/// Constant 'FUN_SET_ANALOG_OUT'.
enum
{
  eli_common_interface__srv__SetIO_Request__FUN_SET_ANALOG_OUT = 4
};

/// Constant 'FUN_SET_TOOL_VOLTAGE'.
enum
{
  eli_common_interface__srv__SetIO_Request__FUN_SET_TOOL_VOLTAGE = 5
};

/// Constant 'STATE_OFF'.
/**
  * valid values for 'state' when setting digital IO or flags
 */
enum
{
  eli_common_interface__srv__SetIO_Request__STATE_OFF = 0
};

/// Constant 'STATE_ON'.
enum
{
  eli_common_interface__srv__SetIO_Request__STATE_ON = 1
};

/// Constant 'STATE_TOOL_VOLTAGE_0V'.
/**
  * valid 'state' values when setting tool voltage
 */
enum
{
  eli_common_interface__srv__SetIO_Request__STATE_TOOL_VOLTAGE_0V = 0
};

/// Constant 'STATE_TOOL_VOLTAGE_12V'.
enum
{
  eli_common_interface__srv__SetIO_Request__STATE_TOOL_VOLTAGE_12V = 12
};

/// Constant 'STATE_TOOL_VOLTAGE_24V'.
enum
{
  eli_common_interface__srv__SetIO_Request__STATE_TOOL_VOLTAGE_24V = 24
};

/// Constant 'ANALOG_CURRENT'.
/**
  * valid 'analog_type' values when setting analog io
 */
enum
{
  eli_common_interface__srv__SetIO_Request__ANALOG_CURRENT = 0
};

/// Constant 'ANALOG_VOLTAGE'.
enum
{
  eli_common_interface__srv__SetIO_Request__ANALOG_VOLTAGE = 1
};

/// Struct defined in srv/SetIO in the package eli_common_interface.
typedef struct eli_common_interface__srv__SetIO_Request
{
  /// request fields
  int8_t fun;
  int8_t pin;
  int8_t analog_type;
  double state;
} eli_common_interface__srv__SetIO_Request;

// Struct for a sequence of eli_common_interface__srv__SetIO_Request.
typedef struct eli_common_interface__srv__SetIO_Request__Sequence
{
  eli_common_interface__srv__SetIO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__srv__SetIO_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetIO in the package eli_common_interface.
typedef struct eli_common_interface__srv__SetIO_Response
{
  bool success;
} eli_common_interface__srv__SetIO_Response;

// Struct for a sequence of eli_common_interface__srv__SetIO_Response.
typedef struct eli_common_interface__srv__SetIO_Response__Sequence
{
  eli_common_interface__srv__SetIO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__srv__SetIO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__STRUCT_H_
