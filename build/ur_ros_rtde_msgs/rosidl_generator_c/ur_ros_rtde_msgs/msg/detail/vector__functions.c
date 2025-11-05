// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_ros_rtde_msgs:msg/Vector.idl
// generated code does not contain a copyright notice
#include "ur_ros_rtde_msgs/msg/detail/vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ur_ros_rtde_msgs__msg__Vector__init(ur_ros_rtde_msgs__msg__Vector * msg)
{
  if (!msg) {
    return false;
  }
  // vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vector, 0)) {
    ur_ros_rtde_msgs__msg__Vector__fini(msg);
    return false;
  }
  return true;
}

void
ur_ros_rtde_msgs__msg__Vector__fini(ur_ros_rtde_msgs__msg__Vector * msg)
{
  if (!msg) {
    return;
  }
  // vector
  rosidl_runtime_c__double__Sequence__fini(&msg->vector);
}

bool
ur_ros_rtde_msgs__msg__Vector__are_equal(const ur_ros_rtde_msgs__msg__Vector * lhs, const ur_ros_rtde_msgs__msg__Vector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vector
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vector), &(rhs->vector)))
  {
    return false;
  }
  return true;
}

bool
ur_ros_rtde_msgs__msg__Vector__copy(
  const ur_ros_rtde_msgs__msg__Vector * input,
  ur_ros_rtde_msgs__msg__Vector * output)
{
  if (!input || !output) {
    return false;
  }
  // vector
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vector), &(output->vector)))
  {
    return false;
  }
  return true;
}

ur_ros_rtde_msgs__msg__Vector *
ur_ros_rtde_msgs__msg__Vector__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__Vector * msg = (ur_ros_rtde_msgs__msg__Vector *)allocator.allocate(sizeof(ur_ros_rtde_msgs__msg__Vector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_ros_rtde_msgs__msg__Vector));
  bool success = ur_ros_rtde_msgs__msg__Vector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_ros_rtde_msgs__msg__Vector__destroy(ur_ros_rtde_msgs__msg__Vector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_ros_rtde_msgs__msg__Vector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_ros_rtde_msgs__msg__Vector__Sequence__init(ur_ros_rtde_msgs__msg__Vector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__Vector * data = NULL;

  if (size) {
    data = (ur_ros_rtde_msgs__msg__Vector *)allocator.zero_allocate(size, sizeof(ur_ros_rtde_msgs__msg__Vector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_ros_rtde_msgs__msg__Vector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_ros_rtde_msgs__msg__Vector__fini(&data[i - 1]);
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
ur_ros_rtde_msgs__msg__Vector__Sequence__fini(ur_ros_rtde_msgs__msg__Vector__Sequence * array)
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
      ur_ros_rtde_msgs__msg__Vector__fini(&array->data[i]);
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

ur_ros_rtde_msgs__msg__Vector__Sequence *
ur_ros_rtde_msgs__msg__Vector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_ros_rtde_msgs__msg__Vector__Sequence * array = (ur_ros_rtde_msgs__msg__Vector__Sequence *)allocator.allocate(sizeof(ur_ros_rtde_msgs__msg__Vector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_ros_rtde_msgs__msg__Vector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_ros_rtde_msgs__msg__Vector__Sequence__destroy(ur_ros_rtde_msgs__msg__Vector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_ros_rtde_msgs__msg__Vector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_ros_rtde_msgs__msg__Vector__Sequence__are_equal(const ur_ros_rtde_msgs__msg__Vector__Sequence * lhs, const ur_ros_rtde_msgs__msg__Vector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_ros_rtde_msgs__msg__Vector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_ros_rtde_msgs__msg__Vector__Sequence__copy(
  const ur_ros_rtde_msgs__msg__Vector__Sequence * input,
  ur_ros_rtde_msgs__msg__Vector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_ros_rtde_msgs__msg__Vector);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_ros_rtde_msgs__msg__Vector * data =
      (ur_ros_rtde_msgs__msg__Vector *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_ros_rtde_msgs__msg__Vector__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_ros_rtde_msgs__msg__Vector__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_ros_rtde_msgs__msg__Vector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
