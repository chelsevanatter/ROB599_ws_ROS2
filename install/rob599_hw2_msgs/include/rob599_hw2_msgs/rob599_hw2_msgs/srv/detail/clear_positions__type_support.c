// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rob599_hw2_msgs:srv/ClearPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rob599_hw2_msgs/srv/detail/clear_positions__rosidl_typesupport_introspection_c.h"
#include "rob599_hw2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rob599_hw2_msgs/srv/detail/clear_positions__functions.h"
#include "rob599_hw2_msgs/srv/detail/clear_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rob599_hw2_msgs__srv__ClearPositions_Request__init(message_memory);
}

void rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_fini_function(void * message_memory)
{
  rob599_hw2_msgs__srv__ClearPositions_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_member_array[1] = {
  {
    "clear_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_hw2_msgs__srv__ClearPositions_Request, clear_positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_members = {
  "rob599_hw2_msgs__srv",  // message namespace
  "ClearPositions_Request",  // message name
  1,  // number of fields
  sizeof(rob599_hw2_msgs__srv__ClearPositions_Request),
  rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_member_array,  // message members
  rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_type_support_handle = {
  0,
  &rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_hw2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions_Request)() {
  if (!rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_type_support_handle.typesupport_identifier) {
    rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rob599_hw2_msgs__srv__ClearPositions_Request__rosidl_typesupport_introspection_c__ClearPositions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rob599_hw2_msgs/srv/detail/clear_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rob599_hw2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/clear_positions__functions.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/clear_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rob599_hw2_msgs__srv__ClearPositions_Response__init(message_memory);
}

void rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_fini_function(void * message_memory)
{
  rob599_hw2_msgs__srv__ClearPositions_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rob599_hw2_msgs__srv__ClearPositions_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_members = {
  "rob599_hw2_msgs__srv",  // message namespace
  "ClearPositions_Response",  // message name
  1,  // number of fields
  sizeof(rob599_hw2_msgs__srv__ClearPositions_Response),
  rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_member_array,  // message members
  rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_type_support_handle = {
  0,
  &rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_hw2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions_Response)() {
  if (!rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_type_support_handle.typesupport_identifier) {
    rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rob599_hw2_msgs__srv__ClearPositions_Response__rosidl_typesupport_introspection_c__ClearPositions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/clear_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_members = {
  "rob599_hw2_msgs__srv",  // service namespace
  "ClearPositions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_Request_message_type_support_handle,
  NULL  // response message
  // rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_Response_message_type_support_handle
};

static rosidl_service_type_support_t rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_type_support_handle = {
  0,
  &rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rob599_hw2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions)() {
  if (!rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_type_support_handle.typesupport_identifier) {
    rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rob599_hw2_msgs, srv, ClearPositions_Response)()->data;
  }

  return &rob599_hw2_msgs__srv__detail__clear_positions__rosidl_typesupport_introspection_c__ClearPositions_service_type_support_handle;
}
