// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rob599_hw2_msgs:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__BUILDER_HPP_
#define ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rob599_hw2_msgs/action/detail/go_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_Goal_place
{
public:
  Init_GoTo_Goal_place()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::GoTo_Goal place(::rob599_hw2_msgs::action::GoTo_Goal::_place_type arg)
  {
    msg_.place = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_Goal>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_Goal_place();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_Result_message
{
public:
  explicit Init_GoTo_Result_message(::rob599_hw2_msgs::action::GoTo_Result & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::GoTo_Result message(::rob599_hw2_msgs::action::GoTo_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_Result msg_;
};

class Init_GoTo_Result_success
{
public:
  Init_GoTo_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_Result_message success(::rob599_hw2_msgs::action::GoTo_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GoTo_Result_message(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_Result>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_Result_success();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_Feedback_percent_complete
{
public:
  Init_GoTo_Feedback_percent_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::GoTo_Feedback percent_complete(::rob599_hw2_msgs::action::GoTo_Feedback::_percent_complete_type arg)
  {
    msg_.percent_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_Feedback>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_Feedback_percent_complete();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Request_goal
{
public:
  explicit Init_GoTo_SendGoal_Request_goal(::rob599_hw2_msgs::action::GoTo_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::GoTo_SendGoal_Request goal(::rob599_hw2_msgs::action::GoTo_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_SendGoal_Request msg_;
};

class Init_GoTo_SendGoal_Request_goal_id
{
public:
  Init_GoTo_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Request_goal goal_id(::rob599_hw2_msgs::action::GoTo_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTo_SendGoal_Request_goal(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_SendGoal_Request>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_SendGoal_Request_goal_id();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_SendGoal_Response_stamp
{
public:
  explicit Init_GoTo_SendGoal_Response_stamp(::rob599_hw2_msgs::action::GoTo_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::GoTo_SendGoal_Response stamp(::rob599_hw2_msgs::action::GoTo_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_SendGoal_Response msg_;
};

class Init_GoTo_SendGoal_Response_accepted
{
public:
  Init_GoTo_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_SendGoal_Response_stamp accepted(::rob599_hw2_msgs::action::GoTo_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoTo_SendGoal_Response_stamp(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_SendGoal_Response>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_SendGoal_Response_accepted();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Request_goal_id
{
public:
  Init_GoTo_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rob599_hw2_msgs::action::GoTo_GetResult_Request goal_id(::rob599_hw2_msgs::action::GoTo_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_GetResult_Request>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_GetResult_Request_goal_id();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_GetResult_Response_result
{
public:
  explicit Init_GoTo_GetResult_Response_result(::rob599_hw2_msgs::action::GoTo_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::GoTo_GetResult_Response result(::rob599_hw2_msgs::action::GoTo_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_GetResult_Response msg_;
};

class Init_GoTo_GetResult_Response_status
{
public:
  Init_GoTo_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_GetResult_Response_result status(::rob599_hw2_msgs::action::GoTo_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoTo_GetResult_Response_result(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_GetResult_Response>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_GetResult_Response_status();
}

}  // namespace rob599_hw2_msgs


namespace rob599_hw2_msgs
{

namespace action
{

namespace builder
{

class Init_GoTo_FeedbackMessage_feedback
{
public:
  explicit Init_GoTo_FeedbackMessage_feedback(::rob599_hw2_msgs::action::GoTo_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rob599_hw2_msgs::action::GoTo_FeedbackMessage feedback(::rob599_hw2_msgs::action::GoTo_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_FeedbackMessage msg_;
};

class Init_GoTo_FeedbackMessage_goal_id
{
public:
  Init_GoTo_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoTo_FeedbackMessage_feedback goal_id(::rob599_hw2_msgs::action::GoTo_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoTo_FeedbackMessage_feedback(msg_);
  }

private:
  ::rob599_hw2_msgs::action::GoTo_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rob599_hw2_msgs::action::GoTo_FeedbackMessage>()
{
  return rob599_hw2_msgs::action::builder::Init_GoTo_FeedbackMessage_goal_id();
}

}  // namespace rob599_hw2_msgs

#endif  // ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__BUILDER_HPP_
