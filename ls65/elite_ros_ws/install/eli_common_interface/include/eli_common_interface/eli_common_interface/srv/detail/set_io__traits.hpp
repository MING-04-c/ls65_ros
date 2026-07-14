// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/srv/detail/set_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: fun
  {
    out << "fun: ";
    rosidl_generator_traits::value_to_yaml(msg.fun, out);
    out << ", ";
  }

  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: analog_type
  {
    out << "analog_type: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_type, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fun
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fun: ";
    rosidl_generator_traits::value_to_yaml(msg.fun, out);
    out << "\n";
  }

  // member: pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << "\n";
  }

  // member: analog_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_type: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_type, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetIO_Request & msg, bool use_flow_style = false)
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
  const eli_common_interface::srv::SetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::SetIO_Request & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::SetIO_Request>()
{
  return "eli_common_interface::srv::SetIO_Request";
}

template<>
inline const char * name<eli_common_interface::srv::SetIO_Request>()
{
  return "eli_common_interface/srv/SetIO_Request";
}

template<>
struct has_fixed_size<eli_common_interface::srv::SetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::srv::SetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::srv::SetIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Response & msg,
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
  const SetIO_Response & msg,
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

inline std::string to_yaml(const SetIO_Response & msg, bool use_flow_style = false)
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
  const eli_common_interface::srv::SetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::SetIO_Response & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::SetIO_Response>()
{
  return "eli_common_interface::srv::SetIO_Response";
}

template<>
inline const char * name<eli_common_interface::srv::SetIO_Response>()
{
  return "eli_common_interface/srv/SetIO_Response";
}

template<>
struct has_fixed_size<eli_common_interface::srv::SetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::srv::SetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::srv::SetIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eli_common_interface::srv::SetIO>()
{
  return "eli_common_interface::srv::SetIO";
}

template<>
inline const char * name<eli_common_interface::srv::SetIO>()
{
  return "eli_common_interface/srv/SetIO";
}

template<>
struct has_fixed_size<eli_common_interface::srv::SetIO>
  : std::integral_constant<
    bool,
    has_fixed_size<eli_common_interface::srv::SetIO_Request>::value &&
    has_fixed_size<eli_common_interface::srv::SetIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<eli_common_interface::srv::SetIO>
  : std::integral_constant<
    bool,
    has_bounded_size<eli_common_interface::srv::SetIO_Request>::value &&
    has_bounded_size<eli_common_interface::srv::SetIO_Response>::value
  >
{
};

template<>
struct is_service<eli_common_interface::srv::SetIO>
  : std::true_type
{
};

template<>
struct is_service_request<eli_common_interface::srv::SetIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eli_common_interface::srv::SetIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__TRAITS_HPP_
