// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rob599_hw2_msgs:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_HPP_
#define ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_Goal __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_Goal __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_Goal_
{
  using Type = GoTo_Goal_<ContainerAllocator>;

  explicit GoTo_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->place = "";
    }
  }

  explicit GoTo_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : place(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->place = "";
    }
  }

  // field types and members
  using _place_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _place_type place;

  // setters for named parameter idiom
  Type & set__place(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_Goal
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_Goal
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_Goal_ & other) const
  {
    if (this->place != other.place) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_Goal_

// alias to use template instance with default allocator
using GoTo_Goal =
  rob599_hw2_msgs::action::GoTo_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_Result __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_Result __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_Result_
{
  using Type = GoTo_Result_<ContainerAllocator>;

  explicit GoTo_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GoTo_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
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

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_Result
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_Result
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_Result_

// alias to use template instance with default allocator
using GoTo_Result =
  rob599_hw2_msgs::action::GoTo_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs


#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_Feedback __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_Feedback_
{
  using Type = GoTo_Feedback_<ContainerAllocator>;

  explicit GoTo_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percent_complete = 0.0f;
    }
  }

  explicit GoTo_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percent_complete = 0.0f;
    }
  }

  // field types and members
  using _percent_complete_type =
    float;
  _percent_complete_type percent_complete;

  // setters for named parameter idiom
  Type & set__percent_complete(
    const float & _arg)
  {
    this->percent_complete = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_Feedback
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_Feedback
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_Feedback_ & other) const
  {
    if (this->percent_complete != other.percent_complete) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_Feedback_

// alias to use template instance with default allocator
using GoTo_Feedback =
  rob599_hw2_msgs::action::GoTo_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "rob599_hw2_msgs/action/detail/go_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Request __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_SendGoal_Request_
{
  using Type = GoTo_SendGoal_Request_<ContainerAllocator>;

  explicit GoTo_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoTo_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const rob599_hw2_msgs::action::GoTo_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Request
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Request
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_SendGoal_Request_

// alias to use template instance with default allocator
using GoTo_SendGoal_Request =
  rob599_hw2_msgs::action::GoTo_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Response __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_SendGoal_Response_
{
  using Type = GoTo_SendGoal_Response_<ContainerAllocator>;

  explicit GoTo_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoTo_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Response
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_SendGoal_Response
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_SendGoal_Response_

// alias to use template instance with default allocator
using GoTo_SendGoal_Response =
  rob599_hw2_msgs::action::GoTo_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rob599_hw2_msgs
{

namespace action
{

struct GoTo_SendGoal
{
  using Request = rob599_hw2_msgs::action::GoTo_SendGoal_Request;
  using Response = rob599_hw2_msgs::action::GoTo_SendGoal_Response;
};

}  // namespace action

}  // namespace rob599_hw2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Request __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_GetResult_Request_
{
  using Type = GoTo_GetResult_Request_<ContainerAllocator>;

  explicit GoTo_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoTo_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Request
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Request
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_GetResult_Request_

// alias to use template instance with default allocator
using GoTo_GetResult_Request =
  rob599_hw2_msgs::action::GoTo_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "rob599_hw2_msgs/action/detail/go_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Response __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_GetResult_Response_
{
  using Type = GoTo_GetResult_Response_<ContainerAllocator>;

  explicit GoTo_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoTo_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
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
  using _result_type =
    rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const rob599_hw2_msgs::action::GoTo_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Response
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_GetResult_Response
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_GetResult_Response_

// alias to use template instance with default allocator
using GoTo_GetResult_Response =
  rob599_hw2_msgs::action::GoTo_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rob599_hw2_msgs
{

namespace action
{

struct GoTo_GetResult
{
  using Request = rob599_hw2_msgs::action::GoTo_GetResult_Request;
  using Response = rob599_hw2_msgs::action::GoTo_GetResult_Response;
};

}  // namespace action

}  // namespace rob599_hw2_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "rob599_hw2_msgs/action/detail/go_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__rob599_hw2_msgs__action__GoTo_FeedbackMessage __declspec(deprecated)
#endif

namespace rob599_hw2_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoTo_FeedbackMessage_
{
  using Type = GoTo_FeedbackMessage_<ContainerAllocator>;

  explicit GoTo_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoTo_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const rob599_hw2_msgs::action::GoTo_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_FeedbackMessage
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rob599_hw2_msgs__action__GoTo_FeedbackMessage
    std::shared_ptr<rob599_hw2_msgs::action::GoTo_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoTo_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoTo_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoTo_FeedbackMessage_

// alias to use template instance with default allocator
using GoTo_FeedbackMessage =
  rob599_hw2_msgs::action::GoTo_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rob599_hw2_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace rob599_hw2_msgs
{

namespace action
{

struct GoTo
{
  /// The goal message defined in the action definition.
  using Goal = rob599_hw2_msgs::action::GoTo_Goal;
  /// The result message defined in the action definition.
  using Result = rob599_hw2_msgs::action::GoTo_Result;
  /// The feedback message defined in the action definition.
  using Feedback = rob599_hw2_msgs::action::GoTo_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = rob599_hw2_msgs::action::GoTo_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = rob599_hw2_msgs::action::GoTo_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = rob599_hw2_msgs::action::GoTo_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoTo GoTo;

}  // namespace action

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_HPP_
