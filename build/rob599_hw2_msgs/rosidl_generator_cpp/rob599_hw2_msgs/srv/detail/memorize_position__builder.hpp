// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_hw2_msgs:srv/MemorizePosition.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__MEMORIZE_POSITION__BUILDER_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__MEMORIZE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_hw2_msgs/srv/detail/memorize_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_MemorizePosition_Request_name
{
public:
  Init_MemorizePosition_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::MemorizePosition_Request name(::rob599_hw2_msgs::srv::MemorizePosition_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::MemorizePosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::MemorizePosition_Request>()
{
  return rob599_hw2_msgs::srv::builder::Init_MemorizePosition_Request_name();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_MemorizePosition_Response_success
{
public:
  Init_MemorizePosition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::MemorizePosition_Response success(::rob599_hw2_msgs::srv::MemorizePosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::MemorizePosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::MemorizePosition_Response>()
{
  return rob599_hw2_msgs::srv::builder::Init_MemorizePosition_Response_success();
}

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__MEMORIZE_POSITION__BUILDER_HPP_
