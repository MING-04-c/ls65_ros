// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_dashboard_interface:srv/Log.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOG__BUILDER_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_dashboard_interface/srv/detail/log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_Log_Request_message
{
public:
  Init_Log_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_dashboard_interface::srv::Log_Request message(::eli_dashboard_interface::srv::Log_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Log_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::Log_Request>()
{
  return eli_dashboard_interface::srv::builder::Init_Log_Request_message();
}

}  // namespace eli_dashboard_interface


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_Log_Response_success
{
public:
  explicit Init_Log_Response_success(::eli_dashboard_interface::srv::Log_Response & msg)
  : msg_(msg)
  {}
  ::eli_dashboard_interface::srv::Log_Response success(::eli_dashboard_interface::srv::Log_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Log_Response msg_;
};

class Init_Log_Response_message
{
public:
  Init_Log_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Log_Response_success message(::eli_dashboard_interface::srv::Log_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Log_Response_success(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Log_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::Log_Response>()
{
  return eli_dashboard_interface::srv::builder::Init_Log_Response_message();
}

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOG__BUILDER_HPP_
