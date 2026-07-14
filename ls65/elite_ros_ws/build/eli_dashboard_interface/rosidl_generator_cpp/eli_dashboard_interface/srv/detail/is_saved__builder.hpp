// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_dashboard_interface:srv/IsSaved.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__BUILDER_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_dashboard_interface/srv/detail/is_saved__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_dashboard_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::IsSaved_Request>()
{
  return ::eli_dashboard_interface::srv::IsSaved_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace eli_dashboard_interface


namespace eli_dashboard_interface
{

namespace srv
{

namespace builder
{

class Init_IsSaved_Response_is_saved
{
public:
  explicit Init_IsSaved_Response_is_saved(::eli_dashboard_interface::srv::IsSaved_Response & msg)
  : msg_(msg)
  {}
  ::eli_dashboard_interface::srv::IsSaved_Response is_saved(::eli_dashboard_interface::srv::IsSaved_Response::_is_saved_type arg)
  {
    msg_.is_saved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_dashboard_interface::srv::IsSaved_Response msg_;
};

class Init_IsSaved_Response_message
{
public:
  explicit Init_IsSaved_Response_message(::eli_dashboard_interface::srv::IsSaved_Response & msg)
  : msg_(msg)
  {}
  Init_IsSaved_Response_is_saved message(::eli_dashboard_interface::srv::IsSaved_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_IsSaved_Response_is_saved(msg_);
  }

private:
  ::eli_dashboard_interface::srv::IsSaved_Response msg_;
};

class Init_IsSaved_Response_success
{
public:
  Init_IsSaved_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsSaved_Response_message success(::eli_dashboard_interface::srv::IsSaved_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_IsSaved_Response_message(msg_);
  }

private:
  ::eli_dashboard_interface::srv::IsSaved_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_dashboard_interface::srv::IsSaved_Response>()
{
  return eli_dashboard_interface::srv::builder::Init_IsSaved_Response_success();
}

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__BUILDER_HPP_
