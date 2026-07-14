// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/msg/detail/io_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "eli_common_interface/msg/detail/io_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace eli_common_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const eli_common_interface::msg::Analog &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  eli_common_interface::msg::Analog &);
size_t get_serialized_size(
  const eli_common_interface::msg::Analog &,
  size_t current_alignment);
size_t
max_serialized_size_Analog(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace eli_common_interface

// functions for eli_common_interface::msg::Analog already declared above


namespace eli_common_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
cdr_serialize(
  const eli_common_interface::msg::IOState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: standard_out
  {
    cdr << ros_message.standard_out;
  }
  // Member: config_out
  {
    cdr << ros_message.config_out;
  }
  // Member: tool_out
  {
    cdr << ros_message.tool_out;
  }
  // Member: standard_in
  {
    cdr << ros_message.standard_in;
  }
  // Member: config_in
  {
    cdr << ros_message.config_in;
  }
  // Member: tool_in
  {
    cdr << ros_message.tool_in;
  }
  // Member: standard_analog_out
  {
    size_t size = ros_message.standard_analog_out.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      eli_common_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.standard_analog_out[i],
        cdr);
    }
  }
  // Member: standard_analog_in
  {
    size_t size = ros_message.standard_analog_in.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      eli_common_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.standard_analog_in[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  eli_common_interface::msg::IOState & ros_message)
{
  // Member: standard_out
  {
    cdr >> ros_message.standard_out;
  }

  // Member: config_out
  {
    cdr >> ros_message.config_out;
  }

  // Member: tool_out
  {
    cdr >> ros_message.tool_out;
  }

  // Member: standard_in
  {
    cdr >> ros_message.standard_in;
  }

  // Member: config_in
  {
    cdr >> ros_message.config_in;
  }

  // Member: tool_in
  {
    cdr >> ros_message.tool_in;
  }

  // Member: standard_analog_out
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

    ros_message.standard_analog_out.resize(size);
    for (size_t i = 0; i < size; i++) {
      eli_common_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.standard_analog_out[i]);
    }
  }

  // Member: standard_analog_in
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

    ros_message.standard_analog_in.resize(size);
    for (size_t i = 0; i < size; i++) {
      eli_common_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.standard_analog_in[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
get_serialized_size(
  const eli_common_interface::msg::IOState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: standard_out
  {
    size_t array_size = ros_message.standard_out.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.standard_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: config_out
  {
    size_t array_size = ros_message.config_out.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.config_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_out
  {
    size_t array_size = ros_message.tool_out.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tool_out[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standard_in
  {
    size_t array_size = ros_message.standard_in.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.standard_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: config_in
  {
    size_t array_size = ros_message.config_in.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.config_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_in
  {
    size_t array_size = ros_message.tool_in.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tool_in[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standard_analog_out
  {
    size_t array_size = ros_message.standard_analog_out.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        eli_common_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.standard_analog_out[index], current_alignment);
    }
  }
  // Member: standard_analog_in
  {
    size_t array_size = ros_message.standard_analog_in.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        eli_common_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.standard_analog_in[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
max_serialized_size_IOState(
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


  // Member: standard_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: config_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tool_out
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: standard_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: config_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tool_in
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: standard_analog_out
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
      size_t inner_size =
        eli_common_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Analog(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: standard_analog_in
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
      size_t inner_size =
        eli_common_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Analog(
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
    using DataType = eli_common_interface::msg::IOState;
    is_plain =
      (
      offsetof(DataType, standard_analog_in) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IOState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const eli_common_interface::msg::IOState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IOState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<eli_common_interface::msg::IOState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IOState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const eli_common_interface::msg::IOState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IOState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IOState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IOState__callbacks = {
  "eli_common_interface::msg",
  "IOState",
  _IOState__cdr_serialize,
  _IOState__cdr_deserialize,
  _IOState__get_serialized_size,
  _IOState__max_serialized_size
};

static rosidl_message_type_support_t _IOState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IOState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace eli_common_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_eli_common_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<eli_common_interface::msg::IOState>()
{
  return &eli_common_interface::msg::typesupport_fastrtps_cpp::_IOState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, eli_common_interface, msg, IOState)() {
  return &eli_common_interface::msg::typesupport_fastrtps_cpp::_IOState__handle;
}

#ifdef __cplusplus
}
#endif
