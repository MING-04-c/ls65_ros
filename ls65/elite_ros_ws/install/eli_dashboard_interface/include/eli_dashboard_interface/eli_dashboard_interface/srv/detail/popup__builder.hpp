// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_dashboard_interface:srv/Popup.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__POPUP__BUILDER_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__POPUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_dashboard_interface/srv/detail/popup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_Popup_Request_message
{
public:
  explicit Init_Popup_Request_message(::eli_dashboard_interface::srv::Popup_Request & msg)
  : msg_(msg)
  {}
  ::eli_dashboard_interface::srv::Popup_Request message(::eli_dashboard_interface::srv::Popup_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Popup_Request msg_;
};

class Init_Popup_Request_arg
{
public:
  Init_Popup_Request_arg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Popup_Request_message arg(::eli_dashboard_interface::srv::Popup_Request::_arg_type arg)
  {
    msg_.arg = std::move(arg);
    return Init_Popup_Request_message(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Popup_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::Popup_Request>()
{
  return eli_dashboard_interface::srv::builder::Init_Popup_Request_arg();
}

}  // namespace eli_dashboard_interface


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_Popup_Response_message
{
public:
  explicit Init_Popup_Response_message(::eli_dashboard_interface::srv::Popup_Response & msg)
  : msg_(msg)
  {}
  ::eli_dashboard_interface::srv::Popup_Response message(::eli_dashboard_interface::srv::Popup_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Popup_Response msg_;
};

class Init_Popup_Response_success
{
public:
  Init_Popup_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Popup_Response_message success(::eli_dashboard_interface::srv::Popup_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Popup_Response_message(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Popup_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::Popup_Response>()
{
  return eli_dashboard_interface::srv::builder::Init_Popup_Response_success();
}

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__POPUP__BUILDER_HPP_
