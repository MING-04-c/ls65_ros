// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/srv/detail/set_speed_slider_fraction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeedSliderFraction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_slider_fraction
  {
    out << "speed_slider_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_slider_fraction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeedSliderFraction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_slider_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_slider_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_slider_fraction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeedSliderFraction_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace eli_common_interface

namespace rosidl_generator_traits
{

[[deprecated("use eli_common_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eli_common_interface::srv::SetSpeedSliderFraction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::SetSpeedSliderFraction_Request & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::SetSpeedSliderFraction_Request>()
{
  return "eli_common_interface::srv::SetSpeedSliderFraction_Request";
}

template<>
inline const char * name<eli_common_interface::srv::SetSpeedSliderFraction_Request>()
{
  return "eli_common_interface/srv/SetSpeedSliderFraction_Request";
}

template<>
struct has_fixed_size<eli_common_interface::srv::SetSpeedSliderFraction_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::srv::SetSpeedSliderFraction_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::srv::SetSpeedSliderFraction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeedSliderFraction_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeedSliderFraction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeedSliderFraction_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace eli_common_interface

namespace rosidl_generator_traits
{

[[deprecated("use eli_common_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eli_common_interface::srv::SetSpeedSliderFraction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::SetSpeedSliderFraction_Response & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::SetSpeedSliderFraction_Response>()
{
  return "eli_common_interface::srv::SetSpeedSliderFraction_Response";
}

template<>
inline const char * name<eli_common_interface::srv::SetSpeedSliderFraction_Response>()
{
  return "eli_common_interface/srv/SetSpeedSliderFraction_Response";
}

template<>
struct has_fixed_size<eli_common_interface::srv::SetSpeedSliderFraction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::srv::SetSpeedSliderFraction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::srv::SetSpeedSliderFraction_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eli_common_interface::srv::SetSpeedSliderFraction>()
{
  return "eli_common_interface::srv::SetSpeedSliderFraction";
}

template<>
inline const char * name<eli_common_interface::srv::SetSpeedSliderFraction>()
{
  return "eli_common_interface/srv/SetSpeedSliderFraction";
}

template<>
struct has_fixed_size<eli_common_interface::srv::SetSpeedSliderFraction>
  : std::integral_constant<
    bool,
    has_fixed_size<eli_common_interface::srv::SetSpeedSliderFraction_Request>::value &&
    has_fixed_size<eli_common_interface::srv::SetSpeedSliderFraction_Response>::value
  >
{
};

template<>
struct has_bounded_size<eli_common_interface::srv::SetSpeedSliderFraction>
  : std::integral_constant<
    bool,
    has_bounded_size<eli_common_interface::srv::SetSpeedSliderFraction_Request>::value &&
    has_bounded_size<eli_common_interface::srv::SetSpeedSliderFraction_Response>::value
  >
{
};

template<>
struct is_service<eli_common_interface::srv::SetSpeedSliderFraction>
  : std::true_type
{
};

template<>
struct is_service_request<eli_common_interface::srv::SetSpeedSliderFraction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eli_common_interface::srv::SetSpeedSliderFraction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__TRAITS_HPP_
