// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_ros_rtde_msgs:msg/Vector.idl
// generated code does not contain a copyright notice
#include "ur_ros_rtde_msgs/msg/detail/vector__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_ros_rtde_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_ros_rtde_msgs/msg/detail/vector__struct.h"
#include "ur_ros_rtde_msgs/msg/detail/vector__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // vector
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // vector

// forward declare type support functions


using _Vector__ros_msg_type = ur_ros_rtde_msgs__msg__Vector;

static bool _Vector__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Vector__ros_msg_type * ros_message = static_cast<const _Vector__ros_msg_type *>(untyped_ros_message);
  // Field name: vector
  {
    size_t size = ros_message->vector.size;
    auto array_ptr = ros_message->vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Vector__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Vector__ros_msg_type * ros_message = static_cast<_Vector__ros_msg_type *>(untyped_ros_message);
  // Field name: vector
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

    if (ros_message->vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vector, size)) {
      fprintf(stderr, "failed to create array for field 'vector'");
      return false;
    }
    auto array_ptr = ros_message->vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_ros_rtde_msgs
size_t get_serialized_size_ur_ros_rtde_msgs__msg__Vector(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Vector__ros_msg_type * ros_message = static_cast<const _Vector__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vector
  {
    size_t array_size = ros_message->vector.size;
    auto array_ptr = ros_message->vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Vector__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_ros_rtde_msgs__msg__Vector(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_ros_rtde_msgs
size_t max_serialized_size_ur_ros_rtde_msgs__msg__Vector(
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

  // member: vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ur_ros_rtde_msgs__msg__Vector;
    is_plain =
      (
      offsetof(DataType, vector) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Vector__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_ros_rtde_msgs__msg__Vector(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Vector = {
  "ur_ros_rtde_msgs::msg",
  "Vector",
  _Vector__cdr_serialize,
  _Vector__cdr_deserialize,
  _Vector__get_serialized_size,
  _Vector__max_serialized_size
};

static rosidl_message_type_support_t _Vector__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Vector,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_ros_rtde_msgs, msg, Vector)() {
  return &_Vector__type_support;
}

#if defined(__cplusplus)
}
#endif
