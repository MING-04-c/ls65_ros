// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_common_interface:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__STRUCT_HPP_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_common_interface__msg__TaskStatus __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__msg__TaskStatus __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskStatus_
{
  using Type = TaskStatus_<ContainerAllocator>;

  explicit TaskStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TaskStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t UNKNOWN =
    -1;
  static constexpr int8_t STOPPED =
    0;
  static constexpr int8_t PAUSED =
    1;
  static constexpr int8_t PLAYING =
    2;

  // pointer types
  using RawPtr =
    eli_common_interface::msg::TaskStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::msg::TaskStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::TaskStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::msg::TaskStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__msg__TaskStatus
    std::shared_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__msg__TaskStatus
    std::shared_ptr<eli_common_interface::msg::TaskStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskStatus_

// alias to use template instance with default allocator
using TaskStatus =
  eli_common_interface::msg::TaskStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TaskStatus_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TaskStatus_<ContainerAllocator>::STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TaskStatus_<ContainerAllocator>::PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TaskStatus_<ContainerAllocator>::PLAYING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__TASK_STATUS__STRUCT_HPP_
