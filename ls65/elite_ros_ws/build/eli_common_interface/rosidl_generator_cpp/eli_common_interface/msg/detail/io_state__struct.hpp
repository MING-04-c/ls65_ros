// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__STRUCT_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'standard_analog_out'
// Member 'standard_analog_in'
#include "eli_common_interface/msg/detail/analog__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eli_common_interface__msg__IOState __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__msg__IOState __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOState_
{
  using Type = IOState_<ContainerAllocator>;

  explicit IOState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IOState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _standard_out_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _standard_out_type standard_out;
  using _config_out_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _config_out_type config_out;
  using _tool_out_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _tool_out_type tool_out;
  using _standard_in_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _standard_in_type standard_in;
  using _config_in_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _config_in_type config_in;
  using _tool_in_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _tool_in_type tool_in;
  using _standard_analog_out_type =
    std::vector<eli_common_interface::msg::Analog_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eli_common_interface::msg::Analog_<ContainerAllocator>>>;
  _standard_analog_out_type standard_analog_out;
  using _standard_analog_in_type =
    std::vector<eli_common_interface::msg::Analog_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eli_common_interface::msg::Analog_<ContainerAllocator>>>;
  _standard_analog_in_type standard_analog_in;

  // setters for named parameter idiom
  Type & set__standard_out(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->standard_out = _arg;
    return *this;
  }
  Type & set__config_out(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->config_out = _arg;
    return *this;
  }
  Type & set__tool_out(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->tool_out = _arg;
    return *this;
  }
  Type & set__standard_in(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->standard_in = _arg;
    return *this;
  }
  Type & set__config_in(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->config_in = _arg;
    return *this;
  }
  Type & set__tool_in(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->tool_in = _arg;
    return *this;
  }
  Type & set__standard_analog_out(
    const std::vector<eli_common_interface::msg::Analog_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eli_common_interface::msg::Analog_<ContainerAllocator>>> & _arg)
  {
    this->standard_analog_out = _arg;
    return *this;
  }
  Type & set__standard_analog_in(
    const std::vector<eli_common_interface::msg::Analog_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eli_common_interface::msg::Analog_<ContainerAllocator>>> & _arg)
  {
    this->standard_analog_in = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_common_interface::msg::IOState_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::msg::IOState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::msg::IOState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::msg::IOState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::IOState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::IOState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::IOState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::IOState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::msg::IOState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::msg::IOState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__msg__IOState
    std::shared_ptr<eli_common_interface::msg::IOState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__msg__IOState
    std::shared_ptr<eli_common_interface::msg::IOState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOState_ & other) const
  {
    if (this->standard_out != other.standard_out) {
      return false;
    }
    if (this->config_out != other.config_out) {
      return false;
    }
    if (this->tool_out != other.tool_out) {
      return false;
    }
    if (this->standard_in != other.standard_in) {
      return false;
    }
    if (this->config_in != other.config_in) {
      return false;
    }
    if (this->tool_in != other.tool_in) {
      return false;
    }
    if (this->standard_analog_out != other.standard_analog_out) {
      return false;
    }
    if (this->standard_analog_in != other.standard_analog_in) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOState_

// alias to use template instance with default allocator
using IOState =
  eli_common_interface::msg::IOState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__STRUCT_HPP_
