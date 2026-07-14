// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace msg
{

namespace builder
{

class Init_IOState_standard_analog_in
{
public:
  explicit Init_IOState_standard_analog_in(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  ::eli_common_interface::msg::IOState standard_analog_in(::eli_common_interface::msg::IOState::_standard_analog_in_type arg)
  {
    msg_.standard_analog_in = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_standard_analog_out
{
public:
  explicit Init_IOState_standard_analog_out(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_standard_analog_in standard_analog_out(::eli_common_interface::msg::IOState::_standard_analog_out_type arg)
  {
    msg_.standard_analog_out = std::move(arg);
    return Init_IOState_standard_analog_in(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_tool_in
{
public:
  explicit Init_IOState_tool_in(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_standard_analog_out tool_in(::eli_common_interface::msg::IOState::_tool_in_type arg)
  {
    msg_.tool_in = std::move(arg);
    return Init_IOState_standard_analog_out(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_config_in
{
public:
  explicit Init_IOState_config_in(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_tool_in config_in(::eli_common_interface::msg::IOState::_config_in_type arg)
  {
    msg_.config_in = std::move(arg);
    return Init_IOState_tool_in(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_standard_in
{
public:
  explicit Init_IOState_standard_in(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_config_in standard_in(::eli_common_interface::msg::IOState::_standard_in_type arg)
  {
    msg_.standard_in = std::move(arg);
    return Init_IOState_config_in(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_tool_out
{
public:
  explicit Init_IOState_tool_out(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_standard_in tool_out(::eli_common_interface::msg::IOState::_tool_out_type arg)
  {
    msg_.tool_out = std::move(arg);
    return Init_IOState_standard_in(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_config_out
{
public:
  explicit Init_IOState_config_out(::eli_common_interface::msg::IOState & msg)
  : msg_(msg)
  {}
  Init_IOState_tool_out config_out(::eli_common_interface::msg::IOState::_config_out_type arg)
  {
    msg_.config_out = std::move(arg);
    return Init_IOState_tool_out(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

class Init_IOState_standard_out
{
public:
  Init_IOState_standard_out()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOState_config_out standard_out(::eli_common_interface::msg::IOState::_standard_out_type arg)
  {
    msg_.standard_out = std::move(arg);
    return Init_IOState_config_out(msg_);
  }

private:
  ::eli_common_interface::msg::IOState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::msg::IOState>()
{
  return eli_common_interface::msg::builder::Init_IOState_standard_out();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__BUILDER_HPP_
