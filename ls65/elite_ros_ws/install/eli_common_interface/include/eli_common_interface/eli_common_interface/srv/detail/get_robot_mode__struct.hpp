// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_common_interface:srv/GetRobotMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_ROBOT_MODE__STRUCT_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_ROBOT_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_common_interface__srv__GetRobotMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__srv__GetRobotMode_Request __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotMode_Request_
{
  using Type = GetRobotMode_Request_<ContainerAllocator>;

  explicit GetRobotMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetRobotMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__srv__GetRobotMode_Request
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__srv__GetRobotMode_Request
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotMode_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotMode_Request_

// alias to use template instance with default allocator
using GetRobotMode_Request =
  eli_common_interface::srv::GetRobotMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_common_interface


// Include directives for member types
// Member 'mode'
#include "eli_common_interface/msg/detail/robot_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eli_common_interface__srv__GetRobotMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__srv__GetRobotMode_Response __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotMode_Response_
{
  using Type = GetRobotMode_Response_<ContainerAllocator>;

  explicit GetRobotMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetRobotMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _mode_type =
    eli_common_interface::msg::RobotMode_<ContainerAllocator>;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__mode(
    const eli_common_interface::msg::RobotMode_<ContainerAllocator> & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__srv__GetRobotMode_Response
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__srv__GetRobotMode_Response
    std::shared_ptr<eli_common_interface::srv::GetRobotMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotMode_Response_

// alias to use template instance with default allocator
using GetRobotMode_Response =
  eli_common_interface::srv::GetRobotMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_common_interface

namespace eli_common_interface
{

namespace srv
{

struct GetRobotMode
{
  using Request = eli_common_interface::srv::GetRobotMode_Request;
  using Response = eli_common_interface::srv::GetRobotMode_Response;
};

}  // namespace srv

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_ROBOT_MODE__STRUCT_HPP_
