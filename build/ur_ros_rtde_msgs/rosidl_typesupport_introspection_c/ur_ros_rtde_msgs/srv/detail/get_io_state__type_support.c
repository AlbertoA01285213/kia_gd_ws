// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_ros_rtde_msgs:srv/GetIOState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_ros_rtde_msgs/srv/detail/get_io_state__rosidl_typesupport_introspection_c.h"
#include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_ros_rtde_msgs/srv/detail/get_io_state__functions.h"
#include "ur_ros_rtde_msgs/srv/detail/get_io_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__srv__GetIOState_Request__init(message_memory);
}

void ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__srv__GetIOState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__srv__GetIOState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_members = {
  "ur_ros_rtde_msgs__srv",  // message namespace
  "GetIOState_Request",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__srv__GetIOState_Request),
  ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_member_array,  // message members
  ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState_Request)() {
  if (!ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__srv__GetIOState_Request__rosidl_typesupport_introspection_c__GetIOState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/srv/detail/get_io_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/srv/detail/get_io_state__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/srv/detail/get_io_state__struct.h"


// Include directives for member types
// Member `digital_input_state`
// Member `digital_output_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__srv__GetIOState_Response__init(message_memory);
}

void ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__srv__GetIOState_Response__fini(message_memory);
}

size_t ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__size_function__GetIOState_Response__digital_input_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_const_function__GetIOState_Response__digital_input_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_function__GetIOState_Response__digital_input_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__fetch_function__GetIOState_Response__digital_input_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_const_function__GetIOState_Response__digital_input_state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__assign_function__GetIOState_Response__digital_input_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_function__GetIOState_Response__digital_input_state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__resize_function__GetIOState_Response__digital_input_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__size_function__GetIOState_Response__digital_output_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_const_function__GetIOState_Response__digital_output_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_function__GetIOState_Response__digital_output_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__fetch_function__GetIOState_Response__digital_output_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_const_function__GetIOState_Response__digital_output_state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__assign_function__GetIOState_Response__digital_output_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_function__GetIOState_Response__digital_output_state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__resize_function__GetIOState_Response__digital_output_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__srv__GetIOState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "digital_input_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__srv__GetIOState_Response, digital_input_state),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__size_function__GetIOState_Response__digital_input_state,  // size() function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_const_function__GetIOState_Response__digital_input_state,  // get_const(index) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_function__GetIOState_Response__digital_input_state,  // get(index) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__fetch_function__GetIOState_Response__digital_input_state,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__assign_function__GetIOState_Response__digital_input_state,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__resize_function__GetIOState_Response__digital_input_state  // resize(index) function pointer
  },
  {
    "digital_output_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__srv__GetIOState_Response, digital_output_state),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__size_function__GetIOState_Response__digital_output_state,  // size() function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_const_function__GetIOState_Response__digital_output_state,  // get_const(index) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__get_function__GetIOState_Response__digital_output_state,  // get(index) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__fetch_function__GetIOState_Response__digital_output_state,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__assign_function__GetIOState_Response__digital_output_state,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__resize_function__GetIOState_Response__digital_output_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_members = {
  "ur_ros_rtde_msgs__srv",  // message namespace
  "GetIOState_Response",  // message name
  3,  // number of fields
  sizeof(ur_ros_rtde_msgs__srv__GetIOState_Response),
  ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_member_array,  // message members
  ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState_Response)() {
  if (!ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__srv__GetIOState_Response__rosidl_typesupport_introspection_c__GetIOState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/srv/detail/get_io_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_members = {
  "ur_ros_rtde_msgs__srv",  // service namespace
  "GetIOState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_Request_message_type_support_handle,
  NULL  // response message
  // ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState)() {
  if (!ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, srv, GetIOState_Response)()->data;
  }

  return &ur_ros_rtde_msgs__srv__detail__get_io_state__rosidl_typesupport_introspection_c__GetIOState_service_type_support_handle;
}
