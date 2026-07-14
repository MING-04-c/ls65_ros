// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:srv/GetTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/srv/detail/get_task_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTaskStatus_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTaskStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTaskStatus_Request & msg, bool use_flow_style = false)
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
  const eli_common_interface::srv::GetTaskStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::GetTaskStatus_Request & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::GetTaskStatus_Request>()
{
  return "eli_common_interface::srv::GetTaskStatus_Request";
}

template<>
inline const char * name<eli_common_interface::srv::GetTaskStatus_Request>()
{
  return "eli_common_interface/srv/GetTaskStatus_Request";
}

template<>
struct has_fixed_size<eli_common_interface::srv::GetTaskStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::srv::GetTaskStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::srv::GetTaskStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "eli_common_interface/msg/detail/task_status__traits.hpp"

namespace eli_common_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTaskStatus_Response & msg,
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

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTaskStatus_Response & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTaskStatus_Response & msg, bool use_flow_style = false)
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
  const eli_common_interface::srv::GetTaskStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::srv::GetTaskStatus_Response & msg)
{
  return eli_common_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::srv::GetTaskStatus_Response>()
{
  return "eli_common_interface::srv::GetTaskStatus_Response";
}

template<>
inline const char * name<eli_common_interface::srv::GetTaskStatus_Response>()
{
  return "eli_common_interface/srv/GetTaskStatus_Response";
}

template<>
struct has_fixed_size<eli_common_interface::srv::GetTaskStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eli_common_interface::srv::GetTaskStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eli_common_interface::srv::GetTaskStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eli_common_interface::srv::GetTaskStatus>()
{
  return "eli_common_interface::srv::GetTaskStatus";
}

template<>
inline const char * name<eli_common_interface::srv::GetTaskStatus>()
{
  return "eli_common_interface/srv/GetTaskStatus";
}

template<>
struct has_fixed_size<eli_common_interface::srv::GetTaskStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<eli_common_interface::srv::GetTaskStatus_Request>::value &&
    has_fixed_size<eli_common_interface::srv::GetTaskStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<eli_common_interface::srv::GetTaskStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<eli_common_interface::srv::GetTaskStatus_Request>::value &&
    has_bounded_size<eli_common_interface::srv::GetTaskStatus_Response>::value
  >
{
};

template<>
struct is_service<eli_common_interface::srv::GetTaskStatus>
  : std::true_type
{
};

template<>
struct is_service_request<eli_common_interface::srv::GetTaskStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eli_common_interface::srv::GetTaskStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__TRAITS_HPP_
