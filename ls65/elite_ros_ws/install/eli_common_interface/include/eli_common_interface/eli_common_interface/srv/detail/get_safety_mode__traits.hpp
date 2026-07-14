// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:srv/GetSafetyMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_SAFETY_MODE__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_SAFETY_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/srv/detail/get_safety_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSafetyMode_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSafetyMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSafetyMode_Request & msg, bool use_flow_style = false)
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
  const eli_common_interface::srv::GetSafetyMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::GetSafetyMode_Request & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::GetSafetyMode_Request>()
{
  return "eli_common_interface::srv::GetSafetyMode_Request";
}

template<>
inline const char * name<eli_common_interface::srv::GetSafetyMode_Request>()
{
  return "eli_common_interface/srv/GetSafetyMode_Request";
}

template<>
struct has_fixed_size<eli_common_interface::srv::GetSafetyMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::srv::GetSafetyMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::srv::GetSafetyMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'mode'
#include "eli_common_interface/msg/detail/safety_mode__traits.hpp"

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetSafetyMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetSafetyMode_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetSafetyMode_Response & msg, bool use_flow_style = false)
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
  const eli_common_interface::srv::GetSafetyMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::GetSafetyMode_Response & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::GetSafetyMode_Response>()
{
  return "eli_common_interface::srv::GetSafetyMode_Response";
}

template<>
inline const char * name<eli_common_interface::srv::GetSafetyMode_Response>()
{
  return "eli_common_interface/srv/GetSafetyMode_Response";
}

template<>
struct has_fixed_size<eli_common_interface::srv::GetSafetyMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eli_common_interface::srv::GetSafetyMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eli_common_interface::srv::GetSafetyMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eli_common_interface::srv::GetSafetyMode>()
{
  return "eli_common_interface::srv::GetSafetyMode";
}

template<>
inline const char * name<eli_common_interface::srv::GetSafetyMode>()
{
  return "eli_common_interface/srv/GetSafetyMode";
}

template<>
struct has_fixed_size<eli_common_interface::srv::GetSafetyMode>
  : std::integral_constant<
    bool,
    has_fixed_size<eli_common_interface::srv::GetSafetyMode_Request>::value &&
    has_fixed_size<eli_common_interface::srv::GetSafetyMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<eli_common_interface::srv::GetSafetyMode>
  : std::integral_constant<
    bool,
    has_bounded_size<eli_common_interface::srv::GetSafetyMode_Request>::value &&
    has_bounded_size<eli_common_interface::srv::GetSafetyMode_Response>::value
  >
{
};

template<>
struct is_service<eli_common_interface::srv::GetSafetyMode>
  : std::true_type
{
};

template<>
struct is_service_request<eli_common_interface::srv::GetSafetyMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eli_common_interface::srv::GetSafetyMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_SAFETY_MODE__TRAITS_HPP_
