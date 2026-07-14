// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/msg/detail/tool_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace msg
{

namespace builder
{

class Init_ToolData_analog_output
{
public:
  explicit Init_ToolData_analog_output(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  ::eli_common_interface::msg::ToolData analog_output(::eli_common_interface::msg::ToolData::_analog_output_type arg)
  {
    msg_.analog_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_analog_output_type
{
public:
  explicit Init_ToolData_analog_output_type(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_analog_output analog_output_type(::eli_common_interface::msg::ToolData::_analog_output_type_type arg)
  {
    msg_.analog_output_type = std::move(arg);
    return Init_ToolData_analog_output(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_analog_input
{
public:
  explicit Init_ToolData_analog_input(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_analog_output_type analog_input(::eli_common_interface::msg::ToolData::_analog_input_type arg)
  {
    msg_.analog_input = std::move(arg);
    return Init_ToolData_analog_output_type(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_analog_input_type
{
public:
  explicit Init_ToolData_analog_input_type(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_analog_input analog_input_type(::eli_common_interface::msg::ToolData::_analog_input_type_type arg)
  {
    msg_.analog_input_type = std::move(arg);
    return Init_ToolData_analog_input(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_temperature
{
public:
  explicit Init_ToolData_temperature(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_analog_input_type temperature(::eli_common_interface::msg::ToolData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_ToolData_analog_input_type(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_output_current
{
public:
  explicit Init_ToolData_output_current(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_temperature output_current(::eli_common_interface::msg::ToolData::_output_current_type arg)
  {
    msg_.output_current = std::move(arg);
    return Init_ToolData_temperature(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_output_voltage
{
public:
  explicit Init_ToolData_output_voltage(::eli_common_interface::msg::ToolData & msg)
  : msg_(msg)
  {}
  Init_ToolData_output_current output_voltage(::eli_common_interface::msg::ToolData::_output_voltage_type arg)
  {
    msg_.output_voltage = std::move(arg);
    return Init_ToolData_output_current(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

class Init_ToolData_mode
{
public:
  Init_ToolData_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToolData_output_voltage mode(::eli_common_interface::msg::ToolData::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ToolData_output_voltage(msg_);
  }

private:
  ::eli_common_interface::msg::ToolData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::msg::ToolData>()
{
  return eli_common_interface::msg::builder::Init_ToolData_mode();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__BUILDER_HPP_
