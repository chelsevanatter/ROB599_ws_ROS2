// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_msgs:srv/Doubler.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS__SRV__DETAIL__DOUBLER__BUILDER_HPP_
#define ROB599_MSGS__SRV__DETAIL__DOUBLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_msgs/srv/detail/doubler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_Doubler_Request_number
{
public:
  Init_Doubler_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs::srv::Doubler_Request number(::rob599_msgs::srv::Doubler_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::Doubler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::Doubler_Request>()
{
  return rob599_msgs::srv::builder::Init_Doubler_Request_number();
}

}  // namespace rob599_msgs


namespace rob599_msgs
{

namespace srv
{

namespace builder
{

class Init_Doubler_Response_doubled
{
public:
  Init_Doubler_Response_doubled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_msgs::srv::Doubler_Response doubled(::rob599_msgs::srv::Doubler_Response::_doubled_type arg)
  {
    msg_.doubled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_msgs::srv::Doubler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_msgs::srv::Doubler_Response>()
{
  return rob599_msgs::srv::builder::Init_Doubler_Response_doubled();
}

}  // namespace rob599_msgs

#endif  // ROB599_MSGS__SRV__DETAIL__DOUBLER__BUILDER_HPP_
