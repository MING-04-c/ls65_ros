// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eli_dashboard_interface:srv/IsSaved.idl
// generated code does not contain a copyright notice

#ifndef ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__STRUCT_HPP_
#define ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eli_dashboard_interface__srv__IsSaved_Request __attribute__((deprecated))
#else
# define DEPRECATED__eli_dashboard_interface__srv__IsSaved_Request __declspec(deprecated)
#endif

namespace eli_dashboard_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsSaved_Request_
{
  using Type = IsSaved_Request_<ContainerAllocator>;

  explicit IsSaved_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit IsSaved_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_dashboard_interface__srv__IsSaved_Request
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_dashboard_interface__srv__IsSaved_Request
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsSaved_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsSaved_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsSaved_Request_

// alias to use template instance with default allocator
using IsSaved_Request =
  eli_dashboard_interface::srv::IsSaved_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_dashboard_interface


#ifndef _WIN32
# define DEPRECATED__eli_dashboard_interface__srv__IsSaved_Response __attribute__((deprecated))
#else
# define DEPRECATED__eli_dashboard_interface__srv__IsSaved_Response __declspec(deprecated)
#endif

namespace eli_dashboard_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IsSaved_Response_
{
  using Type = IsSaved_Response_<ContainerAllocator>;

  explicit IsSaved_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->is_saved = false;
    }
  }

  explicit IsSaved_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->is_saved = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _is_saved_type =
    bool;
  _is_saved_type is_saved;

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
  Type & set__is_saved(
    const bool & _arg)
  {
    this->is_saved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eli_dashboard_interface__srv__IsSaved_Response
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eli_dashboard_interface__srv__IsSaved_Response
    std::shared_ptr<eli_dashboard_interface::srv::IsSaved_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsSaved_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->is_saved != other.is_saved) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsSaved_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsSaved_Response_

// alias to use template instance with default allocator
using IsSaved_Response =
  eli_dashboard_interface::srv::IsSaved_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eli_dashboard_interface

namespace eli_dashboard_interface
{

namespace srv
{

struct IsSaved
{
  using Request = eli_dashboard_interface::srv::IsSaved_Request;
  using Response = eli_dashboard_interface::srv::IsSaved_Response;
};

}  // namespace srv

}  // namespace eli_dashboard_interface

#endif  // ELI_DASHBOARD_INTERFACE__SRV__DETAIL__IS_SAVED__STRUCT_HPP_
