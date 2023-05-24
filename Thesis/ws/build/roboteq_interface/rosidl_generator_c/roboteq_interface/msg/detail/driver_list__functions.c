// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice
#include "roboteq_interface/msg/detail/driver_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
roboteq_interface__msg__DriverList__init(roboteq_interface__msg__DriverList * msg)
{
  if (!msg) {
    return false;
  }
  // motors
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->motors, 0)) {
    roboteq_interface__msg__DriverList__fini(msg);
    return false;
  }
  return true;
}

void
roboteq_interface__msg__DriverList__fini(roboteq_interface__msg__DriverList * msg)
{
  if (!msg) {
    return;
  }
  // motors
  rosidl_runtime_c__int16__Sequence__fini(&msg->motors);
}

bool
roboteq_interface__msg__DriverList__are_equal(const roboteq_interface__msg__DriverList * lhs, const roboteq_interface__msg__DriverList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motors
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->motors), &(rhs->motors)))
  {
    return false;
  }
  return true;
}

bool
roboteq_interface__msg__DriverList__copy(
  const roboteq_interface__msg__DriverList * input,
  roboteq_interface__msg__DriverList * output)
{
  if (!input || !output) {
    return false;
  }
  // motors
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->motors), &(output->motors)))
  {
    return false;
  }
  return true;
}

roboteq_interface__msg__DriverList *
roboteq_interface__msg__DriverList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboteq_interface__msg__DriverList * msg = (roboteq_interface__msg__DriverList *)allocator.allocate(sizeof(roboteq_interface__msg__DriverList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roboteq_interface__msg__DriverList));
  bool success = roboteq_interface__msg__DriverList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roboteq_interface__msg__DriverList__destroy(roboteq_interface__msg__DriverList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roboteq_interface__msg__DriverList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roboteq_interface__msg__DriverList__Sequence__init(roboteq_interface__msg__DriverList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboteq_interface__msg__DriverList * data = NULL;

  if (size) {
    data = (roboteq_interface__msg__DriverList *)allocator.zero_allocate(size, sizeof(roboteq_interface__msg__DriverList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roboteq_interface__msg__DriverList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roboteq_interface__msg__DriverList__fini(&data[i - 1]);
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
roboteq_interface__msg__DriverList__Sequence__fini(roboteq_interface__msg__DriverList__Sequence * array)
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
      roboteq_interface__msg__DriverList__fini(&array->data[i]);
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

roboteq_interface__msg__DriverList__Sequence *
roboteq_interface__msg__DriverList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roboteq_interface__msg__DriverList__Sequence * array = (roboteq_interface__msg__DriverList__Sequence *)allocator.allocate(sizeof(roboteq_interface__msg__DriverList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roboteq_interface__msg__DriverList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roboteq_interface__msg__DriverList__Sequence__destroy(roboteq_interface__msg__DriverList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roboteq_interface__msg__DriverList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roboteq_interface__msg__DriverList__Sequence__are_equal(const roboteq_interface__msg__DriverList__Sequence * lhs, const roboteq_interface__msg__DriverList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roboteq_interface__msg__DriverList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roboteq_interface__msg__DriverList__Sequence__copy(
  const roboteq_interface__msg__DriverList__Sequence * input,
  roboteq_interface__msg__DriverList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roboteq_interface__msg__DriverList);
    roboteq_interface__msg__DriverList * data =
      (roboteq_interface__msg__DriverList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roboteq_interface__msg__DriverList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          roboteq_interface__msg__DriverList__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roboteq_interface__msg__DriverList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
