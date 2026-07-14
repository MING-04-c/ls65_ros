// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_common_interface:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__STRUCT_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_common_interface__msg__ToolData __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__msg__ToolData __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ToolData_
{
  using Type = ToolData_<ContainerAllocator>;

  explicit ToolData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->output_voltage = 0.0;
      this->output_current = 0.0;
      this->temperature = 0.0;
      this->analog_input_type = 0;
      this->analog_input = 0.0;
      this->analog_output_type = 0;
      this->analog_output = 0.0;
    }
  }

  explicit ToolData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->output_voltage = 0.0;
      this->output_current = 0.0;
      this->temperature = 0.0;
      this->analog_input_type = 0;
      this->analog_input = 0.0;
      this->analog_output_type = 0;
      this->analog_output = 0.0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _output_voltage_type =
    double;
  _output_voltage_type output_voltage;
  using _output_current_type =
    double;
  _output_current_type output_current;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _analog_input_type_type =
    uint8_t;
  _analog_input_type_type analog_input_type;
  using _analog_input_type =
    double;
  _analog_input_type analog_input;
  using _analog_output_type_type =
    uint8_t;
  _analog_output_type_type analog_output_type;
  using _analog_output_type =
    double;
  _analog_output_type analog_output;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__output_voltage(
    const double & _arg)
  {
    this->output_voltage = _arg;
    return *this;
  }
  Type & set__output_current(
    const double & _arg)
  {
    this->output_current = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__analog_input_type(
    const uint8_t & _arg)
  {
    this->analog_input_type = _arg;
    return *this;
  }
  Type & set__analog_input(
    const double & _arg)
  {
    this->analog_input = _arg;
    return *this;
  }
  Type & set__analog_output_type(
    const uint8_t & _arg)
  {
    this->analog_output_type = _arg;
    return *this;
  }
  Type & set__analog_output(
    const double & _arg)
  {
    this->analog_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_common_interface::msg::ToolData_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::msg::ToolData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::ToolData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::ToolData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__msg__ToolData
    std::shared_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__msg__ToolData
    std::shared_ptr<eli_common_interface::msg::ToolData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToolData_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->output_voltage != other.output_voltage) {
      return false;
    }
    if (this->output_current != other.output_current) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->analog_input_type != other.analog_input_type) {
      return false;
    }
    if (this->analog_input != other.analog_input) {
      return false;
    }
    if (this->analog_output_type != other.analog_output_type) {
      return false;
    }
    if (this->analog_output != other.analog_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToolData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToolData_

// alias to use template instance with default allocator
using ToolData =
  eli_common_interface::msg::ToolData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TOOL_DATA__STRUCT_HPP_
