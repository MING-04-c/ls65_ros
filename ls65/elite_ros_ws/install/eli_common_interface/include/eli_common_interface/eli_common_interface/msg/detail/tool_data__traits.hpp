// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/msg/detail/tool_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eli_common_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ToolData & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: output_voltage
  {
    out << "output_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.output_voltage, out);
    out << ", ";
  }

  // member: output_current
  {
    out << "output_current: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: analog_input_type
  {
    out << "analog_input_type: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_input_type, out);
    out << ", ";
  }

  // member: analog_input
  {
    out << "analog_input: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_input, out);
    out << ", ";
  }

  // member: analog_output_type
  {
    out << "analog_output_type: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_output_type, out);
    out << ", ";
  }

  // member: analog_output
  {
    out << "analog_output: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToolData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: output_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.output_voltage, out);
    out << "\n";
  }

  // member: output_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: analog_input_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_input_type: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_input_type, out);
    out << "\n";
  }

  // member: analog_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_input: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_input, out);
    out << "\n";
  }

  // member: analog_output_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_output_type: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_output_type, out);
    out << "\n";
  }

  // member: analog_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_output: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToolData & msg, bool use_flow_style = false)
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
  const eli_common_interface::msg::ToolData & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::msg::ToolData & msg)
{
  return eli_common_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::msg::ToolData>()
{
  return "eli_common_interface::msg::ToolData";
}

template<>
inline const char * name<eli_common_interface::msg::ToolData>()
{
  return "eli_common_interface/msg/ToolData";
}

template<>
struct has_fixed_size<eli_common_interface::msg::ToolData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eli_common_interface::msg::ToolData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eli_common_interface::msg::ToolData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__TRAITS_HPP_
