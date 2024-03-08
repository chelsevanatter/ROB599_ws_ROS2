// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rob599_hw2_msgs:srv/ClearPositions.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__CLEAR_POSITIONS__STRUCT_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__CLEAR_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Request __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearPositions_Request_
{
  using Type = ClearPositions_Request_<ContainerAllocator>;

  explicit ClearPositions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clear_positions = false;
    }
  }

  explicit ClearPositions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clear_positions = false;
    }
  }

  // field types and members
  using _clear_positions_type =
    bool;
  _clear_positions_type clear_positions;

  // setters for named parameter idiom
  Type & set__clear_positions(
    const bool & _arg)
  {
    this->clear_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Request
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Request
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearPositions_Request_ & other) const
  {
    if (this->clear_positions != other.clear_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearPositions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearPositions_Request_

// alias to use template instance with default allocator
using ClearPositions_Request =
  rob599_hw2_msgs::srv::ClearPositions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_hw2_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Response __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearPositions_Response_
{
  using Type = ClearPositions_Response_<ContainerAllocator>;

  explicit ClearPositions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ClearPositions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Response
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__srv__ClearPositions_Response
    std::shared_ptr<rob599_hw2_msgs::srv::ClearPositions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearPositions_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearPositions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearPositions_Response_

// alias to use template instance with default allocator
using ClearPositions_Response =
  rob599_hw2_msgs::srv::ClearPositions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_hw2_msgs

namespace rob599_hw2_msgs
{

namespace srv
{

struct ClearPositions
{
  using Request = rob599_hw2_msgs::srv::ClearPositions_Request;
  using Response = rob599_hw2_msgs::srv::ClearPositions_Response;
};

}  // namespace srv

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__CLEAR_POSITIONS__STRUCT_HPP_
