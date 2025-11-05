// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ur_ros_rtde_msgs:action/MoveLRelative.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_Goal_type_support_ids_t;

static const _MoveLRelative_Goal_type_support_ids_t _MoveLRelative_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_Goal_type_support_symbol_names_t _MoveLRelative_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Goal)),
  }
};

typedef struct _MoveLRelative_Goal_type_support_data_t
{
  void * data[2];
} _MoveLRelative_Goal_type_support_data_t;

static _MoveLRelative_Goal_type_support_data_t _MoveLRelative_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_Goal_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_Goal_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_Goal>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Goal)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_Goal>();
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_Result_type_support_ids_t;

static const _MoveLRelative_Result_type_support_ids_t _MoveLRelative_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_Result_type_support_symbol_names_t _MoveLRelative_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Result)),
  }
};

typedef struct _MoveLRelative_Result_type_support_data_t
{
  void * data[2];
} _MoveLRelative_Result_type_support_data_t;

static _MoveLRelative_Result_type_support_data_t _MoveLRelative_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_Result_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_Result_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_Result>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Result)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_Result>();
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_Feedback_type_support_ids_t;

static const _MoveLRelative_Feedback_type_support_ids_t _MoveLRelative_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_Feedback_type_support_symbol_names_t _MoveLRelative_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Feedback)),
  }
};

typedef struct _MoveLRelative_Feedback_type_support_data_t
{
  void * data[2];
} _MoveLRelative_Feedback_type_support_data_t;

static _MoveLRelative_Feedback_type_support_data_t _MoveLRelative_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_Feedback_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_Feedback_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_Feedback)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>();
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_SendGoal_Request_type_support_ids_t;

static const _MoveLRelative_SendGoal_Request_type_support_ids_t _MoveLRelative_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_SendGoal_Request_type_support_symbol_names_t _MoveLRelative_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal_Request)),
  }
};

typedef struct _MoveLRelative_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveLRelative_SendGoal_Request_type_support_data_t;

static _MoveLRelative_SendGoal_Request_type_support_data_t _MoveLRelative_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_SendGoal_Request_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal_Request)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>();
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_SendGoal_Response_type_support_ids_t;

static const _MoveLRelative_SendGoal_Response_type_support_ids_t _MoveLRelative_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_SendGoal_Response_type_support_symbol_names_t _MoveLRelative_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal_Response)),
  }
};

typedef struct _MoveLRelative_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveLRelative_SendGoal_Response_type_support_data_t;

static _MoveLRelative_SendGoal_Response_type_support_data_t _MoveLRelative_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_SendGoal_Response_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal_Response)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_SendGoal_type_support_ids_t;

static const _MoveLRelative_SendGoal_type_support_ids_t _MoveLRelative_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_SendGoal_type_support_symbol_names_t _MoveLRelative_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal)),
  }
};

typedef struct _MoveLRelative_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveLRelative_SendGoal_type_support_data_t;

static _MoveLRelative_SendGoal_type_support_data_t _MoveLRelative_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_SendGoal_service_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveLRelative_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_GetResult_Request_type_support_ids_t;

static const _MoveLRelative_GetResult_Request_type_support_ids_t _MoveLRelative_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_GetResult_Request_type_support_symbol_names_t _MoveLRelative_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult_Request)),
  }
};

typedef struct _MoveLRelative_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveLRelative_GetResult_Request_type_support_data_t;

static _MoveLRelative_GetResult_Request_type_support_data_t _MoveLRelative_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_GetResult_Request_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult_Request)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>();
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_GetResult_Response_type_support_ids_t;

static const _MoveLRelative_GetResult_Response_type_support_ids_t _MoveLRelative_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_GetResult_Response_type_support_symbol_names_t _MoveLRelative_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult_Response)),
  }
};

typedef struct _MoveLRelative_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveLRelative_GetResult_Response_type_support_data_t;

static _MoveLRelative_GetResult_Response_type_support_data_t _MoveLRelative_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_GetResult_Response_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult_Response)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>();
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_GetResult_type_support_ids_t;

static const _MoveLRelative_GetResult_type_support_ids_t _MoveLRelative_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_GetResult_type_support_symbol_names_t _MoveLRelative_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult)),
  }
};

typedef struct _MoveLRelative_GetResult_type_support_data_t
{
  void * data[2];
} _MoveLRelative_GetResult_type_support_data_t;

static _MoveLRelative_GetResult_type_support_data_t _MoveLRelative_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_GetResult_service_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveLRelative_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_GetResult_service_typesupport_map),
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
get_service_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

typedef struct _MoveLRelative_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveLRelative_FeedbackMessage_type_support_ids_t;

static const _MoveLRelative_FeedbackMessage_type_support_ids_t _MoveLRelative_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveLRelative_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveLRelative_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveLRelative_FeedbackMessage_type_support_symbol_names_t _MoveLRelative_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_ros_rtde_msgs, action, MoveLRelative_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, MoveLRelative_FeedbackMessage)),
  }
};

typedef struct _MoveLRelative_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveLRelative_FeedbackMessage_type_support_data_t;

static _MoveLRelative_FeedbackMessage_type_support_data_t _MoveLRelative_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveLRelative_FeedbackMessage_message_typesupport_map = {
  2,
  "ur_ros_rtde_msgs",
  &_MoveLRelative_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveLRelative_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveLRelative_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveLRelative_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveLRelative_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative_FeedbackMessage)() {
  return get_message_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
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

static rosidl_action_type_support_t MoveLRelative_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative>()
{
  using ::ur_ros_rtde_msgs::action::rosidl_typesupport_cpp::MoveLRelative_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MoveLRelative_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::ur_ros_rtde_msgs::action::MoveLRelative::Impl::SendGoalService>();
  MoveLRelative_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::ur_ros_rtde_msgs::action::MoveLRelative::Impl::GetResultService>();
  MoveLRelative_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::ur_ros_rtde_msgs::action::MoveLRelative::Impl::CancelGoalService>();
  MoveLRelative_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::ur_ros_rtde_msgs::action::MoveLRelative::Impl::FeedbackMessage>();
  MoveLRelative_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::ur_ros_rtde_msgs::action::MoveLRelative::Impl::GoalStatusMessage>();
  return &MoveLRelative_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, ur_ros_rtde_msgs, action, MoveLRelative)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<ur_ros_rtde_msgs::action::MoveLRelative>();
}

#ifdef __cplusplus
}
#endif
