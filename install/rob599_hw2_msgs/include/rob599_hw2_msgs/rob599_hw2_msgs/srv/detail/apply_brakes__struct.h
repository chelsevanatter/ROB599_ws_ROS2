// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rob599_hw2_msgs:srv/ApplyBrakes.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__STRUCT_H_
#define ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ApplyBrakes in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__srv__ApplyBrakes_Request
{
  bool brakes;
} rob599_hw2_msgs__srv__ApplyBrakes_Request;

// Struct for a sequence of rob599_hw2_msgs__srv__ApplyBrakes_Request.
typedef struct rob599_hw2_msgs__srv__ApplyBrakes_Request__Sequence
{
  rob599_hw2_msgs__srv__ApplyBrakes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__srv__ApplyBrakes_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ApplyBrakes in the package rob599_hw2_msgs.
typedef struct rob599_hw2_msgs__srv__ApplyBrakes_Response
{
  bool success;
} rob599_hw2_msgs__srv__ApplyBrakes_Response;

// Struct for a sequence of rob599_hw2_msgs__srv__ApplyBrakes_Response.
typedef struct rob599_hw2_msgs__srv__ApplyBrakes_Response__Sequence
{
  rob599_hw2_msgs__srv__ApplyBrakes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rob599_hw2_msgs__srv__ApplyBrakes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__APPLY_BRAKES__STRUCT_H_
