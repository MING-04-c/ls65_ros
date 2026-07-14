// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eli_dashboard_interface:srv/CustomRequest.idl
// generated code does not contain a copyright notice
#include "eli_dashboard_interface/srv/detail/custom_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `request`
#include "rosidl_runtime_c/string_functions.h"

bool
eli_dashboard_interface__srv__CustomRequest_Request__init(eli_dashboard_interface__srv__CustomRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__init(&msg->request)) {
    eli_dashboard_interface__srv__CustomRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
eli_dashboard_interface__srv__CustomRequest_Request__fini(eli_dashboard_interface__srv__CustomRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
  rosidl_runtime_c__String__fini(&msg->request);
}

bool
eli_dashboard_interface__srv__CustomRequest_Request__are_equal(const eli_dashboard_interface__srv__CustomRequest_Request * lhs, const eli_dashboard_interface__srv__CustomRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  return true;
}

bool
eli_dashboard_interface__srv__CustomRequest_Request__copy(
  const eli_dashboard_interface__srv__CustomRequest_Request * input,
  eli_dashboard_interface__srv__CustomRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  return true;
}

eli_dashboard_interface__srv__CustomRequest_Request *
eli_dashboard_interface__srv__CustomRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_dashboard_interface__srv__CustomRequest_Request * msg = (eli_dashboard_interface__srv__CustomRequest_Request *)allocator.allocate(sizeof(eli_dashboard_interface__srv__CustomRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_dashboard_interface__srv__CustomRequest_Request));
  bool success = eli_dashboard_interface__srv__CustomRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_dashboard_interface__srv__CustomRequest_Request__destroy(eli_dashboard_interface__srv__CustomRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_dashboard_interface__srv__CustomRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_dashboard_interface__srv__CustomRequest_Request__Sequence__init(eli_dashboard_interface__srv__CustomRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_dashboard_interface__srv__CustomRequest_Request * data = NULL;

  if (size) {
    data = (eli_dashboard_interface__srv__CustomRequest_Request *)allocator.zero_allocate(size, sizeof(eli_dashboard_interface__srv__CustomRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_dashboard_interface__srv__CustomRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_dashboard_interface__srv__CustomRequest_Request__fini(&data[i - 1]);
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
eli_dashboard_interface__srv__CustomRequest_Request__Sequence__fini(eli_dashboard_interface__srv__CustomRequest_Request__Sequence * array)
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
      eli_dashboard_interface__srv__CustomRequest_Request__fini(&array->data[i]);
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

eli_dashboard_interface__srv__CustomRequest_Request__Sequence *
eli_dashboard_interface__srv__CustomRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_dashboard_interface__srv__CustomRequest_Request__Sequence * array = (eli_dashboard_interface__srv__CustomRequest_Request__Sequence *)allocator.allocate(sizeof(eli_dashboard_interface__srv__CustomRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_dashboard_interface__srv__CustomRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_dashboard_interface__srv__CustomRequest_Request__Sequence__destroy(eli_dashboard_interface__srv__CustomRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_dashboard_interface__srv__CustomRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_dashboard_interface__srv__CustomRequest_Request__Sequence__are_equal(const eli_dashboard_interface__srv__CustomRequest_Request__Sequence * lhs, const eli_dashboard_interface__srv__CustomRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_dashboard_interface__srv__CustomRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_dashboard_interface__srv__CustomRequest_Request__Sequence__copy(
  const eli_dashboard_interface__srv__CustomRequest_Request__Sequence * input,
  eli_dashboard_interface__srv__CustomRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_dashboard_interface__srv__CustomRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_dashboard_interface__srv__CustomRequest_Request * data =
      (eli_dashboard_interface__srv__CustomRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_dashboard_interface__srv__CustomRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_dashboard_interface__srv__CustomRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_dashboard_interface__srv__CustomRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
eli_dashboard_interface__srv__CustomRequest_Response__init(eli_dashboard_interface__srv__CustomRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    eli_dashboard_interface__srv__CustomRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
eli_dashboard_interface__srv__CustomRequest_Response__fini(eli_dashboard_interface__srv__CustomRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
eli_dashboard_interface__srv__CustomRequest_Response__are_equal(const eli_dashboard_interface__srv__CustomRequest_Response * lhs, const eli_dashboard_interface__srv__CustomRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
eli_dashboard_interface__srv__CustomRequest_Response__copy(
  const eli_dashboard_interface__srv__CustomRequest_Response * input,
  eli_dashboard_interface__srv__CustomRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

eli_dashboard_interface__srv__CustomRequest_Response *
eli_dashboard_interface__srv__CustomRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_dashboard_interface__srv__CustomRequest_Response * msg = (eli_dashboard_interface__srv__CustomRequest_Response *)allocator.allocate(sizeof(eli_dashboard_interface__srv__CustomRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_dashboard_interface__srv__CustomRequest_Response));
  bool success = eli_dashboard_interface__srv__CustomRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_dashboard_interface__srv__CustomRequest_Response__destroy(eli_dashboard_interface__srv__CustomRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_dashboard_interface__srv__CustomRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_dashboard_interface__srv__CustomRequest_Response__Sequence__init(eli_dashboard_interface__srv__CustomRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_dashboard_interface__srv__CustomRequest_Response * data = NULL;

  if (size) {
    data = (eli_dashboard_interface__srv__CustomRequest_Response *)allocator.zero_allocate(size, sizeof(eli_dashboard_interface__srv__CustomRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_dashboard_interface__srv__CustomRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_dashboard_interface__srv__CustomRequest_Response__fini(&data[i - 1]);
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
eli_dashboard_interface__srv__CustomRequest_Response__Sequence__fini(eli_dashboard_interface__srv__CustomRequest_Response__Sequence * array)
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
      eli_dashboard_interface__srv__CustomRequest_Response__fini(&array->data[i]);
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

eli_dashboard_interface__srv__CustomRequest_Response__Sequence *
eli_dashboard_interface__srv__CustomRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_dashboard_interface__srv__CustomRequest_Response__Sequence * array = (eli_dashboard_interface__srv__CustomRequest_Response__Sequence *)allocator.allocate(sizeof(eli_dashboard_interface__srv__CustomRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_dashboard_interface__srv__CustomRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_dashboard_interface__srv__CustomRequest_Response__Sequence__destroy(eli_dashboard_interface__srv__CustomRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_dashboard_interface__srv__CustomRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_dashboard_interface__srv__CustomRequest_Response__Sequence__are_equal(const eli_dashboard_interface__srv__CustomRequest_Response__Sequence * lhs, const eli_dashboard_interface__srv__CustomRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_dashboard_interface__srv__CustomRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_dashboard_interface__srv__CustomRequest_Response__Sequence__copy(
  const eli_dashboard_interface__srv__CustomRequest_Response__Sequence * input,
  eli_dashboard_interface__srv__CustomRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_dashboard_interface__srv__CustomRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_dashboard_interface__srv__CustomRequest_Response * data =
      (eli_dashboard_interface__srv__CustomRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_dashboard_interface__srv__CustomRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_dashboard_interface__srv__CustomRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_dashboard_interface__srv__CustomRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
