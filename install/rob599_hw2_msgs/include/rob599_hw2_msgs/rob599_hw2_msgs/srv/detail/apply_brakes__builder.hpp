// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_hw2_msgs:srv/ApplyBrakes.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__BUILDER_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_hw2_msgs/srv/detail/apply_brakes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyBrakes_Request_brakes
{
public:
  Init_ApplyBrakes_Request_brakes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::ApplyBrakes_Request brakes(::rob599_hw2_msgs::srv::ApplyBrakes_Request::_brakes_type arg)
  {
    msg_.brakes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::ApplyBrakes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::ApplyBrakes_Request>()
{
  return rob599_hw2_msgs::srv::builder::Init_ApplyBrakes_Request_brakes();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyBrakes_Response_success
{
public:
  Init_ApplyBrakes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::ApplyBrakes_Response success(::rob599_hw2_msgs::srv::ApplyBrakes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::ApplyBrakes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::ApplyBrakes_Response>()
{
  return rob599_hw2_msgs::srv::builder::Init_ApplyBrakes_Response_success();
}

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__BUILDER_HPP_
