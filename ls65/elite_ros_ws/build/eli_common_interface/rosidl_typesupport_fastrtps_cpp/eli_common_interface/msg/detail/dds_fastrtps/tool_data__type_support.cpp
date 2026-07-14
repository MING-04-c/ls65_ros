// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from eli_common_interface:msg/ToolData.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/msg/detail/tool_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "eli_common_interface/msg/detail/tool_data__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
cdr_serialize(
  const eli_common_interface::msg::ToolData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  cdr << ros_message.mode;
  // Member: output_voltage
  cdr << ros_message.output_voltage;
  // Member: output_current
  cdr << ros_message.output_current;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: analog_input_type
  cdr << ros_message.analog_input_type;
  // Member: analog_input
  cdr << ros_message.analog_input;
  // Member: analog_output_type
  cdr << ros_message.analog_output_type;
  // Member: analog_output
  cdr << ros_message.analog_output;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  eli_common_interface::msg::ToolData & ros_message)
{
  // Member: mode
  cdr >> ros_message.mode;

  // Member: output_voltage
  cdr >> ros_message.output_voltage;

  // Member: output_current
  cdr >> ros_message.output_current;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: analog_input_type
  cdr >> ros_message.analog_input_type;

  // Member: analog_input
  cdr >> ros_message.analog_input;

  // Member: analog_output_type
  cdr >> ros_message.analog_output_type;

  // Member: analog_output
  cdr >> ros_message.analog_output;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
get_serialized_size(
  const eli_common_interface::msg::ToolData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_voltage
  {
    size_t item_size = sizeof(ros_message.output_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_current
  {
    size_t item_size = sizeof(ros_message.output_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_input_type
  {
    size_t item_size = sizeof(ros_message.analog_input_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_input
  {
    size_t item_size = sizeof(ros_message.analog_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_output_type
  {
    size_t item_size = sizeof(ros_message.analog_output_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_output
  {
    size_t item_size = sizeof(ros_message.analog_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eli_common_interface
max_serialized_size_ToolData(
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


  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: output_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: output_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: analog_input_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: analog_output_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = eli_common_interface::msg::ToolData;
    is_plain =
      (
      offsetof(DataType, analog_output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ToolData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const eli_common_interface::msg::ToolData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ToolData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<eli_common_interface::msg::ToolData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ToolData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const eli_common_interface::msg::ToolData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ToolData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ToolData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ToolData__callbacks = {
  "eli_common_interface::msg",
  "ToolData",
  _ToolData__cdr_serialize,
  _ToolData__cdr_deserialize,
  _ToolData__get_serialized_size,
  _ToolData__max_serialized_size
};

static rosidl_message_type_support_t _ToolData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ToolData__callbacks,
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
get_message_type_support_handle<eli_common_interface::msg::ToolData>()
{
  return &eli_common_interface::msg::typesupport_fastrtps_cpp::_ToolData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, eli_common_interface, msg, ToolData)() {
  return &eli_common_interface::msg::typesupport_fastrtps_cpp::_ToolData__handle;
}

#ifdef __cplusplus
}
#endif
