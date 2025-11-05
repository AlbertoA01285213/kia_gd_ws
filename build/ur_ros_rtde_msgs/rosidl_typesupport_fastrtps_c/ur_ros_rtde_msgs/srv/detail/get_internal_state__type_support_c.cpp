// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_ros_rtde_msgs:srv/GetInternalState.idl
// generated code does not contain a copyright notice
#include "ur_ros_rtde_msgs/srv/detail/get_internal_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_ros_rtde_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_ros_rtde_msgs/srv/detail/get_internal_state__struct.h"
#include "ur_ros_rtde_msgs/srv/detail/get_internal_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetInternalState_Request__ros_msg_type = ur_ros_rtde_msgs__srv__GetInternalState_Request;

static bool _GetInternalState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetInternalState_Request__ros_msg_type * ros_message = static_cast<const _GetInternalState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetInternalState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetInternalState_Request__ros_msg_type * ros_message = static_cast<_GetInternalState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_ros_rtde_msgs
size_t get_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetInternalState_Request__ros_msg_type * ros_message = static_cast<const _GetInternalState_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetInternalState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_ros_rtde_msgs
size_t max_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_ros_rtde_msgs__srv__GetInternalState_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetInternalState_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetInternalState_Request = {
  "ur_ros_rtde_msgs::srv",
  "GetInternalState_Request",
  _GetInternalState_Request__cdr_serialize,
  _GetInternalState_Request__cdr_deserialize,
  _GetInternalState_Request__get_serialized_size,
  _GetInternalState_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetInternalState_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetInternalState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_ros_rtde_msgs, srv, GetInternalState_Request)() {
  return &_GetInternalState_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/srv/detail/get_internal_state__struct.h"
// already included above
// #include "ur_ros_rtde_msgs/srv/detail/get_internal_state__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // digital_input_state, digital_output_state
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // digital_input_state, digital_output_state

// forward declare type support functions


using _GetInternalState_Response__ros_msg_type = ur_ros_rtde_msgs__srv__GetInternalState_Response;

static bool _GetInternalState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetInternalState_Response__ros_msg_type * ros_message = static_cast<const _GetInternalState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: digital_input_state
  {
    size_t size = ros_message->digital_input_state.size;
    auto array_ptr = ros_message->digital_input_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: digital_output_state
  {
    size_t size = ros_message->digital_output_state.size;
    auto array_ptr = ros_message->digital_output_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed_slider_value
  {
    cdr << ros_message->speed_slider_value;
  }

  // Field name: payload_value
  {
    cdr << ros_message->payload_value;
  }

  return true;
}

static bool _GetInternalState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetInternalState_Response__ros_msg_type * ros_message = static_cast<_GetInternalState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: digital_input_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->digital_input_state.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->digital_input_state);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->digital_input_state, size)) {
      fprintf(stderr, "failed to create array for field 'digital_input_state'");
      return false;
    }
    auto array_ptr = ros_message->digital_input_state.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: digital_output_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->digital_output_state.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->digital_output_state);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->digital_output_state, size)) {
      fprintf(stderr, "failed to create array for field 'digital_output_state'");
      return false;
    }
    auto array_ptr = ros_message->digital_output_state.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: speed_slider_value
  {
    cdr >> ros_message->speed_slider_value;
  }

  // Field name: payload_value
  {
    cdr >> ros_message->payload_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_ros_rtde_msgs
size_t get_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetInternalState_Response__ros_msg_type * ros_message = static_cast<const _GetInternalState_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_input_state
  {
    size_t array_size = ros_message->digital_input_state.size;
    auto array_ptr = ros_message->digital_input_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_output_state
  {
    size_t array_size = ros_message->digital_output_state.size;
    auto array_ptr = ros_message->digital_output_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_slider_value
  {
    size_t item_size = sizeof(ros_message->speed_slider_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name payload_value
  {
    size_t item_size = sizeof(ros_message->payload_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetInternalState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_ros_rtde_msgs
size_t max_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: digital_input_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: digital_output_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_slider_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: payload_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_ros_rtde_msgs__srv__GetInternalState_Response;
    is_plain =
      (
      offsetof(DataType, payload_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetInternalState_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_ros_rtde_msgs__srv__GetInternalState_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetInternalState_Response = {
  "ur_ros_rtde_msgs::srv",
  "GetInternalState_Response",
  _GetInternalState_Response__cdr_serialize,
  _GetInternalState_Response__cdr_deserialize,
  _GetInternalState_Response__get_serialized_size,
  _GetInternalState_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetInternalState_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetInternalState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_ros_rtde_msgs, srv, GetInternalState_Response)() {
  return &_GetInternalState_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_ros_rtde_msgs/srv/get_internal_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetInternalState__callbacks = {
  "ur_ros_rtde_msgs::srv",
  "GetInternalState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_ros_rtde_msgs, srv, GetInternalState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_ros_rtde_msgs, srv, GetInternalState_Response)(),
};

static rosidl_service_type_support_t GetInternalState__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetInternalState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_ros_rtde_msgs, srv, GetInternalState)() {
  return &GetInternalState__handle;
}

#if defined(__cplusplus)
}
#endif
