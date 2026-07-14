// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__SAFETY_MODE__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__SAFETY_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/msg/detail/safety_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace msg
{

namespace builder
{

class Init_SafetyMode_mode
{
public:
  Init_SafetyMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_common_interface::msg::SafetyMode mode(::eli_common_interface::msg::SafetyMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::msg::SafetyMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::msg::SafetyMode>()
{
  return eli_common_interface::msg::builder::Init_SafetyMode_mode();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__SAFETY_MODE__BUILDER_HPP_
