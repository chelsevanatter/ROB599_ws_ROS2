// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_hw2_msgs:srv/ClearPositions.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__CLEAR_POSITIONS__BUILDER_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__CLEAR_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_hw2_msgs/srv/detail/clear_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearPositions_Request_clear_positions
{
public:
  Init_ClearPositions_Request_clear_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::ClearPositions_Request clear_positions(::rob599_hw2_msgs::srv::ClearPositions_Request::_clear_positions_type arg)
  {
    msg_.clear_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::ClearPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::ClearPositions_Request>()
{
  return rob599_hw2_msgs::srv::builder::Init_ClearPositions_Request_clear_positions();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearPositions_Response_success
{
public:
  Init_ClearPositions_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::ClearPositions_Response success(::rob599_hw2_msgs::srv::ClearPositions_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::ClearPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::ClearPositions_Response>()
{
  return rob599_hw2_msgs::srv::builder::Init_ClearPositions_Response_success();
}

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__CLEAR_POSITIONS__BUILDER_HPP_
