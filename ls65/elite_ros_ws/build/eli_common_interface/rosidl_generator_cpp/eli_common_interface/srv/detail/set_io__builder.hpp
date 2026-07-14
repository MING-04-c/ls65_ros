// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/srv/detail/set_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace srv
{

namespace builder
{

class Init_SetIO_Request_state
{
public:
  explicit Init_SetIO_Request_state(::eli_common_interface::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  ::eli_common_interface::srv::SetIO_Request state(::eli_common_interface::srv::SetIO_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_analog_type
{
public:
  explicit Init_SetIO_Request_analog_type(::eli_common_interface::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  Init_SetIO_Request_state analog_type(::eli_common_interface::srv::SetIO_Request::_analog_type_type arg)
  {
    msg_.analog_type = std::move(arg);
    return Init_SetIO_Request_state(msg_);
  }

private:
  ::eli_common_interface::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_pin
{
public:
  explicit Init_SetIO_Request_pin(::eli_common_interface::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  Init_SetIO_Request_analog_type pin(::eli_common_interface::srv::SetIO_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_SetIO_Request_analog_type(msg_);
  }

private:
  ::eli_common_interface::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_fun
{
public:
  Init_SetIO_Request_fun()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetIO_Request_pin fun(::eli_common_interface::srv::SetIO_Request::_fun_type arg)
  {
    msg_.fun = std::move(arg);
    return Init_SetIO_Request_pin(msg_);
  }

private:
  ::eli_common_interface::srv::SetIO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::srv::SetIO_Request>()
{
  return eli_common_interface::srv::builder::Init_SetIO_Request_fun();
}

}  // namespace eli_common_interface


namespace eli_common_interface
{

namespace srv
{

namespace builder
{

class Init_SetIO_Response_success
{
public:
  Init_SetIO_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_common_interface::srv::SetIO_Response success(::eli_common_interface::srv::SetIO_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::srv::SetIO_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::srv::SetIO_Response>()
{
  return eli_common_interface::srv::builder::Init_SetIO_Response_success();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__SET_IO__BUILDER_HPP_
