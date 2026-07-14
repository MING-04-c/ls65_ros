// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eli_common_interface:srv/SetPayload.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/srv/detail/set_payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `center_of_gravity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
eli_common_interface__srv__SetPayload_Request__init(eli_common_interface__srv__SetPayload_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mass
  // center_of_gravity
  if (!geometry_msgs__msg__Vector3__init(&msg->center_of_gravity)) {
    eli_common_interface__srv__SetPayload_Request__fini(msg);
    return false;
  }
  return true;
}

void
eli_common_interface__srv__SetPayload_Request__fini(eli_common_interface__srv__SetPayload_Request * msg)
{
  if (!msg) {
    return;
  }
  // mass
  // center_of_gravity
  geometry_msgs__msg__Vector3__fini(&msg->center_of_gravity);
}

bool
eli_common_interface__srv__SetPayload_Request__are_equal(const eli_common_interface__srv__SetPayload_Request * lhs, const eli_common_interface__srv__SetPayload_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mass
  if (lhs->mass != rhs->mass) {
    return false;
  }
  // center_of_gravity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->center_of_gravity), &(rhs->center_of_gravity)))
  {
    return false;
  }
  return true;
}

bool
eli_common_interface__srv__SetPayload_Request__copy(
  const eli_common_interface__srv__SetPayload_Request * input,
  eli_common_interface__srv__SetPayload_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mass
  output->mass = input->mass;
  // center_of_gravity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->center_of_gravity), &(output->center_of_gravity)))
  {
    return false;
  }
  return true;
}

eli_common_interface__srv__SetPayload_Request *
eli_common_interface__srv__SetPayload_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__SetPayload_Request * msg = (eli_common_interface__srv__SetPayload_Request *)allocator.allocate(sizeof(eli_common_interface__srv__SetPayload_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_common_interface__srv__SetPayload_Request));
  bool success = eli_common_interface__srv__SetPayload_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_common_interface__srv__SetPayload_Request__destroy(eli_common_interface__srv__SetPayload_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_common_interface__srv__SetPayload_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_common_interface__srv__SetPayload_Request__Sequence__init(eli_common_interface__srv__SetPayload_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__SetPayload_Request * data = NULL;

  if (size) {
    data = (eli_common_interface__srv__SetPayload_Request *)allocator.zero_allocate(size, sizeof(eli_common_interface__srv__SetPayload_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_common_interface__srv__SetPayload_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_common_interface__srv__SetPayload_Request__fini(&data[i - 1]);
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
eli_common_interface__srv__SetPayload_Request__Sequence__fini(eli_common_interface__srv__SetPayload_Request__Sequence * array)
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
      eli_common_interface__srv__SetPayload_Request__fini(&array->data[i]);
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

eli_common_interface__srv__SetPayload_Request__Sequence *
eli_common_interface__srv__SetPayload_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__SetPayload_Request__Sequence * array = (eli_common_interface__srv__SetPayload_Request__Sequence *)allocator.allocate(sizeof(eli_common_interface__srv__SetPayload_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_common_interface__srv__SetPayload_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_common_interface__srv__SetPayload_Request__Sequence__destroy(eli_common_interface__srv__SetPayload_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_common_interface__srv__SetPayload_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_common_interface__srv__SetPayload_Request__Sequence__are_equal(const eli_common_interface__srv__SetPayload_Request__Sequence * lhs, const eli_common_interface__srv__SetPayload_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_common_interface__srv__SetPayload_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_common_interface__srv__SetPayload_Request__Sequence__copy(
  const eli_common_interface__srv__SetPayload_Request__Sequence * input,
  eli_common_interface__srv__SetPayload_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_common_interface__srv__SetPayload_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_common_interface__srv__SetPayload_Request * data =
      (eli_common_interface__srv__SetPayload_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_common_interface__srv__SetPayload_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_common_interface__srv__SetPayload_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_common_interface__srv__SetPayload_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
eli_common_interface__srv__SetPayload_Response__init(eli_common_interface__srv__SetPayload_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
eli_common_interface__srv__SetPayload_Response__fini(eli_common_interface__srv__SetPayload_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
eli_common_interface__srv__SetPayload_Response__are_equal(const eli_common_interface__srv__SetPayload_Response * lhs, const eli_common_interface__srv__SetPayload_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
eli_common_interface__srv__SetPayload_Response__copy(
  const eli_common_interface__srv__SetPayload_Response * input,
  eli_common_interface__srv__SetPayload_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

eli_common_interface__srv__SetPayload_Response *
eli_common_interface__srv__SetPayload_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__SetPayload_Response * msg = (eli_common_interface__srv__SetPayload_Response *)allocator.allocate(sizeof(eli_common_interface__srv__SetPayload_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_common_interface__srv__SetPayload_Response));
  bool success = eli_common_interface__srv__SetPayload_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_common_interface__srv__SetPayload_Response__destroy(eli_common_interface__srv__SetPayload_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_common_interface__srv__SetPayload_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_common_interface__srv__SetPayload_Response__Sequence__init(eli_common_interface__srv__SetPayload_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__SetPayload_Response * data = NULL;

  if (size) {
    data = (eli_common_interface__srv__SetPayload_Response *)allocator.zero_allocate(size, sizeof(eli_common_interface__srv__SetPayload_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_common_interface__srv__SetPayload_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_common_interface__srv__SetPayload_Response__fini(&data[i - 1]);
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
eli_common_interface__srv__SetPayload_Response__Sequence__fini(eli_common_interface__srv__SetPayload_Response__Sequence * array)
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
      eli_common_interface__srv__SetPayload_Response__fini(&array->data[i]);
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

eli_common_interface__srv__SetPayload_Response__Sequence *
eli_common_interface__srv__SetPayload_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__SetPayload_Response__Sequence * array = (eli_common_interface__srv__SetPayload_Response__Sequence *)allocator.allocate(sizeof(eli_common_interface__srv__SetPayload_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_common_interface__srv__SetPayload_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_common_interface__srv__SetPayload_Response__Sequence__destroy(eli_common_interface__srv__SetPayload_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_common_interface__srv__SetPayload_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_common_interface__srv__SetPayload_Response__Sequence__are_equal(const eli_common_interface__srv__SetPayload_Response__Sequence * lhs, const eli_common_interface__srv__SetPayload_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_common_interface__srv__SetPayload_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_common_interface__srv__SetPayload_Response__Sequence__copy(
  const eli_common_interface__srv__SetPayload_Response__Sequence * input,
  eli_common_interface__srv__SetPayload_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_common_interface__srv__SetPayload_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_common_interface__srv__SetPayload_Response * data =
      (eli_common_interface__srv__SetPayload_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_common_interface__srv__SetPayload_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_common_interface__srv__SetPayload_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_common_interface__srv__SetPayload_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
