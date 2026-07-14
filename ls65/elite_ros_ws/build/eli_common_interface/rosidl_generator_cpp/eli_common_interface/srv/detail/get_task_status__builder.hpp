// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:srv/GetTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/srv/detail/get_task_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::srv::GetTaskStatus_Request>()
{
  return ::eli_common_interface::srv::GetTaskStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace eli_common_interface


namespace eli_common_interface
{

namespace srv
{

namespace builder
{

class Init_GetTaskStatus_Response_status
{
public:
  explicit Init_GetTaskStatus_Response_status(::eli_common_interface::srv::GetTaskStatus_Response & msg)
  : msg_(msg)
  {}
  ::eli_common_interface::srv::GetTaskStatus_Response status(::eli_common_interface::srv::GetTaskStatus_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::srv::GetTaskStatus_Response msg_;
};

class Init_GetTaskStatus_Response_message
{
public:
  explicit Init_GetTaskStatus_Response_message(::eli_common_interface::srv::GetTaskStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetTaskStatus_Response_status message(::eli_common_interface::srv::GetTaskStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetTaskStatus_Response_status(msg_);
  }

private:
  ::eli_common_interface::srv::GetTaskStatus_Response msg_;
};

class Init_GetTaskStatus_Response_success
{
public:
  Init_GetTaskStatus_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTaskStatus_Response_message success(::eli_common_interface::srv::GetTaskStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetTaskStatus_Response_message(msg_);
  }

private:
  ::eli_common_interface::srv::GetTaskStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::srv::GetTaskStatus_Response>()
{
  return eli_common_interface::srv::builder::Init_GetTaskStatus_Response_success();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__BUILDER_HPP_
