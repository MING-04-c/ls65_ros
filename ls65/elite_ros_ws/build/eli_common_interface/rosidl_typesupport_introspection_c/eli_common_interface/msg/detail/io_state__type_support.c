// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eli_common_interface/msg/detail/io_state__rosidl_typesupport_introspection_c.h"
#include "eli_common_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eli_common_interface/msg/detail/io_state__functions.h"
#include "eli_common_interface/msg/detail/io_state__struct.h"


// Include directives for member types
// Member `standard_out`
// Member `config_out`
// Member `tool_out`
// Member `standard_in`
// Member `config_in`
// Member `tool_in`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `standard_analog_out`
// Member `standard_analog_in`
#include "eli_common_interface/msg/analog.h"
// Member `standard_analog_out`
// Member `standard_analog_in`
#include "eli_common_interface/msg/detail/analog__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eli_common_interface__msg__IOState__init(message_memory);
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_fini_function(void * message_memory)
{
  eli_common_interface__msg__IOState__fini(message_memory);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_out(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_out(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_out(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_out(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_out(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_out(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__config_out(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__config_out(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__config_out(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__config_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__config_out(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__config_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__config_out(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__config_out(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__tool_out(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__tool_out(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__tool_out(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__tool_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__tool_out(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__tool_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__tool_out(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__tool_out(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_in(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_in(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_in(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_in(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_in(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_in(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__config_in(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__config_in(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__config_in(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__config_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__config_in(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__config_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__config_in(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__config_in(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__tool_in(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__tool_in(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__tool_in(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__tool_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__tool_in(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__tool_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__tool_in(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__tool_in(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_analog_out(
  const void * untyped_member)
{
  const eli_common_interface__msg__Analog__Sequence * member =
    (const eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_analog_out(
  const void * untyped_member, size_t index)
{
  const eli_common_interface__msg__Analog__Sequence * member =
    (const eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_analog_out(
  void * untyped_member, size_t index)
{
  eli_common_interface__msg__Analog__Sequence * member =
    (eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_analog_out(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const eli_common_interface__msg__Analog * item =
    ((const eli_common_interface__msg__Analog *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_analog_out(untyped_member, index));
  eli_common_interface__msg__Analog * value =
    (eli_common_interface__msg__Analog *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_analog_out(
  void * untyped_member, size_t index, const void * untyped_value)
{
  eli_common_interface__msg__Analog * item =
    ((eli_common_interface__msg__Analog *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_analog_out(untyped_member, index));
  const eli_common_interface__msg__Analog * value =
    (const eli_common_interface__msg__Analog *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_analog_out(
  void * untyped_member, size_t size)
{
  eli_common_interface__msg__Analog__Sequence * member =
    (eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  eli_common_interface__msg__Analog__Sequence__fini(member);
  return eli_common_interface__msg__Analog__Sequence__init(member, size);
}

size_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_analog_in(
  const void * untyped_member)
{
  const eli_common_interface__msg__Analog__Sequence * member =
    (const eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  return member->size;
}

const void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_analog_in(
  const void * untyped_member, size_t index)
{
  const eli_common_interface__msg__Analog__Sequence * member =
    (const eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_analog_in(
  void * untyped_member, size_t index)
{
  eli_common_interface__msg__Analog__Sequence * member =
    (eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  return &member->data[index];
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_analog_in(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const eli_common_interface__msg__Analog * item =
    ((const eli_common_interface__msg__Analog *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_analog_in(untyped_member, index));
  eli_common_interface__msg__Analog * value =
    (eli_common_interface__msg__Analog *)(untyped_value);
  *value = *item;
}

void eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_analog_in(
  void * untyped_member, size_t index, const void * untyped_value)
{
  eli_common_interface__msg__Analog * item =
    ((eli_common_interface__msg__Analog *)
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_analog_in(untyped_member, index));
  const eli_common_interface__msg__Analog * value =
    (const eli_common_interface__msg__Analog *)(untyped_value);
  *item = *value;
}

bool eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_analog_in(
  void * untyped_member, size_t size)
{
  eli_common_interface__msg__Analog__Sequence * member =
    (eli_common_interface__msg__Analog__Sequence *)(untyped_member);
  eli_common_interface__msg__Analog__Sequence__fini(member);
  return eli_common_interface__msg__Analog__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array[8] = {
  {
    "standard_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, standard_out),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_out,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_out,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_out,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_out,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_out,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_out  // resize(index) function pointer
  },
  {
    "config_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, config_out),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__config_out,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__config_out,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__config_out,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__config_out,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__config_out,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__config_out  // resize(index) function pointer
  },
  {
    "tool_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, tool_out),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__tool_out,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__tool_out,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__tool_out,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__tool_out,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__tool_out,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__tool_out  // resize(index) function pointer
  },
  {
    "standard_in",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, standard_in),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_in,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_in,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_in,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_in,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_in,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_in  // resize(index) function pointer
  },
  {
    "config_in",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, config_in),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__config_in,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__config_in,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__config_in,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__config_in,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__config_in,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__config_in  // resize(index) function pointer
  },
  {
    "tool_in",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, tool_in),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__tool_in,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__tool_in,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__tool_in,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__tool_in,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__tool_in,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__tool_in  // resize(index) function pointer
  },
  {
    "standard_analog_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, standard_analog_out),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_analog_out,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_analog_out,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_analog_out,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_analog_out,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_analog_out,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_analog_out  // resize(index) function pointer
  },
  {
    "standard_analog_in",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eli_common_interface__msg__IOState, standard_analog_in),  // bytes offset in struct
    NULL,  // default value
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__size_function__IOState__standard_analog_in,  // size() function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_const_function__IOState__standard_analog_in,  // get_const(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__get_function__IOState__standard_analog_in,  // get(index) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__fetch_function__IOState__standard_analog_in,  // fetch(index, &value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__assign_function__IOState__standard_analog_in,  // assign(index, value) function pointer
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__resize_function__IOState__standard_analog_in  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_members = {
  "eli_common_interface__msg",  // message namespace
  "IOState",  // message name
  8,  // number of fields
  sizeof(eli_common_interface__msg__IOState),
  eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array,  // message members
  eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_init_function,  // function to initialize message memory (memory has to be allocated)
  eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle = {
  0,
  &eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eli_common_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, msg, IOState)() {
  eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, msg, Analog)();
  eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eli_common_interface, msg, Analog)();
  if (!eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle.typesupport_identifier) {
    eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eli_common_interface__msg__IOState__rosidl_typesupport_introspection_c__IOState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
