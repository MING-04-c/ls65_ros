// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__TRAITS_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eli_common_interface/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'standard_analog_out'
// Member 'standard_analog_in'
#include "eli_common_interface/msg/detail/analog__traits.hpp"

namespace eli_common_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOState & msg,
  std::ostream & out)
{
  out << "{";
  // member: standard_out
  {
    if (msg.standard_out.size() == 0) {
      out << "standard_out: []";
    } else {
      out << "standard_out: [";
      size_t pending_items = msg.standard_out.size();
      for (auto item : msg.standard_out) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: config_out
  {
    if (msg.config_out.size() == 0) {
      out << "config_out: []";
    } else {
      out << "config_out: [";
      size_t pending_items = msg.config_out.size();
      for (auto item : msg.config_out) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tool_out
  {
    if (msg.tool_out.size() == 0) {
      out << "tool_out: []";
    } else {
      out << "tool_out: [";
      size_t pending_items = msg.tool_out.size();
      for (auto item : msg.tool_out) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: standard_in
  {
    if (msg.standard_in.size() == 0) {
      out << "standard_in: []";
    } else {
      out << "standard_in: [";
      size_t pending_items = msg.standard_in.size();
      for (auto item : msg.standard_in) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: config_in
  {
    if (msg.config_in.size() == 0) {
      out << "config_in: []";
    } else {
      out << "config_in: [";
      size_t pending_items = msg.config_in.size();
      for (auto item : msg.config_in) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tool_in
  {
    if (msg.tool_in.size() == 0) {
      out << "tool_in: []";
    } else {
      out << "tool_in: [";
      size_t pending_items = msg.tool_in.size();
      for (auto item : msg.tool_in) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: standard_analog_out
  {
    if (msg.standard_analog_out.size() == 0) {
      out << "standard_analog_out: []";
    } else {
      out << "standard_analog_out: [";
      size_t pending_items = msg.standard_analog_out.size();
      for (auto item : msg.standard_analog_out) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: standard_analog_in
  {
    if (msg.standard_analog_in.size() == 0) {
      out << "standard_analog_in: []";
    } else {
      out << "standard_analog_in: [";
      size_t pending_items = msg.standard_analog_in.size();
      for (auto item : msg.standard_analog_in) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: standard_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.standard_out.size() == 0) {
      out << "standard_out: []\n";
    } else {
      out << "standard_out:\n";
      for (auto item : msg.standard_out) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: config_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.config_out.size() == 0) {
      out << "config_out: []\n";
    } else {
      out << "config_out:\n";
      for (auto item : msg.config_out) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tool_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tool_out.size() == 0) {
      out << "tool_out: []\n";
    } else {
      out << "tool_out:\n";
      for (auto item : msg.tool_out) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: standard_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.standard_in.size() == 0) {
      out << "standard_in: []\n";
    } else {
      out << "standard_in:\n";
      for (auto item : msg.standard_in) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: config_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.config_in.size() == 0) {
      out << "config_in: []\n";
    } else {
      out << "config_in:\n";
      for (auto item : msg.config_in) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tool_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tool_in.size() == 0) {
      out << "tool_in: []\n";
    } else {
      out << "tool_in:\n";
      for (auto item : msg.tool_in) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: standard_analog_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.standard_analog_out.size() == 0) {
      out << "standard_analog_out: []\n";
    } else {
      out << "standard_analog_out:\n";
      for (auto item : msg.standard_analog_out) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: standard_analog_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.standard_analog_in.size() == 0) {
      out << "standard_analog_in: []\n";
    } else {
      out << "standard_analog_in:\n";
      for (auto item : msg.standard_analog_in) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace eli_common_interface

namespace rosidl_generator_traits
{

[[deprecated("use eli_common_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eli_common_interface::msg::IOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eli_common_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eli_common_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const eli_common_interface::msg::IOState & msg)
{
  return eli_common_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eli_common_interface::msg::IOState>()
{
  return "eli_common_interface::msg::IOState";
}

template<>
inline const char * name<eli_common_interface::msg::IOState>()
{
  return "eli_common_interface/msg/IOState";
}

template<>
struct has_fixed_size<eli_common_interface::msg::IOState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eli_common_interface::msg::IOState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eli_common_interface::msg::IOState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__TRAITS_HPP_
