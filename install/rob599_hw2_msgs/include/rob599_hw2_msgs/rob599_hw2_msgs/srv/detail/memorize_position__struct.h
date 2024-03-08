// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_hw2_msgs:srv/MemorizePosition.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__MEMORIZE_POSITION__STRUCT_H_
#define ROB599_HW2_MSGS__SRV__DETAIL__MEMORIZE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MemorizePosition in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__srv__MemorizePosition_Request
{
  rosidl_runtime_c__String name;
} rob599_hw2_msgs__srv__MemorizePosition_Request;

// Struct for a sequence of rob599_hw2_msgs__srv__MemorizePosition_Request.
typedef struct rob599_hw2_msgs__srv__MemorizePosition_Request__Sequence
{
  rob599_hw2_msgs__srv__MemorizePosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__srv__MemorizePosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MemorizePosition in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__srv__MemorizePosition_Response
{
  bool success;
} rob599_hw2_msgs__srv__MemorizePosition_Response;

// Struct for a sequence of rob599_hw2_msgs__srv__MemorizePosition_Response.
typedef struct rob599_hw2_msgs__srv__MemorizePosition_Response__Sequence
{
  rob599_hw2_msgs__srv__MemorizePosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__srv__MemorizePosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__MEMORIZE_POSITION__STRUCT_H_
