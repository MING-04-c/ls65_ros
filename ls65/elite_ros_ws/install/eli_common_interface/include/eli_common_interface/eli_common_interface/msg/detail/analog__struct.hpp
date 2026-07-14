// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_common_interface:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__STRUCT_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_common_interface__msg__Analog __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__msg__Analog __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Analog_
{
  using Type = Analog_<ContainerAllocator>;

  explicit Analog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->value = 0.0;
    }
  }

  explicit Analog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->value = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_common_interface::msg::Analog_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::msg::Analog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::msg::Analog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::msg::Analog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::Analog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::Analog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::Analog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::Analog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::msg::Analog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::msg::Analog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__msg__Analog
    std::shared_ptr<eli_common_interface::msg::Analog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__msg__Analog
    std::shared_ptr<eli_common_interface::msg::Analog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Analog_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Analog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Analog_

// alias to use template instance with default allocator
using Analog =
  eli_common_interface::msg::Analog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__STRUCT_HPP_
