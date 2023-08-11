// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#ifndef ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__FUNCTIONS_H_
#define ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roboteq_interface/msg/rosidl_generator_c__visibility_control.h"

#include "roboteq_interface/msg/detail/driver_list__struct.h"

/// Initialize msg/DriverList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roboteq_interface__msg__DriverList
 * )) before or use
 * roboteq_interface__msg__DriverList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
bool
roboteq_interface__msg__DriverList__init(roboteq_interface__msg__DriverList * msg);

/// Finalize msg/DriverList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
void
roboteq_interface__msg__DriverList__fini(roboteq_interface__msg__DriverList * msg);

/// Create msg/DriverList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roboteq_interface__msg__DriverList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
roboteq_interface__msg__DriverList *
roboteq_interface__msg__DriverList__create();

/// Destroy msg/DriverList message.
/**
 * It calls
 * roboteq_interface__msg__DriverList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
void
roboteq_interface__msg__DriverList__destroy(roboteq_interface__msg__DriverList * msg);

/// Check for msg/DriverList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
bool
roboteq_interface__msg__DriverList__are_equal(const roboteq_interface__msg__DriverList * lhs, const roboteq_interface__msg__DriverList * rhs);

/// Copy a msg/DriverList message.
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
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
bool
roboteq_interface__msg__DriverList__copy(
  const roboteq_interface__msg__DriverList * input,
  roboteq_interface__msg__DriverList * output);

/// Initialize array of msg/DriverList messages.
/**
 * It allocates the memory for the number of elements and calls
 * roboteq_interface__msg__DriverList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
bool
roboteq_interface__msg__DriverList__Sequence__init(roboteq_interface__msg__DriverList__Sequence * array, size_t size);

/// Finalize array of msg/DriverList messages.
/**
 * It calls
 * roboteq_interface__msg__DriverList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
void
roboteq_interface__msg__DriverList__Sequence__fini(roboteq_interface__msg__DriverList__Sequence * array);

/// Create array of msg/DriverList messages.
/**
 * It allocates the memory for the array and calls
 * roboteq_interface__msg__DriverList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
roboteq_interface__msg__DriverList__Sequence *
roboteq_interface__msg__DriverList__Sequence__create(size_t size);

/// Destroy array of msg/DriverList messages.
/**
 * It calls
 * roboteq_interface__msg__DriverList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
void
roboteq_interface__msg__DriverList__Sequence__destroy(roboteq_interface__msg__DriverList__Sequence * array);

/// Check for msg/DriverList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
bool
roboteq_interface__msg__DriverList__Sequence__are_equal(const roboteq_interface__msg__DriverList__Sequence * lhs, const roboteq_interface__msg__DriverList__Sequence * rhs);

/// Copy an array of msg/DriverList messages.
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
ROSIDL_GENERATOR_C_PUBLIC_roboteq_interface
bool
roboteq_interface__msg__DriverList__Sequence__copy(
  const roboteq_interface__msg__DriverList__Sequence * input,
  roboteq_interface__msg__DriverList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__FUNCTIONS_H_
