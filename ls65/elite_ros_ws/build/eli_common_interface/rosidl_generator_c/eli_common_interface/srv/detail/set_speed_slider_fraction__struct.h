// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eli_common_interface:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__STRUCT_H_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetSpeedSliderFraction in the package eli_common_interface.
typedef struct eli_common_interface__srv__SetSpeedSliderFraction_Request
{
  double speed_slider_fraction;
} eli_common_interface__srv__SetSpeedSliderFraction_Request;

// Struct for a sequence of eli_common_interface__srv__SetSpeedSliderFraction_Request.
typedef struct eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence
{
  eli_common_interface__srv__SetSpeedSliderFraction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__srv__SetSpeedSliderFraction_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetSpeedSliderFraction in the package eli_common_interface.
typedef struct eli_common_interface__srv__SetSpeedSliderFraction_Response
{
  bool success;
} eli_common_interface__srv__SetSpeedSliderFraction_Response;

// Struct for a sequence of eli_common_interface__srv__SetSpeedSliderFraction_Response.
typedef struct eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence
{
  eli_common_interface__srv__SetSpeedSliderFraction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eli_common_interface__srv__SetSpeedSliderFraction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__STRUCT_H_
