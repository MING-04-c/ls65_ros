// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_common_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace eli_common_interface

namespace rosidl_generator_traits
{

[[deprecated("use eli_common_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eli_common_interface::msg::TaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::msg::TaskStatus & msg)
{
  return eli_common_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::msg::TaskStatus>()
{
  return "eli_common_interface::msg::TaskStatus";
}

template<>
inline const char * name<eli_common_interface::msg::TaskStatus>()
{
  return "eli_common_interface/msg/TaskStatus";
}

template<>
struct has_fixed_size<eli_common_interface::msg::TaskStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::msg::TaskStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::msg::TaskStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_
