// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rob599_hw2_msgs:srv/KnockKnock.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__KNOCK_KNOCK__STRUCT_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__KNOCK_KNOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Request __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KnockKnock_Request_
{
  using Type = KnockKnock_Request_<ContainerAllocator>;

  explicit KnockKnock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = "";
    }
  }

  explicit KnockKnock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = "";
    }
  }

  // field types and members
  using _request_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Request
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Request
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KnockKnock_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const KnockKnock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KnockKnock_Request_

// alias to use template instance with default allocator
using KnockKnock_Request =
  rob599_hw2_msgs::srv::KnockKnock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_hw2_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Response __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct KnockKnock_Response_
{
  using Type = KnockKnock_Response_<ContainerAllocator>;

  explicit KnockKnock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit KnockKnock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Response
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__srv__KnockKnock_Response
    std::shared_ptr<rob599_hw2_msgs::srv::KnockKnock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KnockKnock_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const KnockKnock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KnockKnock_Response_

// alias to use template instance with default allocator
using KnockKnock_Response =
  rob599_hw2_msgs::srv::KnockKnock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rob599_hw2_msgs

namespace rob599_hw2_msgs
{

namespace srv
{

struct KnockKnock
{
  using Request = rob599_hw2_msgs::srv::KnockKnock_Request;
  using Response = rob599_hw2_msgs::srv::KnockKnock_Response;
};

}  // namespace srv

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__KNOCK_KNOCK__STRUCT_HPP_
