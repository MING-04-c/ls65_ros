// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "eli_common_interface/msg/detail/io_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace eli_common_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IOState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) eli_common_interface::msg::IOState(_init);
}

void IOState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<eli_common_interface::msg::IOState *>(message_memory);
  typed_message->~IOState();
}

size_t size_function__IOState__standard_out(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOState__standard_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOState__standard_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOState__standard_out(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__config_out(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOState__config_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOState__config_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOState__config_out(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__tool_out(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOState__tool_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOState__tool_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOState__tool_out(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__standard_in(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOState__standard_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOState__standard_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOState__standard_in(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__config_in(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOState__config_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOState__config_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOState__config_in(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__tool_in(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__IOState__tool_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__IOState__tool_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__IOState__tool_in(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__standard_analog_out(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOState__standard_analog_out(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  return &member[index];
}

void * get_function__IOState__standard_analog_out(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOState__standard_analog_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const eli_common_interface::msg::Analog *>(
    get_const_function__IOState__standard_analog_out(untyped_member, index));
  auto & value = *reinterpret_cast<eli_common_interface::msg::Analog *>(untyped_value);
  value = item;
}

void assign_function__IOState__standard_analog_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<eli_common_interface::msg::Analog *>(
    get_function__IOState__standard_analog_out(untyped_member, index));
  const auto & value = *reinterpret_cast<const eli_common_interface::msg::Analog *>(untyped_value);
  item = value;
}

void resize_function__IOState__standard_analog_out(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IOState__standard_analog_in(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IOState__standard_analog_in(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  return &member[index];
}

void * get_function__IOState__standard_analog_in(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  return &member[index];
}

void fetch_function__IOState__standard_analog_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const eli_common_interface::msg::Analog *>(
    get_const_function__IOState__standard_analog_in(untyped_member, index));
  auto & value = *reinterpret_cast<eli_common_interface::msg::Analog *>(untyped_value);
  value = item;
}

void assign_function__IOState__standard_analog_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<eli_common_interface::msg::Analog *>(
    get_function__IOState__standard_analog_in(untyped_member, index));
  const auto & value = *reinterpret_cast<const eli_common_interface::msg::Analog *>(untyped_value);
  item = value;
}

void resize_function__IOState__standard_analog_in(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<eli_common_interface::msg::Analog> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IOState_message_member_array[8] = {
  {
    "standard_out",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, standard_out),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__standard_out,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOState__standard_out,  // fetch(index, &value) function pointer
    assign_function__IOState__standard_out,  // assign(index, value) function pointer
    resize_function__IOState__standard_out  // resize(index) function pointer
  },
  {
    "config_out",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, config_out),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__config_out,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOState__config_out,  // fetch(index, &value) function pointer
    assign_function__IOState__config_out,  // assign(index, value) function pointer
    resize_function__IOState__config_out  // resize(index) function pointer
  },
  {
    "tool_out",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, tool_out),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__tool_out,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOState__tool_out,  // fetch(index, &value) function pointer
    assign_function__IOState__tool_out,  // assign(index, value) function pointer
    resize_function__IOState__tool_out  // resize(index) function pointer
  },
  {
    "standard_in",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, standard_in),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__standard_in,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOState__standard_in,  // fetch(index, &value) function pointer
    assign_function__IOState__standard_in,  // assign(index, value) function pointer
    resize_function__IOState__standard_in  // resize(index) function pointer
  },
  {
    "config_in",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, config_in),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__config_in,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOState__config_in,  // fetch(index, &value) function pointer
    assign_function__IOState__config_in,  // assign(index, value) function pointer
    resize_function__IOState__config_in  // resize(index) function pointer
  },
  {
    "tool_in",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, tool_in),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__tool_in,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__IOState__tool_in,  // fetch(index, &value) function pointer
    assign_function__IOState__tool_in,  // assign(index, value) function pointer
    resize_function__IOState__tool_in  // resize(index) function pointer
  },
  {
    "standard_analog_out",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<eli_common_interface::msg::Analog>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, standard_analog_out),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__standard_analog_out,  // size() function pointer
    get_const_function__IOState__standard_analog_out,  // get_const(index) function pointer
    get_function__IOState__standard_analog_out,  // get(index) function pointer
    fetch_function__IOState__standard_analog_out,  // fetch(index, &value) function pointer
    assign_function__IOState__standard_analog_out,  // assign(index, value) function pointer
    resize_function__IOState__standard_analog_out  // resize(index) function pointer
  },
  {
    "standard_analog_in",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<eli_common_interface::msg::Analog>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface::msg::IOState, standard_analog_in),  // bytes offset in struct
    nullptr,  // default value
    size_function__IOState__standard_analog_in,  // size() function pointer
    get_const_function__IOState__standard_analog_in,  // get_const(index) function pointer
    get_function__IOState__standard_analog_in,  // get(index) function pointer
    fetch_function__IOState__standard_analog_in,  // fetch(index, &value) function pointer
    assign_function__IOState__standard_analog_in,  // assign(index, value) function pointer
    resize_function__IOState__standard_analog_in  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IOState_message_members = {
  "eli_common_interface::msg",  // message namespace
  "IOState",  // message name
  8,  // number of fields
  sizeof(eli_common_interface::msg::IOState),
  IOState_message_member_array,  // message members
  IOState_init_function,  // function to initialize message memory (memory has to be allocated)
  IOState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IOState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IOState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace eli_common_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<eli_common_interface::msg::IOState>()
{
  return &::eli_common_interface::msg::rosidl_typesupport_introspection_cpp::IOState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, eli_common_interface, msg, IOState)() {
  return &::eli_common_interface::msg::rosidl_typesupport_introspection_cpp::IOState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
