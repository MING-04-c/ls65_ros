// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_common_interface:srv/GetTaskStatus.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__STRUCT_HPP_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_common_interface__srv__GetTaskStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__srv__GetTaskStatus_Request __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTaskStatus_Request_
{
  using Type = GetTaskStatus_Request_<ContainerAllocator>;

  explicit GetTaskStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetTaskStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__srv__GetTaskStatus_Request
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__srv__GetTaskStatus_Request
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTaskStatus_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTaskStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTaskStatus_Request_

// alias to use template instance with default allocator
using GetTaskStatus_Request =
  eli_common_interface::srv::GetTaskStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_common_interface


// Include directives for member types
// Member 'status'
#include "eli_common_interface/msg/detail/task_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eli_common_interface__srv__GetTaskStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__eli_common_interface__srv__GetTaskStatus_Response __declspec(deprecated)
#endif

namespace eli_common_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTaskStatus_Response_
{
  using Type = GetTaskStatus_Response_<ContainerAllocator>;

  explicit GetTaskStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GetTaskStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    status(_alloc, _init)
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
  using _status_type =
    eli_common_interface::msg::TaskStatus_<ContainerAllocator>;
  _status_type status;

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
  Type & set__status(
    const eli_common_interface::msg::TaskStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_common_interface__srv__GetTaskStatus_Response
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_common_interface__srv__GetTaskStatus_Response
    std::shared_ptr<eli_common_interface::srv::GetTaskStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTaskStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTaskStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTaskStatus_Response_

// alias to use template instance with default allocator
using GetTaskStatus_Response =
  eli_common_interface::srv::GetTaskStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_common_interface

namespace eli_common_interface
{

namespace srv
{

struct GetTaskStatus
{
  using Request = eli_common_interface::srv::GetTaskStatus_Request;
  using Response = eli_common_interface::srv::GetTaskStatus_Response;
};

}  // namespace srv

}  // namespace eli_common_interface

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_TASK_STATUS__STRUCT_HPP_
