// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_ros_rtde_msgs:msg/IOState.idl
// generated code does not contain a copyright notice
#include "ur_ros_rtde_msgs/msg/detail/io_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `digital_input_state`
// Member `digital_output_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ur_ros_rtde_msgs__msg__IOState__init(ur_ros_rtde_msgs__msg__IOState * msg)
{
  if (!msg) {
    return false;
  }
  // digital_input_state
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->digital_input_state, 0)) {
    ur_ros_rtde_msgs__msg__IOState__fini(msg);
    return false;
  }
  // digital_output_state
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->digital_output_state, 0)) {
    ur_ros_rtde_msgs__msg__IOState__fini(msg);
    return false;
  }
  return true;
}

void
ur_ros_rtde_msgs__msg__IOState__fini(ur_ros_rtde_msgs__msg__IOState * msg)
{
  if (!msg) {
    return;
  }
  // digital_input_state
  rosidl_runtime_c__boolean__Sequence__fini(&msg->digital_input_state);
  // digital_output_state
  rosidl_runtime_c__boolean__Sequence__fini(&msg->digital_output_state);
}

bool
ur_ros_rtde_msgs__msg__IOState__are_equal(const ur_ros_rtde_msgs__msg__IOState * lhs, const ur_ros_rtde_msgs__msg__IOState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // digital_input_state
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->digital_input_state), &(rhs->digital_input_state)))
  {
    return false;
  }
  // digital_output_state
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->digital_output_state), &(rhs->digital_output_state)))
  {
    return false;
  }
  return true;
}

bool
ur_ros_rtde_msgs__msg__IOState__copy(
  const ur_ros_rtde_msgs__msg__IOState * input,
  ur_ros_rtde_msgs__msg__IOState * output)
{
  if (!input || !output) {
    return false;
  }
  // digital_input_state
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->digital_input_state), &(output->digital_input_state)))
  {
    return false;
  }
  // digital_output_state
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->digital_output_state), &(output->digital_output_state)))
  {
    return false;
  }
  return true;
}

ur_ros_rtde_msgs__msg__IOState *
ur_ros_rtde_msgs__msg__IOState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__IOState * msg = (ur_ros_rtde_msgs__msg__IOState *)allocator.allocate(sizeof(ur_ros_rtde_msgs__msg__IOState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_ros_rtde_msgs__msg__IOState));
  bool success = ur_ros_rtde_msgs__msg__IOState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_ros_rtde_msgs__msg__IOState__destroy(ur_ros_rtde_msgs__msg__IOState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_ros_rtde_msgs__msg__IOState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_ros_rtde_msgs__msg__IOState__Sequence__init(ur_ros_rtde_msgs__msg__IOState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__IOState * data = NULL;

  if (size) {
    data = (ur_ros_rtde_msgs__msg__IOState *)allocator.zero_allocate(size, sizeof(ur_ros_rtde_msgs__msg__IOState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_ros_rtde_msgs__msg__IOState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_ros_rtde_msgs__msg__IOState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_ros_rtde_msgs__msg__IOState__Sequence__fini(ur_ros_rtde_msgs__msg__IOState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_ros_rtde_msgs__msg__IOState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_ros_rtde_msgs__msg__IOState__Sequence *
ur_ros_rtde_msgs__msg__IOState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__IOState__Sequence * array = (ur_ros_rtde_msgs__msg__IOState__Sequence *)allocator.allocate(sizeof(ur_ros_rtde_msgs__msg__IOState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_ros_rtde_msgs__msg__IOState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_ros_rtde_msgs__msg__IOState__Sequence__destroy(ur_ros_rtde_msgs__msg__IOState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_ros_rtde_msgs__msg__IOState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_ros_rtde_msgs__msg__IOState__Sequence__are_equal(const ur_ros_rtde_msgs__msg__IOState__Sequence * lhs, const ur_ros_rtde_msgs__msg__IOState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_ros_rtde_msgs__msg__IOState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_ros_rtde_msgs__msg__IOState__Sequence__copy(
  const ur_ros_rtde_msgs__msg__IOState__Sequence * input,
  ur_ros_rtde_msgs__msg__IOState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_ros_rtde_msgs__msg__IOState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_ros_rtde_msgs__msg__IOState * data =
      (ur_ros_rtde_msgs__msg__IOState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_ros_rtde_msgs__msg__IOState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_ros_rtde_msgs__msg__IOState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_ros_rtde_msgs__msg__IOState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
