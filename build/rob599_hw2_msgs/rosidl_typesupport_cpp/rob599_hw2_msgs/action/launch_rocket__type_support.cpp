// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rob599_hw2_msgs:action/LaunchRocket.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rob599_hw2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_Goal_type_support_ids_t;

static const _LaunchRocket_Goal_type_support_ids_t _LaunchRocket_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_Goal_type_support_symbol_names_t _LaunchRocket_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_Goal)),
  }
};

typedef struct _LaunchRocket_Goal_type_support_data_t
{
  void * data[2];
} _LaunchRocket_Goal_type_support_data_t;

static _LaunchRocket_Goal_type_support_data_t _LaunchRocket_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_Goal_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_Goal>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_Goal)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_Goal>();
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
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_Result_type_support_ids_t;

static const _LaunchRocket_Result_type_support_ids_t _LaunchRocket_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_Result_type_support_symbol_names_t _LaunchRocket_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_Result)),
  }
};

typedef struct _LaunchRocket_Result_type_support_data_t
{
  void * data[2];
} _LaunchRocket_Result_type_support_data_t;

static _LaunchRocket_Result_type_support_data_t _LaunchRocket_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_Result_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_Result_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_Result_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_Result>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_Result)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_Result>();
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
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_Feedback_type_support_ids_t;

static const _LaunchRocket_Feedback_type_support_ids_t _LaunchRocket_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_Feedback_type_support_symbol_names_t _LaunchRocket_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_Feedback)),
  }
};

typedef struct _LaunchRocket_Feedback_type_support_data_t
{
  void * data[2];
} _LaunchRocket_Feedback_type_support_data_t;

static _LaunchRocket_Feedback_type_support_data_t _LaunchRocket_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_Feedback_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_Feedback>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_Feedback)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_Feedback>();
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
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_SendGoal_Request_type_support_ids_t;

static const _LaunchRocket_SendGoal_Request_type_support_ids_t _LaunchRocket_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_SendGoal_Request_type_support_symbol_names_t _LaunchRocket_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal_Request)),
  }
};

typedef struct _LaunchRocket_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _LaunchRocket_SendGoal_Request_type_support_data_t;

static _LaunchRocket_SendGoal_Request_type_support_data_t _LaunchRocket_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_SendGoal_Request_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal_Request)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_SendGoal_Request>();
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
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_SendGoal_Response_type_support_ids_t;

static const _LaunchRocket_SendGoal_Response_type_support_ids_t _LaunchRocket_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_SendGoal_Response_type_support_symbol_names_t _LaunchRocket_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal_Response)),
  }
};

typedef struct _LaunchRocket_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _LaunchRocket_SendGoal_Response_type_support_data_t;

static _LaunchRocket_SendGoal_Response_type_support_data_t _LaunchRocket_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_SendGoal_Response_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal_Response)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_SendGoal_type_support_ids_t;

static const _LaunchRocket_SendGoal_type_support_ids_t _LaunchRocket_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_SendGoal_type_support_symbol_names_t _LaunchRocket_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_SendGoal)),
  }
};

typedef struct _LaunchRocket_SendGoal_type_support_data_t
{
  void * data[2];
} _LaunchRocket_SendGoal_type_support_data_t;

static _LaunchRocket_SendGoal_type_support_data_t _LaunchRocket_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_SendGoal_service_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LaunchRocket_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_SendGoal>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_GetResult_Request_type_support_ids_t;

static const _LaunchRocket_GetResult_Request_type_support_ids_t _LaunchRocket_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_GetResult_Request_type_support_symbol_names_t _LaunchRocket_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult_Request)),
  }
};

typedef struct _LaunchRocket_GetResult_Request_type_support_data_t
{
  void * data[2];
} _LaunchRocket_GetResult_Request_type_support_data_t;

static _LaunchRocket_GetResult_Request_type_support_data_t _LaunchRocket_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_GetResult_Request_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_GetResult_Request>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult_Request)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_GetResult_Request>();
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
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_GetResult_Response_type_support_ids_t;

static const _LaunchRocket_GetResult_Response_type_support_ids_t _LaunchRocket_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_GetResult_Response_type_support_symbol_names_t _LaunchRocket_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult_Response)),
  }
};

typedef struct _LaunchRocket_GetResult_Response_type_support_data_t
{
  void * data[2];
} _LaunchRocket_GetResult_Response_type_support_data_t;

static _LaunchRocket_GetResult_Response_type_support_data_t _LaunchRocket_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_GetResult_Response_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_GetResult_Response>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult_Response)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rob599_hw2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_GetResult_type_support_ids_t;

static const _LaunchRocket_GetResult_type_support_ids_t _LaunchRocket_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_GetResult_type_support_symbol_names_t _LaunchRocket_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_GetResult)),
  }
};

typedef struct _LaunchRocket_GetResult_type_support_data_t
{
  void * data[2];
} _LaunchRocket_GetResult_type_support_data_t;

static _LaunchRocket_GetResult_type_support_data_t _LaunchRocket_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_GetResult_service_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LaunchRocket_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_GetResult>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LaunchRocket_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LaunchRocket_FeedbackMessage_type_support_ids_t;

static const _LaunchRocket_FeedbackMessage_type_support_ids_t _LaunchRocket_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LaunchRocket_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LaunchRocket_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LaunchRocket_FeedbackMessage_type_support_symbol_names_t _LaunchRocket_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rob599_hw2_msgs, action, LaunchRocket_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rob599_hw2_msgs, action, LaunchRocket_FeedbackMessage)),
  }
};

typedef struct _LaunchRocket_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _LaunchRocket_FeedbackMessage_type_support_data_t;

static _LaunchRocket_FeedbackMessage_type_support_data_t _LaunchRocket_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LaunchRocket_FeedbackMessage_message_typesupport_map = {
  2,
  "rob599_hw2_msgs",
  &_LaunchRocket_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_LaunchRocket_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_LaunchRocket_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LaunchRocket_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LaunchRocket_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage>()
{
  return &::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rob599_hw2_msgs, action, LaunchRocket_FeedbackMessage)() {
  return get_message_type_support_handle<rob599_hw2_msgs::action::LaunchRocket_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "rob599_hw2_msgs/action/detail/launch_rocket__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace rob599_hw2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t LaunchRocket_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace rob599_hw2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<rob599_hw2_msgs::action::LaunchRocket>()
{
  using ::rob599_hw2_msgs::action::rosidl_typesupport_cpp::LaunchRocket_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  LaunchRocket_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::rob599_hw2_msgs::action::LaunchRocket::Impl::SendGoalService>();
  LaunchRocket_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::rob599_hw2_msgs::action::LaunchRocket::Impl::GetResultService>();
  LaunchRocket_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::rob599_hw2_msgs::action::LaunchRocket::Impl::CancelGoalService>();
  LaunchRocket_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::rob599_hw2_msgs::action::LaunchRocket::Impl::FeedbackMessage>();
  LaunchRocket_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::rob599_hw2_msgs::action::LaunchRocket::Impl::GoalStatusMessage>();
  return &LaunchRocket_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
