// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_hw2_msgs:action/GoTo.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_H_
#define ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'place'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_Goal
{
  rosidl_runtime_c__String place;
} rob599_hw2_msgs__action__GoTo_Goal;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_Goal.
typedef struct rob599_hw2_msgs__action__GoTo_Goal__Sequence
{
  rob599_hw2_msgs__action__GoTo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_Result
{
  bool success;
  rosidl_runtime_c__String message;
} rob599_hw2_msgs__action__GoTo_Result;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_Result.
typedef struct rob599_hw2_msgs__action__GoTo_Result__Sequence
{
  rob599_hw2_msgs__action__GoTo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_Feedback
{
  float percent_complete;
} rob599_hw2_msgs__action__GoTo_Feedback;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_Feedback.
typedef struct rob599_hw2_msgs__action__GoTo_Feedback__Sequence
{
  rob599_hw2_msgs__action__GoTo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rob599_hw2_msgs/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rob599_hw2_msgs__action__GoTo_Goal goal;
} rob599_hw2_msgs__action__GoTo_SendGoal_Request;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_SendGoal_Request.
typedef struct rob599_hw2_msgs__action__GoTo_SendGoal_Request__Sequence
{
  rob599_hw2_msgs__action__GoTo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rob599_hw2_msgs__action__GoTo_SendGoal_Response;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_SendGoal_Response.
typedef struct rob599_hw2_msgs__action__GoTo_SendGoal_Response__Sequence
{
  rob599_hw2_msgs__action__GoTo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rob599_hw2_msgs__action__GoTo_GetResult_Request;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_GetResult_Request.
typedef struct rob599_hw2_msgs__action__GoTo_GetResult_Request__Sequence
{
  rob599_hw2_msgs__action__GoTo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rob599_hw2_msgs/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_GetResult_Response
{
  int8_t status;
  rob599_hw2_msgs__action__GoTo_Result result;
} rob599_hw2_msgs__action__GoTo_GetResult_Response;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_GetResult_Response.
typedef struct rob599_hw2_msgs__action__GoTo_GetResult_Response__Sequence
{
  rob599_hw2_msgs__action__GoTo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rob599_hw2_msgs/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__action__GoTo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rob599_hw2_msgs__action__GoTo_Feedback feedback;
} rob599_hw2_msgs__action__GoTo_FeedbackMessage;

// Struct for a sequence of rob599_hw2_msgs__action__GoTo_FeedbackMessage.
typedef struct rob599_hw2_msgs__action__GoTo_FeedbackMessage__Sequence
{
  rob599_hw2_msgs__action__GoTo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__action__GoTo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_HW2_MSGS__ACTION__DETAIL__GO_TO__STRUCT_H_
