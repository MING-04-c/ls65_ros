// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_dashboard_interface:srv/CustomRequest.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__TRAITS_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_dashboard_interface/srv/detail/custom_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_dashboard_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    rosidl_generator_traits::value_to_yaml(msg.request, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomRequest_Request & msg, bool use_flow_style = false)
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

}  // namespace eli_dashboard_interface

namespace rosidl_generator_traits
{

[[deprecated("use eli_dashboard_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eli_dashboard_interface::srv::CustomRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_dashboard_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_dashboard_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_dashboard_interface::srv::CustomRequest_Request & msg)
{
  return eli_dashboard_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_dashboard_interface::srv::CustomRequest_Request>()
{
  return "eli_dashboard_interface::srv::CustomRequest_Request";
}

template<>
inline const char * name<eli_dashboard_interface::srv::CustomRequest_Request>()
{
  return "eli_dashboard_interface/srv/CustomRequest_Request";
}

template<>
struct has_fixed_size<eli_dashboard_interface::srv::CustomRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eli_dashboard_interface::srv::CustomRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eli_dashboard_interface::srv::CustomRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace eli_dashboard_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const CustomRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomRequest_Response & msg, bool use_flow_style = false)
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

}  // namespace eli_dashboard_interface

namespace rosidl_generator_traits
{

[[deprecated("use eli_dashboard_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eli_dashboard_interface::srv::CustomRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_dashboard_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_dashboard_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_dashboard_interface::srv::CustomRequest_Response & msg)
{
  return eli_dashboard_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_dashboard_interface::srv::CustomRequest_Response>()
{
  return "eli_dashboard_interface::srv::CustomRequest_Response";
}

template<>
inline const char * name<eli_dashboard_interface::srv::CustomRequest_Response>()
{
  return "eli_dashboard_interface/srv/CustomRequest_Response";
}

template<>
struct has_fixed_size<eli_dashboard_interface::srv::CustomRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eli_dashboard_interface::srv::CustomRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eli_dashboard_interface::srv::CustomRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eli_dashboard_interface::srv::CustomRequest>()
{
  return "eli_dashboard_interface::srv::CustomRequest";
}

template<>
inline const char * name<eli_dashboard_interface::srv::CustomRequest>()
{
  return "eli_dashboard_interface/srv/CustomRequest";
}

template<>
struct has_fixed_size<eli_dashboard_interface::srv::CustomRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<eli_dashboard_interface::srv::CustomRequest_Request>::value &&
    has_fixed_size<eli_dashboard_interface::srv::CustomRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<eli_dashboard_interface::srv::CustomRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<eli_dashboard_interface::srv::CustomRequest_Request>::value &&
    has_bounded_size<eli_dashboard_interface::srv::CustomRequest_Response>::value
  >
{
};

template<>
struct is_service<eli_dashboard_interface::srv::CustomRequest>
  : std::true_type
{
};

template<>
struct is_service_request<eli_dashboard_interface::srv::CustomRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eli_dashboard_interface::srv::CustomRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__TRAITS_HPP_
