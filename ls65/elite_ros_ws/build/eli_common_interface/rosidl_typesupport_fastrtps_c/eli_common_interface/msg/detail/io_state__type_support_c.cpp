// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/msg/detail/io_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "eli_common_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "eli_common_interface/msg/detail/io_state__struct.h"
#include "eli_common_interface/msg/detail/io_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "eli_common_interface/msg/detail/analog__functions.h"  // standard_analog_in, standard_analog_out
#include "rosidl_runtime_c/primitives_sequence.h"  // config_in, config_out, standard_in, standard_out, tool_in, tool_out
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // config_in, config_out, standard_in, standard_out, tool_in, tool_out

// forward declare type support functions
size_t get_serialized_size_eli_common_interface__msg__Analog(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_eli_common_interface__msg__Analog(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eli_common_interface, msg, Analog)();


using _IOState__ros_msg_type = eli_common_interface__msg__IOState;

static bool _IOState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IOState__ros_msg_type * ros_message = static_cast<const _IOState__ros_msg_type *>(untyped_ros_message);
  // Field name: standard_out
  {
    size_t size = ros_message->standard_out.size;
    auto array_ptr = ros_message->standard_out.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: config_out
  {
    size_t size = ros_message->config_out.size;
    auto array_ptr = ros_message->config_out.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tool_out
  {
    size_t size = ros_message->tool_out.size;
    auto array_ptr = ros_message->tool_out.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: standard_in
  {
    size_t size = ros_message->standard_in.size;
    auto array_ptr = ros_message->standard_in.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: config_in
  {
    size_t size = ros_message->config_in.size;
    auto array_ptr = ros_message->config_in.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tool_in
  {
    size_t size = ros_message->tool_in.size;
    auto array_ptr = ros_message->tool_in.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: standard_analog_out
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, eli_common_interface, msg, Analog
      )()->data);
    size_t size = ros_message->standard_analog_out.size;
    auto array_ptr = ros_message->standard_analog_out.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: standard_analog_in
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, eli_common_interface, msg, Analog
      )()->data);
    size_t size = ros_message->standard_analog_in.size;
    auto array_ptr = ros_message->standard_analog_in.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _IOState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IOState__ros_msg_type * ros_message = static_cast<_IOState__ros_msg_type *>(untyped_ros_message);
  // Field name: standard_out
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->standard_out.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->standard_out);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->standard_out, size)) {
      fprintf(stderr, "failed to create array for field 'standard_out'");
      return false;
    }
    auto array_ptr = ros_message->standard_out.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: config_out
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->config_out.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->config_out);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->config_out, size)) {
      fprintf(stderr, "failed to create array for field 'config_out'");
      return false;
    }
    auto array_ptr = ros_message->config_out.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: tool_out
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tool_out.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->tool_out);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->tool_out, size)) {
      fprintf(stderr, "failed to create array for field 'tool_out'");
      return false;
    }
    auto array_ptr = ros_message->tool_out.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: standard_in
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->standard_in.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->standard_in);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->standard_in, size)) {
      fprintf(stderr, "failed to create array for field 'standard_in'");
      return false;
    }
    auto array_ptr = ros_message->standard_in.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: config_in
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->config_in.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->config_in);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->config_in, size)) {
      fprintf(stderr, "failed to create array for field 'config_in'");
      return false;
    }
    auto array_ptr = ros_message->config_in.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: tool_in
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tool_in.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->tool_in);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->tool_in, size)) {
      fprintf(stderr, "failed to create array for field 'tool_in'");
      return false;
    }
    auto array_ptr = ros_message->tool_in.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: standard_analog_out
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, eli_common_interface, msg, Analog
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->standard_analog_out.data) {
      eli_common_interface__msg__Analog__Sequence__fini(&ros_message->standard_analog_out);
    }
    if (!eli_common_interface__msg__Analog__Sequence__init(&ros_message->standard_analog_out, size)) {
      fprintf(stderr, "failed to create array for field 'standard_analog_out'");
      return false;
    }
    auto array_ptr = ros_message->standard_analog_out.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: standard_analog_in
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, eli_common_interface, msg, Analog
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->standard_analog_in.data) {
      eli_common_interface__msg__Analog__Sequence__fini(&ros_message->standard_analog_in);
    }
    if (!eli_common_interface__msg__Analog__Sequence__init(&ros_message->standard_analog_in, size)) {
      fprintf(stderr, "failed to create array for field 'standard_analog_in'");
      return false;
    }
    auto array_ptr = ros_message->standard_analog_in.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_eli_common_interface
size_t get_serialized_size_eli_common_interface__msg__IOState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOState__ros_msg_type * ros_message = static_cast<const _IOState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name standard_out
  {
    size_t array_size = ros_message->standard_out.size;
    auto array_ptr = ros_message->standard_out.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name config_out
  {
    size_t array_size = ros_message->config_out.size;
    auto array_ptr = ros_message->config_out.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_out
  {
    size_t array_size = ros_message->tool_out.size;
    auto array_ptr = ros_message->tool_out.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name standard_in
  {
    size_t array_size = ros_message->standard_in.size;
    auto array_ptr = ros_message->standard_in.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name config_in
  {
    size_t array_size = ros_message->config_in.size;
    auto array_ptr = ros_message->config_in.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tool_in
  {
    size_t array_size = ros_message->tool_in.size;
    auto array_ptr = ros_message->tool_in.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name standard_analog_out
  {
    size_t array_size = ros_message->standard_analog_out.size;
    auto array_ptr = ros_message->standard_analog_out.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_eli_common_interface__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name standard_analog_in
  {
    size_t array_size = ros_message->standard_analog_in.size;
    auto array_ptr = ros_message->standard_analog_in.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_eli_common_interface__msg__Analog(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IOState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_eli_common_interface__msg__IOState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_eli_common_interface
size_t max_serialized_size_eli_common_interface__msg__IOState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: standard_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: config_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tool_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: standard_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: config_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tool_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: standard_analog_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_eli_common_interface__msg__Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: standard_analog_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_eli_common_interface__msg__Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = eli_common_interface__msg__IOState;
    is_plain =
      (
      offsetof(DataType, standard_analog_in) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IOState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_eli_common_interface__msg__IOState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IOState = {
  "eli_common_interface::msg",
  "IOState",
  _IOState__cdr_serialize,
  _IOState__cdr_deserialize,
  _IOState__get_serialized_size,
  _IOState__max_serialized_size
};

static rosidl_message_type_support_t _IOState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IOState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, eli_common_interface, msg, IOState)() {
  return &_IOState__type_support;
}

#if defined(__cplusplus)
}
#endif
