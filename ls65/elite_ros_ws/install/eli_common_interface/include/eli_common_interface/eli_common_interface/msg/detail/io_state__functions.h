// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from eli_common_interface:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__FUNCTIONS_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "eli_common_interface/msg/rosidl_generator_c__visibility_control.h"

#include "eli_common_interface/msg/detail/io_state__struct.h"

/// Initialize msg/IOState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eli_common_interface__msg__IOState
 * )) before or use
 * eli_common_interface__msg__IOState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__IOState__init(eli_common_interface__msg__IOState * msg);

/// Finalize msg/IOState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__IOState__fini(eli_common_interface__msg__IOState * msg);

/// Create msg/IOState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eli_common_interface__msg__IOState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__msg__IOState *
eli_common_interface__msg__IOState__create();

/// Destroy msg/IOState message.
/**
 * It calls
 * eli_common_interface__msg__IOState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__IOState__destroy(eli_common_interface__msg__IOState * msg);

/// Check for msg/IOState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__IOState__are_equal(const eli_common_interface__msg__IOState * lhs, const eli_common_interface__msg__IOState * rhs);

/// Copy a msg/IOState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__IOState__copy(
  const eli_common_interface__msg__IOState * input,
  eli_common_interface__msg__IOState * output);

/// Initialize array of msg/IOState messages.
/**
 * It allocates the memory for the number of elements and calls
 * eli_common_interface__msg__IOState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__IOState__Sequence__init(eli_common_interface__msg__IOState__Sequence * array, size_t size);

/// Finalize array of msg/IOState messages.
/**
 * It calls
 * eli_common_interface__msg__IOState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__IOState__Sequence__fini(eli_common_interface__msg__IOState__Sequence * array);

/// Create array of msg/IOState messages.
/**
 * It allocates the memory for the array and calls
 * eli_common_interface__msg__IOState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__msg__IOState__Sequence *
eli_common_interface__msg__IOState__Sequence__create(size_t size);

/// Destroy array of msg/IOState messages.
/**
 * It calls
 * eli_common_interface__msg__IOState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__IOState__Sequence__destroy(eli_common_interface__msg__IOState__Sequence * array);

/// Check for msg/IOState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__IOState__Sequence__are_equal(const eli_common_interface__msg__IOState__Sequence * lhs, const eli_common_interface__msg__IOState__Sequence * rhs);

/// Copy an array of msg/IOState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__IOState__Sequence__copy(
  const eli_common_interface__msg__IOState__Sequence * input,
  eli_common_interface__msg__IOState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__IO_STATE__FUNCTIONS_H_
