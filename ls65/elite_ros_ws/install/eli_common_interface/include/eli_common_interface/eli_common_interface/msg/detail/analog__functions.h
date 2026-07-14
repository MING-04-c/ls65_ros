// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from eli_common_interface:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__FUNCTIONS_H_
#define ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "eli_common_interface/msg/rosidl_generator_c__visibility_control.h"

#include "eli_common_interface/msg/detail/analog__struct.h"

/// Initialize msg/Analog message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eli_common_interface__msg__Analog
 * )) before or use
 * eli_common_interface__msg__Analog__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__Analog__init(eli_common_interface__msg__Analog * msg);

/// Finalize msg/Analog message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__Analog__fini(eli_common_interface__msg__Analog * msg);

/// Create msg/Analog message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eli_common_interface__msg__Analog__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__msg__Analog *
eli_common_interface__msg__Analog__create();

/// Destroy msg/Analog message.
/**
 * It calls
 * eli_common_interface__msg__Analog__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__Analog__destroy(eli_common_interface__msg__Analog * msg);

/// Check for msg/Analog message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__Analog__are_equal(const eli_common_interface__msg__Analog * lhs, const eli_common_interface__msg__Analog * rhs);

/// Copy a msg/Analog message.
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
eli_common_interface__msg__Analog__copy(
  const eli_common_interface__msg__Analog * input,
  eli_common_interface__msg__Analog * output);

/// Initialize array of msg/Analog messages.
/**
 * It allocates the memory for the number of elements and calls
 * eli_common_interface__msg__Analog__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__Analog__Sequence__init(eli_common_interface__msg__Analog__Sequence * array, size_t size);

/// Finalize array of msg/Analog messages.
/**
 * It calls
 * eli_common_interface__msg__Analog__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__Analog__Sequence__fini(eli_common_interface__msg__Analog__Sequence * array);

/// Create array of msg/Analog messages.
/**
 * It allocates the memory for the array and calls
 * eli_common_interface__msg__Analog__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__msg__Analog__Sequence *
eli_common_interface__msg__Analog__Sequence__create(size_t size);

/// Destroy array of msg/Analog messages.
/**
 * It calls
 * eli_common_interface__msg__Analog__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__msg__Analog__Sequence__destroy(eli_common_interface__msg__Analog__Sequence * array);

/// Check for msg/Analog message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__msg__Analog__Sequence__are_equal(const eli_common_interface__msg__Analog__Sequence * lhs, const eli_common_interface__msg__Analog__Sequence * rhs);

/// Copy an array of msg/Analog messages.
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
eli_common_interface__msg__Analog__Sequence__copy(
  const eli_common_interface__msg__Analog__Sequence * input,
  eli_common_interface__msg__Analog__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__MSG__DETAIL__ANALOG__FUNCTIONS_H_
