// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_dashboard_interface:srv/IsSaved.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__TRAITS_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_dashboard_interface/srv/detail/is_saved__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_dashboard_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsSaved_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsSaved_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsSaved_Request & msg, bool use_flow_style = false)
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
  const eli_dashboard_interface::srv::IsSaved_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_dashboard_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_dashboard_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_dashboard_interface::srv::IsSaved_Request & msg)
{
  return eli_dashboard_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_dashboard_interface::srv::IsSaved_Request>()
{
  return "eli_dashboard_interface::srv::IsSaved_Request";
}

template<>
inline const char * name<eli_dashboard_interface::srv::IsSaved_Request>()
{
  return "eli_dashboard_interface/srv/IsSaved_Request";
}

template<>
struct has_fixed_size<eli_dashboard_interface::srv::IsSaved_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_dashboard_interface::srv::IsSaved_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_dashboard_interface::srv::IsSaved_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace eli_dashboard_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsSaved_Response & msg,
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

  // member: is_saved
  {
    out << "is_saved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_saved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsSaved_Response & msg,
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

  // member: is_saved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_saved: ";
    rosidl_generator_traits::value_to_yaml(msg.is_saved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsSaved_Response & msg, bool use_flow_style = false)
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
  const eli_dashboard_interface::srv::IsSaved_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_dashboard_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_dashboard_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_dashboard_interface::srv::IsSaved_Response & msg)
{
  return eli_dashboard_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_dashboard_interface::srv::IsSaved_Response>()
{
  return "eli_dashboard_interface::srv::IsSaved_Response";
}

template<>
inline const char * name<eli_dashboard_interface::srv::IsSaved_Response>()
{
  return "eli_dashboard_interface/srv/IsSaved_Response";
}

template<>
struct has_fixed_size<eli_dashboard_interface::srv::IsSaved_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eli_dashboard_interface::srv::IsSaved_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eli_dashboard_interface::srv::IsSaved_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eli_dashboard_interface::srv::IsSaved>()
{
  return "eli_dashboard_interface::srv::IsSaved";
}

template<>
inline const char * name<eli_dashboard_interface::srv::IsSaved>()
{
  return "eli_dashboard_interface/srv/IsSaved";
}

template<>
struct has_fixed_size<eli_dashboard_interface::srv::IsSaved>
  : std::integral_constant<
    bool,
    has_fixed_size<eli_dashboard_interface::srv::IsSaved_Request>::value &&
    has_fixed_size<eli_dashboard_interface::srv::IsSaved_Response>::value
  >
{
};

template<>
struct has_bounded_size<eli_dashboard_interface::srv::IsSaved>
  : std::integral_constant<
    bool,
    has_bounded_size<eli_dashboard_interface::srv::IsSaved_Request>::value &&
    has_bounded_size<eli_dashboard_interface::srv::IsSaved_Response>::value
  >
{
};

template<>
struct is_service<eli_dashboard_interface::srv::IsSaved>
  : std::true_type
{
};

template<>
struct is_service_request<eli_dashboard_interface::srv::IsSaved_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eli_dashboard_interface::srv::IsSaved_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__TRAITS_HPP_
