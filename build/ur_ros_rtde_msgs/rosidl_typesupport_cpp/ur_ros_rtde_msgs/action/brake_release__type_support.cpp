// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ur_ros_rtde_msgs:action/BrakeRelease.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_Goal_type_support_ids_t;

static const _BrakeRelease_Goal_type_support_ids_t _BrakeRelease_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_Goal_type_support_symbol_names_t _BrakeRelease_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Goal)),
  }
};

typedef struct _BrakeRelease_Goal_type_support_data_t
{
  void * data[2];
} _BrakeRelease_Goal_type_support_data_t;

static _BrakeRelease_Goal_type_support_data_t _BrakeRelease_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_Goal_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_Goal>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Goal)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_Goal>();
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
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_Result_type_support_ids_t;

static const _BrakeRelease_Result_type_support_ids_t _BrakeRelease_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_Result_type_support_symbol_names_t _BrakeRelease_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Result)),
  }
};

typedef struct _BrakeRelease_Result_type_support_data_t
{
  void * data[2];
} _BrakeRelease_Result_type_support_data_t;

static _BrakeRelease_Result_type_support_data_t _BrakeRelease_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_Result_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_Result_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_Result_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_Result>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Result)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_Result>();
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
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_Feedback_type_support_ids_t;

static const _BrakeRelease_Feedback_type_support_ids_t _BrakeRelease_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_Feedback_type_support_symbol_names_t _BrakeRelease_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Feedback)),
  }
};

typedef struct _BrakeRelease_Feedback_type_support_data_t
{
  void * data[2];
} _BrakeRelease_Feedback_type_support_data_t;

static _BrakeRelease_Feedback_type_support_data_t _BrakeRelease_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_Feedback_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_Feedback>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_Feedback)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_Feedback>();
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
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_SendGoal_Request_type_support_ids_t;

static const _BrakeRelease_SendGoal_Request_type_support_ids_t _BrakeRelease_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_SendGoal_Request_type_support_symbol_names_t _BrakeRelease_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal_Request)),
  }
};

typedef struct _BrakeRelease_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _BrakeRelease_SendGoal_Request_type_support_data_t;

static _BrakeRelease_SendGoal_Request_type_support_data_t _BrakeRelease_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_SendGoal_Request_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_SendGoal_Request>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal_Request)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_SendGoal_Request>();
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
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_SendGoal_Response_type_support_ids_t;

static const _BrakeRelease_SendGoal_Response_type_support_ids_t _BrakeRelease_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_SendGoal_Response_type_support_symbol_names_t _BrakeRelease_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal_Response)),
  }
};

typedef struct _BrakeRelease_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _BrakeRelease_SendGoal_Response_type_support_data_t;

static _BrakeRelease_SendGoal_Response_type_support_data_t _BrakeRelease_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_SendGoal_Response_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_SendGoal_Response>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal_Response)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_SendGoal_type_support_ids_t;

static const _BrakeRelease_SendGoal_type_support_ids_t _BrakeRelease_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_SendGoal_type_support_symbol_names_t _BrakeRelease_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal)),
  }
};

typedef struct _BrakeRelease_SendGoal_type_support_data_t
{
  void * data[2];
} _BrakeRelease_SendGoal_type_support_data_t;

static _BrakeRelease_SendGoal_type_support_data_t _BrakeRelease_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_SendGoal_service_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BrakeRelease_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_SendGoal>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_GetResult_Request_type_support_ids_t;

static const _BrakeRelease_GetResult_Request_type_support_ids_t _BrakeRelease_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_GetResult_Request_type_support_symbol_names_t _BrakeRelease_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult_Request)),
  }
};

typedef struct _BrakeRelease_GetResult_Request_type_support_data_t
{
  void * data[2];
} _BrakeRelease_GetResult_Request_type_support_data_t;

static _BrakeRelease_GetResult_Request_type_support_data_t _BrakeRelease_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_GetResult_Request_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_GetResult_Request>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult_Request)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_GetResult_Request>();
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
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_GetResult_Response_type_support_ids_t;

static const _BrakeRelease_GetResult_Response_type_support_ids_t _BrakeRelease_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_GetResult_Response_type_support_symbol_names_t _BrakeRelease_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult_Response)),
  }
};

typedef struct _BrakeRelease_GetResult_Response_type_support_data_t
{
  void * data[2];
} _BrakeRelease_GetResult_Response_type_support_data_t;

static _BrakeRelease_GetResult_Response_type_support_data_t _BrakeRelease_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_GetResult_Response_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_GetResult_Response>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult_Response)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_GetResult_Response>();
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
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_GetResult_type_support_ids_t;

static const _BrakeRelease_GetResult_type_support_ids_t _BrakeRelease_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_GetResult_type_support_symbol_names_t _BrakeRelease_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult)),
  }
};

typedef struct _BrakeRelease_GetResult_type_support_data_t
{
  void * data[2];
} _BrakeRelease_GetResult_type_support_data_t;

static _BrakeRelease_GetResult_type_support_data_t _BrakeRelease_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_GetResult_service_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BrakeRelease_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_GetResult>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
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

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BrakeRelease_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BrakeRelease_FeedbackMessage_type_support_ids_t;

static const _BrakeRelease_FeedbackMessage_type_support_ids_t _BrakeRelease_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BrakeRelease_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BrakeRelease_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BrakeRelease_FeedbackMessage_type_support_symbol_names_t _BrakeRelease_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, BrakeRelease_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, BrakeRelease_FeedbackMessage)),
  }
};

typedef struct _BrakeRelease_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _BrakeRelease_FeedbackMessage_type_support_data_t;

static _BrakeRelease_FeedbackMessage_type_support_data_t _BrakeRelease_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BrakeRelease_FeedbackMessage_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_BrakeRelease_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_BrakeRelease_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_BrakeRelease_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BrakeRelease_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BrakeRelease_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_FeedbackMessage>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease_FeedbackMessage)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/brake_release__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t BrakeRelease_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease>()
{
  using ::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::BrakeRelease_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  BrakeRelease_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ur_ros_rtde_msgs::action::BrakeRelease::Impl::SendGoalService>();
  BrakeRelease_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ur_ros_rtde_msgs::action::BrakeRelease::Impl::GetResultService>();
  BrakeRelease_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ur_ros_rtde_msgs::action::BrakeRelease::Impl::CancelGoalService>();
  BrakeRelease_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ur_ros_rtde_msgs::action::BrakeRelease::Impl::FeedbackMessage>();
  BrakeRelease_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ur_ros_rtde_msgs::action::BrakeRelease::Impl::GoalStatusMessage>();
  return &BrakeRelease_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, BrakeRelease)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ur_ros_rtde_msgs::action::BrakeRelease>();
}

#ifdef __cplusplus
}
#endif
