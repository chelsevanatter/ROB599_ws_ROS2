// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_hw2_msgs:srv/SavePlaces.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__SAVE_PLACES__BUILDER_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__SAVE_PLACES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_hw2_msgs/srv/detail/save_places__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_SavePlaces_Request_save
{
public:
  Init_SavePlaces_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::SavePlaces_Request save(::rob599_hw2_msgs::srv::SavePlaces_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::SavePlaces_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::SavePlaces_Request>()
{
  return rob599_hw2_msgs::srv::builder::Init_SavePlaces_Request_save();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace srv
{

namespace builder
{

class Init_SavePlaces_Response_success
{
public:
  Init_SavePlaces_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::srv::SavePlaces_Response success(::rob599_hw2_msgs::srv::SavePlaces_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::srv::SavePlaces_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::srv::SavePlaces_Response>()
{
  return rob599_hw2_msgs::srv::builder::Init_SavePlaces_Response_success();
}

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__SAVE_PLACES__BUILDER_HPP_
