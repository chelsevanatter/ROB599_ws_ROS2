// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_hw2_msgs:action/LaunchRocket.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__ACTION__DETAIL__LAUNCH_ROCKET__BUILDER_HPP_
#define ROB599_HW2_MSGS__ACTION__DETAIL__LAUNCH_ROCKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_Goal_seconds
{
public:
  Init_LaunchRocket_Goal_seconds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_Goal seconds(::rob599_hw2_msgs::action::LaunchRocket_Goal::_seconds_type arg)
  {
    msg_.seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_Goal>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_Goal_seconds();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_Result_message
{
public:
  Init_LaunchRocket_Result_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_Result message(::rob599_hw2_msgs::action::LaunchRocket_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_Result>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_Result_message();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_Feedback_progress
{
public:
  Init_LaunchRocket_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_Feedback progress(::rob599_hw2_msgs::action::LaunchRocket_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_Feedback>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_Feedback_progress();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_SendGoal_Request_goal
{
public:
  explicit Init_LaunchRocket_SendGoal_Request_goal(::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request goal(::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request msg_;
};

class Init_LaunchRocket_SendGoal_Request_goal_id
{
public:
  Init_LaunchRocket_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaunchRocket_SendGoal_Request_goal goal_id(::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LaunchRocket_SendGoal_Request_goal(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_SendGoal_Request_goal_id();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_SendGoal_Response_stamp
{
public:
  explicit Init_LaunchRocket_SendGoal_Response_stamp(::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response stamp(::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response msg_;
};

class Init_LaunchRocket_SendGoal_Response_accepted
{
public:
  Init_LaunchRocket_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaunchRocket_SendGoal_Response_stamp accepted(::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LaunchRocket_SendGoal_Response_stamp(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_SendGoal_Response_accepted();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_GetResult_Request_goal_id
{
public:
  Init_LaunchRocket_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_GetResult_Request goal_id(::rob599_hw2_msgs::action::LaunchRocket_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_GetResult_Request>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_GetResult_Request_goal_id();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_GetResult_Response_result
{
public:
  explicit Init_LaunchRocket_GetResult_Response_result(::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response result(::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response msg_;
};

class Init_LaunchRocket_GetResult_Response_status
{
public:
  Init_LaunchRocket_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaunchRocket_GetResult_Response_result status(::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LaunchRocket_GetResult_Response_result(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_GetResult_Response>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_GetResult_Response_status();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_LaunchRocket_FeedbackMessage_feedback
{
public:
  explicit Init_LaunchRocket_FeedbackMessage_feedback(::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage feedback(::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage msg_;
};

class Init_LaunchRocket_FeedbackMessage_goal_id
{
public:
  Init_LaunchRocket_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaunchRocket_FeedbackMessage_feedback goal_id(::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LaunchRocket_FeedbackMessage_feedback(msg_);
  }

private:
  ::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage>()
{
  return rob599_hw2_msgs::action::builder::Init_LaunchRocket_FeedbackMessage_goal_id();
}

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__ACTION__DETAIL__LAUNCH_ROCKET__BUILDER_HPP_
