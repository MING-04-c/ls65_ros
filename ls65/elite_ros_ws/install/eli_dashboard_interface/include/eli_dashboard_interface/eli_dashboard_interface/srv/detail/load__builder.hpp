// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_dashboard_interface:srv/Load.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOAD__BUILDER_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_dashboard_interface/srv/detail/load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_Load_Request_filename
{
public:
  Init_Load_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_dashboard_interface::srv::Load_Request filename(::eli_dashboard_interface::srv::Load_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Load_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::Load_Request>()
{
  return eli_dashboard_interface::srv::builder::Init_Load_Request_filename();
}

}  // namespace eli_dashboard_interface


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_Load_Response_success
{
public:
  explicit Init_Load_Response_success(::eli_dashboard_interface::srv::Load_Response & msg)
  : msg_(msg)
  {}
  ::eli_dashboard_interface::srv::Load_Response success(::eli_dashboard_interface::srv::Load_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Load_Response msg_;
};

class Init_Load_Response_answer
{
public:
  Init_Load_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Load_Response_success answer(::eli_dashboard_interface::srv::Load_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return Init_Load_Response_success(msg_);
  }

private:
  ::eli_dashboard_interface::srv::Load_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::Load_Response>()
{
  return eli_dashboard_interface::srv::builder::Init_Load_Response_answer();
}

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOAD__BUILDER_HPP_
