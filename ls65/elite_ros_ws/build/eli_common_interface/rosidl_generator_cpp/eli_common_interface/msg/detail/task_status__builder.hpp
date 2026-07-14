// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace msg
{

namespace builder
{

class Init_TaskStatus_status
{
public:
  Init_TaskStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_common_interface::msg::TaskStatus status(::eli_common_interface::msg::TaskStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::msg::TaskStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::msg::TaskStatus>()
{
  return eli_common_interface::msg::builder::Init_TaskStatus_status();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
