// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/srv/detail/set_speed_slider_fraction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace srv
{

namespace builder
{

class Init_SetSpeedSliderFraction_Request_speed_slider_fraction
{
public:
  Init_SetSpeedSliderFraction_Request_speed_slider_fraction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_common_interface::srv::SetSpeedSliderFraction_Request speed_slider_fraction(::eli_common_interface::srv::SetSpeedSliderFraction_Request::_speed_slider_fraction_type arg)
  {
    msg_.speed_slider_fraction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::srv::SetSpeedSliderFraction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::srv::SetSpeedSliderFraction_Request>()
{
  return eli_common_interface::srv::builder::Init_SetSpeedSliderFraction_Request_speed_slider_fraction();
}

}  // namespace eli_common_interface


namespace eli_common_interface
{

namespace srv
{

namespace builder
{

class Init_SetSpeedSliderFraction_Response_success
{
public:
  Init_SetSpeedSliderFraction_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eli_common_interface::srv::SetSpeedSliderFraction_Response success(::eli_common_interface::srv::SetSpeedSliderFraction_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::srv::SetSpeedSliderFraction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::srv::SetSpeedSliderFraction_Response>()
{
  return eli_common_interface::srv::builder::Init_SetSpeedSliderFraction_Response_success();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__BUILDER_HPP_
