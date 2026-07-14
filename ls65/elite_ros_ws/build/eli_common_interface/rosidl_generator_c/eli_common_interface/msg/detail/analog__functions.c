// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eli_common_interface:msg/Analog.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/msg/detail/analog__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
eli_common_interface__msg__Analog__init(eli_common_interface__msg__Analog * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // value
  return true;
}

void
eli_common_interface__msg__Analog__fini(eli_common_interface__msg__Analog * msg)
{
  if (!msg) {
    return;
  }
  // type
  // value
}

bool
eli_common_interface__msg__Analog__are_equal(const eli_common_interface__msg__Analog * lhs, const eli_common_interface__msg__Analog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
eli_common_interface__msg__Analog__copy(
  const eli_common_interface__msg__Analog * input,
  eli_common_interface__msg__Analog * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // value
  output->value = input->value;
  return true;
}

eli_common_interface__msg__Analog *
eli_common_interface__msg__Analog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__msg__Analog * msg = (eli_common_interface__msg__Analog *)allocator.allocate(sizeof(eli_common_interface__msg__Analog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_common_interface__msg__Analog));
  bool success = eli_common_interface__msg__Analog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_common_interface__msg__Analog__destroy(eli_common_interface__msg__Analog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_common_interface__msg__Analog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_common_interface__msg__Analog__Sequence__init(eli_common_interface__msg__Analog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__msg__Analog * data = NULL;

  if (size) {
    data = (eli_common_interface__msg__Analog *)allocator.zero_allocate(size, sizeof(eli_common_interface__msg__Analog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_common_interface__msg__Analog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_common_interface__msg__Analog__fini(&data[i - 1]);
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
eli_common_interface__msg__Analog__Sequence__fini(eli_common_interface__msg__Analog__Sequence * array)
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
      eli_common_interface__msg__Analog__fini(&array->data[i]);
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

eli_common_interface__msg__Analog__Sequence *
eli_common_interface__msg__Analog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__msg__Analog__Sequence * array = (eli_common_interface__msg__Analog__Sequence *)allocator.allocate(sizeof(eli_common_interface__msg__Analog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_common_interface__msg__Analog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_common_interface__msg__Analog__Sequence__destroy(eli_common_interface__msg__Analog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_common_interface__msg__Analog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_common_interface__msg__Analog__Sequence__are_equal(const eli_common_interface__msg__Analog__Sequence * lhs, const eli_common_interface__msg__Analog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_common_interface__msg__Analog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_common_interface__msg__Analog__Sequence__copy(
  const eli_common_interface__msg__Analog__Sequence * input,
  eli_common_interface__msg__Analog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_common_interface__msg__Analog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_common_interface__msg__Analog * data =
      (eli_common_interface__msg__Analog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_common_interface__msg__Analog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_common_interface__msg__Analog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_common_interface__msg__Analog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
