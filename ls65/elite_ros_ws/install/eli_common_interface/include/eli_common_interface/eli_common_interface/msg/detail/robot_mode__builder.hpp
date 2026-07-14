// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/msg/detail/robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace msg
{

namespace builder
{

class Init_RobotMode_mode
{
public:
  Init_RobotMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_common_interface::msg::RobotMode mode(::eli_common_interface::msg::RobotMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::msg::RobotMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::msg::RobotMode>()
{
  return eli_common_interface::msg::builder::Init_RobotMode_mode();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
