// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rob599_hw2_msgs:srv/ApplyBrakes.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__STRUCT_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Request __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyBrakes_Request_
{
  using Type = ApplyBrakes_Request_<ContainerAllocator>;

  explicit ApplyBrakes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brakes = false;
    }
  }

  explicit ApplyBrakes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brakes = false;
    }
  }

  // field types and members
  using _brakes_type =
    bool;
  _brakes_type brakes;

  // setters for named parameter idiom
  Type & set__brakes(
    const bool & _arg)
  {
    this->brakes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Request
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Request
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyBrakes_Request_ & other) const
  {
    if (this->brakes != other.brakes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyBrakes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyBrakes_Request_

// alias to use template instance with default allocator
using ApplyBrakes_Request =
  rob599_hw2_msgs::srv::ApplyBrakes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_hw2_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Response __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyBrakes_Response_
{
  using Type = ApplyBrakes_Response_<ContainerAllocator>;

  explicit ApplyBrakes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ApplyBrakes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Response
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__srv__ApplyBrakes_Response
    std::shared_ptr<rob599_hw2_msgs::srv::ApplyBrakes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyBrakes_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyBrakes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyBrakes_Response_

// alias to use template instance with default allocator
using ApplyBrakes_Response =
  rob599_hw2_msgs::srv::ApplyBrakes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_hw2_msgs

namespace rob599_hw2_msgs
{

namespace srv
{

struct ApplyBrakes
{
  using Request = rob599_hw2_msgs::srv::ApplyBrakes_Request;
  using Response = rob599_hw2_msgs::srv::ApplyBrakes_Response;
};

}  // namespace srv

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__STRUCT_HPP_
