// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_dashboard_interface:srv/Log.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOG__STRUCT_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_dashboard_interface__srv__Log_Request __attribute__((deprecated))
#else
# define DEPRECATED__eli_dashboard_interface__srv__Log_Request __declspec(deprecated)
#endif

namespace eli_dashboard_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Log_Request_
{
  using Type = Log_Request_<ContainerAllocator>;

  explicit Log_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit Log_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_dashboard_interface::srv::Log_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_dashboard_interface::srv::Log_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::Log_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::Log_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_dashboard_interface__srv__Log_Request
    std::shared_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_dashboard_interface__srv__Log_Request
    std::shared_ptr<eli_dashboard_interface::srv::Log_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Log_Request_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Log_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Log_Request_

// alias to use template instance with default allocator
using Log_Request =
  eli_dashboard_interface::srv::Log_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_dashboard_interface


#ifndef _WIN32
# define DEPRECATED__eli_dashboard_interface__srv__Log_Response __attribute__((deprecated))
#else
# define DEPRECATED__eli_dashboard_interface__srv__Log_Response __declspec(deprecated)
#endif

namespace eli_dashboard_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Log_Response_
{
  using Type = Log_Response_<ContainerAllocator>;

  explicit Log_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit Log_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_dashboard_interface::srv::Log_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_dashboard_interface::srv::Log_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::Log_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::Log_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_dashboard_interface__srv__Log_Response
    std::shared_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_dashboard_interface__srv__Log_Response
    std::shared_ptr<eli_dashboard_interface::srv::Log_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Log_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Log_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Log_Response_

// alias to use template instance with default allocator
using Log_Response =
  eli_dashboard_interface::srv::Log_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_dashboard_interface

namespace eli_dashboard_interface
{

namespace srv
{

struct Log
{
  using Request = eli_dashboard_interface::srv::Log_Request;
  using Response = eli_dashboard_interface::srv::Log_Response;
};

}  // namespace srv

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__LOG__STRUCT_HPP_
