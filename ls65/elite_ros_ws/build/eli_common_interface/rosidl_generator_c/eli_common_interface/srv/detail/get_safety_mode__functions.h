// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from eli_common_interface:srv/GetSafetyMode.idl
// generated code does not contain a copyright notice

#ifndef ELI_COMMON_INTERFACE__SRV__DETAIL__GET_SAFETY_MODE__FUNCTIONS_H_
#define ELI_COMMON_INTERFACE__SRV__DETAIL__GET_SAFETY_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "eli_common_interface/msg/rosidl_generator_c__visibility_control.h"

#include "eli_common_interface/srv/detail/get_safety_mode__struct.h"

/// Initialize srv/GetSafetyMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eli_common_interface__srv__GetSafetyMode_Request
 * )) before or use
 * eli_common_interface__srv__GetSafetyMode_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Request__init(eli_common_interface__srv__GetSafetyMode_Request * msg);

/// Finalize srv/GetSafetyMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Request__fini(eli_common_interface__srv__GetSafetyMode_Request * msg);

/// Create srv/GetSafetyMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eli_common_interface__srv__GetSafetyMode_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__srv__GetSafetyMode_Request *
eli_common_interface__srv__GetSafetyMode_Request__create();

/// Destroy srv/GetSafetyMode message.
/**
 * It calls
 * eli_common_interface__srv__GetSafetyMode_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Request__destroy(eli_common_interface__srv__GetSafetyMode_Request * msg);

/// Check for srv/GetSafetyMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Request__are_equal(const eli_common_interface__srv__GetSafetyMode_Request * lhs, const eli_common_interface__srv__GetSafetyMode_Request * rhs);

/// Copy a srv/GetSafetyMode message.
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
eli_common_interface__srv__GetSafetyMode_Request__copy(
  const eli_common_interface__srv__GetSafetyMode_Request * input,
  eli_common_interface__srv__GetSafetyMode_Request * output);

/// Initialize array of srv/GetSafetyMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * eli_common_interface__srv__GetSafetyMode_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Request__Sequence__init(eli_common_interface__srv__GetSafetyMode_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSafetyMode messages.
/**
 * It calls
 * eli_common_interface__srv__GetSafetyMode_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Request__Sequence__fini(eli_common_interface__srv__GetSafetyMode_Request__Sequence * array);

/// Create array of srv/GetSafetyMode messages.
/**
 * It allocates the memory for the array and calls
 * eli_common_interface__srv__GetSafetyMode_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__srv__GetSafetyMode_Request__Sequence *
eli_common_interface__srv__GetSafetyMode_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSafetyMode messages.
/**
 * It calls
 * eli_common_interface__srv__GetSafetyMode_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Request__Sequence__destroy(eli_common_interface__srv__GetSafetyMode_Request__Sequence * array);

/// Check for srv/GetSafetyMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Request__Sequence__are_equal(const eli_common_interface__srv__GetSafetyMode_Request__Sequence * lhs, const eli_common_interface__srv__GetSafetyMode_Request__Sequence * rhs);

/// Copy an array of srv/GetSafetyMode messages.
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
eli_common_interface__srv__GetSafetyMode_Request__Sequence__copy(
  const eli_common_interface__srv__GetSafetyMode_Request__Sequence * input,
  eli_common_interface__srv__GetSafetyMode_Request__Sequence * output);

/// Initialize srv/GetSafetyMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * eli_common_interface__srv__GetSafetyMode_Response
 * )) before or use
 * eli_common_interface__srv__GetSafetyMode_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Response__init(eli_common_interface__srv__GetSafetyMode_Response * msg);

/// Finalize srv/GetSafetyMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Response__fini(eli_common_interface__srv__GetSafetyMode_Response * msg);

/// Create srv/GetSafetyMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * eli_common_interface__srv__GetSafetyMode_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__srv__GetSafetyMode_Response *
eli_common_interface__srv__GetSafetyMode_Response__create();

/// Destroy srv/GetSafetyMode message.
/**
 * It calls
 * eli_common_interface__srv__GetSafetyMode_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Response__destroy(eli_common_interface__srv__GetSafetyMode_Response * msg);

/// Check for srv/GetSafetyMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Response__are_equal(const eli_common_interface__srv__GetSafetyMode_Response * lhs, const eli_common_interface__srv__GetSafetyMode_Response * rhs);

/// Copy a srv/GetSafetyMode message.
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
eli_common_interface__srv__GetSafetyMode_Response__copy(
  const eli_common_interface__srv__GetSafetyMode_Response * input,
  eli_common_interface__srv__GetSafetyMode_Response * output);

/// Initialize array of srv/GetSafetyMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * eli_common_interface__srv__GetSafetyMode_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Response__Sequence__init(eli_common_interface__srv__GetSafetyMode_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSafetyMode messages.
/**
 * It calls
 * eli_common_interface__srv__GetSafetyMode_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Response__Sequence__fini(eli_common_interface__srv__GetSafetyMode_Response__Sequence * array);

/// Create array of srv/GetSafetyMode messages.
/**
 * It allocates the memory for the array and calls
 * eli_common_interface__srv__GetSafetyMode_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
eli_common_interface__srv__GetSafetyMode_Response__Sequence *
eli_common_interface__srv__GetSafetyMode_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSafetyMode messages.
/**
 * It calls
 * eli_common_interface__srv__GetSafetyMode_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
void
eli_common_interface__srv__GetSafetyMode_Response__Sequence__destroy(eli_common_interface__srv__GetSafetyMode_Response__Sequence * array);

/// Check for srv/GetSafetyMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_eli_common_interface
bool
eli_common_interface__srv__GetSafetyMode_Response__Sequence__are_equal(const eli_common_interface__srv__GetSafetyMode_Response__Sequence * lhs, const eli_common_interface__srv__GetSafetyMode_Response__Sequence * rhs);

/// Copy an array of srv/GetSafetyMode messages.
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
eli_common_interface__srv__GetSafetyMode_Response__Sequence__copy(
  const eli_common_interface__srv__GetSafetyMode_Response__Sequence * input,
  eli_common_interface__srv__GetSafetyMode_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ELI_COMMON_INTERFACE__SRV__DETAIL__GET_SAFETY_MODE__FUNCTIONS_H_
