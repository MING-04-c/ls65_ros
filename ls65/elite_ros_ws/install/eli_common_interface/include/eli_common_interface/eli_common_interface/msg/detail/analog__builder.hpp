// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eli_common_interface:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__BUILDER_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eli_common_interface/msg/detail/analog__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eli_common_interface
{

namespace msg
{

namespace builder
{

class Init_Analog_value
{
public:
  explicit Init_Analog_value(::eli_common_interface::msg::Analog & msg)
  : msg_(msg)
  {}
  ::eli_common_interface::msg::Analog value(::eli_common_interface::msg::Analog::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eli_common_interface::msg::Analog msg_;
};

class Init_Analog_type
{
public:
  Init_Analog_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analog_value type(::eli_common_interface::msg::Analog::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Analog_value(msg_);
  }

private:
  ::eli_common_interface::msg::Analog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eli_common_interface::msg::Analog>()
{
  return eli_common_interface::msg::builder::Init_Analog_type();
}

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__BUILDER_HPP_
