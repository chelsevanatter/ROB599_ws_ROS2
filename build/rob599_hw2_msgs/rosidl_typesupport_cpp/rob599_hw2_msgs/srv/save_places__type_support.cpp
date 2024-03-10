// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rob599_hw2_msgs:srv/SavePlaces.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rob599_hw2_msgs/srv/detail/save_places__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rob599_hw2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SavePlaces_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SavePlaces_Request_type_support_ids_t;

static const _SavePlaces_Request_type_support_ids_t _SavePlaces_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SavePlaces_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SavePlaces_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SavePlaces_Request_type_support_symbol_names_t _SavePlaces_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, srv, SavePlaces_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, srv, SavePlaces_Request)),
  }
};

typedef struct _SavePlaces_Request_type_support_data_t
{
  void * data[2];
} _SavePlaces_Request_type_support_data_t;

static _SavePlaces_Request_type_support_data_t _SavePlaces_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SavePlaces_Request_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_SavePlaces_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SavePlaces_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SavePlaces_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SavePlaces_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SavePlaces_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::srv::SavePlaces_Request>()
{
  return &::rob599_hw2_msgs::srv::rosidl_typesupport_cpp::SavePlaces_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, srv, SavePlaces_Request)() {
  return get_message_type_support_handle<rob599_hw2_msgs::srv::SavePlaces_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/save_places__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rob599_hw2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SavePlaces_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SavePlaces_Response_type_support_ids_t;

static const _SavePlaces_Response_type_support_ids_t _SavePlaces_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SavePlaces_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SavePlaces_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SavePlaces_Response_type_support_symbol_names_t _SavePlaces_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, srv, SavePlaces_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, srv, SavePlaces_Response)),
  }
};

typedef struct _SavePlaces_Response_type_support_data_t
{
  void * data[2];
} _SavePlaces_Response_type_support_data_t;

static _SavePlaces_Response_type_support_data_t _SavePlaces_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SavePlaces_Response_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_SavePlaces_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SavePlaces_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SavePlaces_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SavePlaces_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SavePlaces_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::srv::SavePlaces_Response>()
{
  return &::rob599_hw2_msgs::srv::rosidl_typesupport_cpp::SavePlaces_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, srv, SavePlaces_Response)() {
  return get_message_type_support_handle<rob599_hw2_msgs::srv::SavePlaces_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/srv/detail/save_places__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rob599_hw2_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SavePlaces_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SavePlaces_type_support_ids_t;

static const _SavePlaces_type_support_ids_t _SavePlaces_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SavePlaces_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SavePlaces_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SavePlaces_type_support_symbol_names_t _SavePlaces_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, srv, SavePlaces)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, srv, SavePlaces)),
  }
};

typedef struct _SavePlaces_type_support_data_t
{
  void * data[2];
} _SavePlaces_type_support_data_t;

static _SavePlaces_type_support_data_t _SavePlaces_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SavePlaces_service_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_SavePlaces_service_typesupport_ids.typesupport_identifier[0],
  &_SavePlaces_service_typesupport_symbol_names.symbol_name[0],
  &_SavePlaces_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SavePlaces_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SavePlaces_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rob599_hw2_msgs::srv::SavePlaces>()
{
  return &::rob599_hw2_msgs::srv::rosidl_typesupport_cpp::SavePlaces_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
