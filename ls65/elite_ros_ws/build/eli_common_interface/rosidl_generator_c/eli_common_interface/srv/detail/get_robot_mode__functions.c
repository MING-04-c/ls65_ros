// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eli_common_interface:srv/GetRobotMode.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/srv/detail/get_robot_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
eli_common_interface__srv__GetRobotMode_Request__init(eli_common_interface__srv__GetRobotMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
eli_common_interface__srv__GetRobotMode_Request__fini(eli_common_interface__srv__GetRobotMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
eli_common_interface__srv__GetRobotMode_Request__are_equal(const eli_common_interface__srv__GetRobotMode_Request * lhs, const eli_common_interface__srv__GetRobotMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
eli_common_interface__srv__GetRobotMode_Request__copy(
  const eli_common_interface__srv__GetRobotMode_Request * input,
  eli_common_interface__srv__GetRobotMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

eli_common_interface__srv__GetRobotMode_Request *
eli_common_interface__srv__GetRobotMode_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__GetRobotMode_Request * msg = (eli_common_interface__srv__GetRobotMode_Request *)allocator.allocate(sizeof(eli_common_interface__srv__GetRobotMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_common_interface__srv__GetRobotMode_Request));
  bool success = eli_common_interface__srv__GetRobotMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_common_interface__srv__GetRobotMode_Request__destroy(eli_common_interface__srv__GetRobotMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_common_interface__srv__GetRobotMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_common_interface__srv__GetRobotMode_Request__Sequence__init(eli_common_interface__srv__GetRobotMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__GetRobotMode_Request * data = NULL;

  if (size) {
    data = (eli_common_interface__srv__GetRobotMode_Request *)allocator.zero_allocate(size, sizeof(eli_common_interface__srv__GetRobotMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_common_interface__srv__GetRobotMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_common_interface__srv__GetRobotMode_Request__fini(&data[i - 1]);
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
eli_common_interface__srv__GetRobotMode_Request__Sequence__fini(eli_common_interface__srv__GetRobotMode_Request__Sequence * array)
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
      eli_common_interface__srv__GetRobotMode_Request__fini(&array->data[i]);
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

eli_common_interface__srv__GetRobotMode_Request__Sequence *
eli_common_interface__srv__GetRobotMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__GetRobotMode_Request__Sequence * array = (eli_common_interface__srv__GetRobotMode_Request__Sequence *)allocator.allocate(sizeof(eli_common_interface__srv__GetRobotMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_common_interface__srv__GetRobotMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_common_interface__srv__GetRobotMode_Request__Sequence__destroy(eli_common_interface__srv__GetRobotMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_common_interface__srv__GetRobotMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_common_interface__srv__GetRobotMode_Request__Sequence__are_equal(const eli_common_interface__srv__GetRobotMode_Request__Sequence * lhs, const eli_common_interface__srv__GetRobotMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_common_interface__srv__GetRobotMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_common_interface__srv__GetRobotMode_Request__Sequence__copy(
  const eli_common_interface__srv__GetRobotMode_Request__Sequence * input,
  eli_common_interface__srv__GetRobotMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_common_interface__srv__GetRobotMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_common_interface__srv__GetRobotMode_Request * data =
      (eli_common_interface__srv__GetRobotMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_common_interface__srv__GetRobotMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_common_interface__srv__GetRobotMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_common_interface__srv__GetRobotMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `mode`
#include "eli_common_interface/msg/detail/robot_mode__functions.h"

bool
eli_common_interface__srv__GetRobotMode_Response__init(eli_common_interface__srv__GetRobotMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    eli_common_interface__srv__GetRobotMode_Response__fini(msg);
    return false;
  }
  // mode
  if (!eli_common_interface__msg__RobotMode__init(&msg->mode)) {
    eli_common_interface__srv__GetRobotMode_Response__fini(msg);
    return false;
  }
  return true;
}

void
eli_common_interface__srv__GetRobotMode_Response__fini(eli_common_interface__srv__GetRobotMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // mode
  eli_common_interface__msg__RobotMode__fini(&msg->mode);
}

bool
eli_common_interface__srv__GetRobotMode_Response__are_equal(const eli_common_interface__srv__GetRobotMode_Response * lhs, const eli_common_interface__srv__GetRobotMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // mode
  if (!eli_common_interface__msg__RobotMode__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
eli_common_interface__srv__GetRobotMode_Response__copy(
  const eli_common_interface__srv__GetRobotMode_Response * input,
  eli_common_interface__srv__GetRobotMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // mode
  if (!eli_common_interface__msg__RobotMode__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

eli_common_interface__srv__GetRobotMode_Response *
eli_common_interface__srv__GetRobotMode_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__GetRobotMode_Response * msg = (eli_common_interface__srv__GetRobotMode_Response *)allocator.allocate(sizeof(eli_common_interface__srv__GetRobotMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_common_interface__srv__GetRobotMode_Response));
  bool success = eli_common_interface__srv__GetRobotMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_common_interface__srv__GetRobotMode_Response__destroy(eli_common_interface__srv__GetRobotMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_common_interface__srv__GetRobotMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_common_interface__srv__GetRobotMode_Response__Sequence__init(eli_common_interface__srv__GetRobotMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__GetRobotMode_Response * data = NULL;

  if (size) {
    data = (eli_common_interface__srv__GetRobotMode_Response *)allocator.zero_allocate(size, sizeof(eli_common_interface__srv__GetRobotMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_common_interface__srv__GetRobotMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_common_interface__srv__GetRobotMode_Response__fini(&data[i - 1]);
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
eli_common_interface__srv__GetRobotMode_Response__Sequence__fini(eli_common_interface__srv__GetRobotMode_Response__Sequence * array)
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
      eli_common_interface__srv__GetRobotMode_Response__fini(&array->data[i]);
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

eli_common_interface__srv__GetRobotMode_Response__Sequence *
eli_common_interface__srv__GetRobotMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__srv__GetRobotMode_Response__Sequence * array = (eli_common_interface__srv__GetRobotMode_Response__Sequence *)allocator.allocate(sizeof(eli_common_interface__srv__GetRobotMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_common_interface__srv__GetRobotMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_common_interface__srv__GetRobotMode_Response__Sequence__destroy(eli_common_interface__srv__GetRobotMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_common_interface__srv__GetRobotMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_common_interface__srv__GetRobotMode_Response__Sequence__are_equal(const eli_common_interface__srv__GetRobotMode_Response__Sequence * lhs, const eli_common_interface__srv__GetRobotMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_common_interface__srv__GetRobotMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_common_interface__srv__GetRobotMode_Response__Sequence__copy(
  const eli_common_interface__srv__GetRobotMode_Response__Sequence * input,
  eli_common_interface__srv__GetRobotMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_common_interface__srv__GetRobotMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_common_interface__srv__GetRobotMode_Response * data =
      (eli_common_interface__srv__GetRobotMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_common_interface__srv__GetRobotMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_common_interface__srv__GetRobotMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_common_interface__srv__GetRobotMode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
