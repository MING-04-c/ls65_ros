// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_dashboard_interface:srv/CustomRequest.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__BUILDER_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_dashboard_interface/srv/detail/custom_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_CustomRequest_Request_request
{
public:
  Init_CustomRequest_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_dashboard_interface::srv::CustomRequest_Request request(::eli_dashboard_interface::srv::CustomRequest_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::CustomRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::CustomRequest_Request>()
{
  return eli_dashboard_interface::srv::builder::Init_CustomRequest_Request_request();
}

}  // namespace eli_dashboard_interface


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_CustomRequest_Response_response
{
public:
  Init_CustomRequest_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_dashboard_interface::srv::CustomRequest_Response response(::eli_dashboard_interface::srv::CustomRequest_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::CustomRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::CustomRequest_Response>()
{
  return eli_dashboard_interface::srv::builder::Init_CustomRequest_Response_response();
}

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__CUSTOM_REQUEST__BUILDER_HPP_
