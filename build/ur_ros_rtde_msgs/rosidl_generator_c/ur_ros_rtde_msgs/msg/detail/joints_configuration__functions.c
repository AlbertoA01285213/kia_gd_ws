// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_ros_rtde_msgs:msg/JointsConfiguration.idl
// generated code does not contain a copyright notice
#include "ur_ros_rtde_msgs/msg/detail/joints_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ur_ros_rtde_msgs__msg__JointsConfiguration__init(ur_ros_rtde_msgs__msg__JointsConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // motors
  if (!rosidl_runtime_c__double__Sequence__init(&msg->motors, 0)) {
    ur_ros_rtde_msgs__msg__JointsConfiguration__fini(msg);
    return false;
  }
  return true;
}

void
ur_ros_rtde_msgs__msg__JointsConfiguration__fini(ur_ros_rtde_msgs__msg__JointsConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // motors
  rosidl_runtime_c__double__Sequence__fini(&msg->motors);
}

bool
ur_ros_rtde_msgs__msg__JointsConfiguration__are_equal(const ur_ros_rtde_msgs__msg__JointsConfiguration * lhs, const ur_ros_rtde_msgs__msg__JointsConfiguration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motors
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->motors), &(rhs->motors)))
  {
    return false;
  }
  return true;
}

bool
ur_ros_rtde_msgs__msg__JointsConfiguration__copy(
  const ur_ros_rtde_msgs__msg__JointsConfiguration * input,
  ur_ros_rtde_msgs__msg__JointsConfiguration * output)
{
  if (!input || !output) {
    return false;
  }
  // motors
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->motors), &(output->motors)))
  {
    return false;
  }
  return true;
}

ur_ros_rtde_msgs__msg__JointsConfiguration *
ur_ros_rtde_msgs__msg__JointsConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__JointsConfiguration * msg = (ur_ros_rtde_msgs__msg__JointsConfiguration *)allocator.allocate(sizeof(ur_ros_rtde_msgs__msg__JointsConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_ros_rtde_msgs__msg__JointsConfiguration));
  bool success = ur_ros_rtde_msgs__msg__JointsConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_ros_rtde_msgs__msg__JointsConfiguration__destroy(ur_ros_rtde_msgs__msg__JointsConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_ros_rtde_msgs__msg__JointsConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__init(ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__JointsConfiguration * data = NULL;

  if (size) {
    data = (ur_ros_rtde_msgs__msg__JointsConfiguration *)allocator.zero_allocate(size, sizeof(ur_ros_rtde_msgs__msg__JointsConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_ros_rtde_msgs__msg__JointsConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_ros_rtde_msgs__msg__JointsConfiguration__fini(&data[i - 1]);
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
ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__fini(ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * array)
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
      ur_ros_rtde_msgs__msg__JointsConfiguration__fini(&array->data[i]);
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

ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence *
ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * array = (ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence *)allocator.allocate(sizeof(ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__destroy(ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__are_equal(const ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * lhs, const ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_ros_rtde_msgs__msg__JointsConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence__copy(
  const ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * input,
  ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_ros_rtde_msgs__msg__JointsConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_ros_rtde_msgs__msg__JointsConfiguration * data =
      (ur_ros_rtde_msgs__msg__JointsConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_ros_rtde_msgs__msg__JointsConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_ros_rtde_msgs__msg__JointsConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_ros_rtde_msgs__msg__JointsConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
