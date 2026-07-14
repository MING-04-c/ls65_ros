// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice
#include "eli_common_interface/msg/detail/io_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `standard_out`
// Member `config_out`
// Member `tool_out`
// Member `standard_in`
// Member `config_in`
// Member `tool_in`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `standard_analog_out`
// Member `standard_analog_in`
#include "eli_common_interface/msg/detail/analog__functions.h"

bool
eli_common_interface__msg__IOState__init(eli_common_interface__msg__IOState * msg)
{
  if (!msg) {
    return false;
  }
  // standard_out
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->standard_out, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // config_out
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->config_out, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // tool_out
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->tool_out, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // standard_in
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->standard_in, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // config_in
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->config_in, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // tool_in
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->tool_in, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // standard_analog_out
  if (!eli_common_interface__msg__Analog__Sequence__init(&msg->standard_analog_out, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  // standard_analog_in
  if (!eli_common_interface__msg__Analog__Sequence__init(&msg->standard_analog_in, 0)) {
    eli_common_interface__msg__IOState__fini(msg);
    return false;
  }
  return true;
}

void
eli_common_interface__msg__IOState__fini(eli_common_interface__msg__IOState * msg)
{
  if (!msg) {
    return;
  }
  // standard_out
  rosidl_runtime_c__boolean__Sequence__fini(&msg->standard_out);
  // config_out
  rosidl_runtime_c__boolean__Sequence__fini(&msg->config_out);
  // tool_out
  rosidl_runtime_c__boolean__Sequence__fini(&msg->tool_out);
  // standard_in
  rosidl_runtime_c__boolean__Sequence__fini(&msg->standard_in);
  // config_in
  rosidl_runtime_c__boolean__Sequence__fini(&msg->config_in);
  // tool_in
  rosidl_runtime_c__boolean__Sequence__fini(&msg->tool_in);
  // standard_analog_out
  eli_common_interface__msg__Analog__Sequence__fini(&msg->standard_analog_out);
  // standard_analog_in
  eli_common_interface__msg__Analog__Sequence__fini(&msg->standard_analog_in);
}

bool
eli_common_interface__msg__IOState__are_equal(const eli_common_interface__msg__IOState * lhs, const eli_common_interface__msg__IOState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // standard_out
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->standard_out), &(rhs->standard_out)))
  {
    return false;
  }
  // config_out
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->config_out), &(rhs->config_out)))
  {
    return false;
  }
  // tool_out
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->tool_out), &(rhs->tool_out)))
  {
    return false;
  }
  // standard_in
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->standard_in), &(rhs->standard_in)))
  {
    return false;
  }
  // config_in
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->config_in), &(rhs->config_in)))
  {
    return false;
  }
  // tool_in
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->tool_in), &(rhs->tool_in)))
  {
    return false;
  }
  // standard_analog_out
  if (!eli_common_interface__msg__Analog__Sequence__are_equal(
      &(lhs->standard_analog_out), &(rhs->standard_analog_out)))
  {
    return false;
  }
  // standard_analog_in
  if (!eli_common_interface__msg__Analog__Sequence__are_equal(
      &(lhs->standard_analog_in), &(rhs->standard_analog_in)))
  {
    return false;
  }
  return true;
}

bool
eli_common_interface__msg__IOState__copy(
  const eli_common_interface__msg__IOState * input,
  eli_common_interface__msg__IOState * output)
{
  if (!input || !output) {
    return false;
  }
  // standard_out
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->standard_out), &(output->standard_out)))
  {
    return false;
  }
  // config_out
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->config_out), &(output->config_out)))
  {
    return false;
  }
  // tool_out
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->tool_out), &(output->tool_out)))
  {
    return false;
  }
  // standard_in
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->standard_in), &(output->standard_in)))
  {
    return false;
  }
  // config_in
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->config_in), &(output->config_in)))
  {
    return false;
  }
  // tool_in
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->tool_in), &(output->tool_in)))
  {
    return false;
  }
  // standard_analog_out
  if (!eli_common_interface__msg__Analog__Sequence__copy(
      &(input->standard_analog_out), &(output->standard_analog_out)))
  {
    return false;
  }
  // standard_analog_in
  if (!eli_common_interface__msg__Analog__Sequence__copy(
      &(input->standard_analog_in), &(output->standard_analog_in)))
  {
    return false;
  }
  return true;
}

eli_common_interface__msg__IOState *
eli_common_interface__msg__IOState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__msg__IOState * msg = (eli_common_interface__msg__IOState *)allocator.allocate(sizeof(eli_common_interface__msg__IOState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eli_common_interface__msg__IOState));
  bool success = eli_common_interface__msg__IOState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eli_common_interface__msg__IOState__destroy(eli_common_interface__msg__IOState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eli_common_interface__msg__IOState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eli_common_interface__msg__IOState__Sequence__init(eli_common_interface__msg__IOState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__msg__IOState * data = NULL;

  if (size) {
    data = (eli_common_interface__msg__IOState *)allocator.zero_allocate(size, sizeof(eli_common_interface__msg__IOState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eli_common_interface__msg__IOState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eli_common_interface__msg__IOState__fini(&data[i - 1]);
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
eli_common_interface__msg__IOState__Sequence__fini(eli_common_interface__msg__IOState__Sequence * array)
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
      eli_common_interface__msg__IOState__fini(&array->data[i]);
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

eli_common_interface__msg__IOState__Sequence *
eli_common_interface__msg__IOState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eli_common_interface__msg__IOState__Sequence * array = (eli_common_interface__msg__IOState__Sequence *)allocator.allocate(sizeof(eli_common_interface__msg__IOState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eli_common_interface__msg__IOState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eli_common_interface__msg__IOState__Sequence__destroy(eli_common_interface__msg__IOState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eli_common_interface__msg__IOState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eli_common_interface__msg__IOState__Sequence__are_equal(const eli_common_interface__msg__IOState__Sequence * lhs, const eli_common_interface__msg__IOState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eli_common_interface__msg__IOState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eli_common_interface__msg__IOState__Sequence__copy(
  const eli_common_interface__msg__IOState__Sequence * input,
  eli_common_interface__msg__IOState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eli_common_interface__msg__IOState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eli_common_interface__msg__IOState * data =
      (eli_common_interface__msg__IOState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eli_common_interface__msg__IOState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eli_common_interface__msg__IOState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eli_common_interface__msg__IOState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
