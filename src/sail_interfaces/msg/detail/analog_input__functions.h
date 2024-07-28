// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sail_interfaces:msg/AnalogInput.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__ANALOG_INPUT__FUNCTIONS_H_
#define SAIL_INTERFACES__MSG__DETAIL__ANALOG_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sail_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sail_interfaces/msg/detail/analog_input__struct.h"

/// Initialize msg/AnalogInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__msg__AnalogInput
 * )) before or use
 * sail_interfaces__msg__AnalogInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__msg__AnalogInput__init(sail_interfaces__msg__AnalogInput * msg);

/// Finalize msg/AnalogInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__msg__AnalogInput__fini(sail_interfaces__msg__AnalogInput * msg);

/// Create msg/AnalogInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__msg__AnalogInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__msg__AnalogInput *
sail_interfaces__msg__AnalogInput__create();

/// Destroy msg/AnalogInput message.
/**
 * It calls
 * sail_interfaces__msg__AnalogInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__msg__AnalogInput__destroy(sail_interfaces__msg__AnalogInput * msg);

/// Check for msg/AnalogInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__msg__AnalogInput__are_equal(const sail_interfaces__msg__AnalogInput * lhs, const sail_interfaces__msg__AnalogInput * rhs);

/// Copy a msg/AnalogInput message.
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
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__msg__AnalogInput__copy(
  const sail_interfaces__msg__AnalogInput * input,
  sail_interfaces__msg__AnalogInput * output);

/// Initialize array of msg/AnalogInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__msg__AnalogInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__msg__AnalogInput__Sequence__init(sail_interfaces__msg__AnalogInput__Sequence * array, size_t size);

/// Finalize array of msg/AnalogInput messages.
/**
 * It calls
 * sail_interfaces__msg__AnalogInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__msg__AnalogInput__Sequence__fini(sail_interfaces__msg__AnalogInput__Sequence * array);

/// Create array of msg/AnalogInput messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__msg__AnalogInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__msg__AnalogInput__Sequence *
sail_interfaces__msg__AnalogInput__Sequence__create(size_t size);

/// Destroy array of msg/AnalogInput messages.
/**
 * It calls
 * sail_interfaces__msg__AnalogInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__msg__AnalogInput__Sequence__destroy(sail_interfaces__msg__AnalogInput__Sequence * array);

/// Check for msg/AnalogInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__msg__AnalogInput__Sequence__are_equal(const sail_interfaces__msg__AnalogInput__Sequence * lhs, const sail_interfaces__msg__AnalogInput__Sequence * rhs);

/// Copy an array of msg/AnalogInput messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__msg__AnalogInput__Sequence__copy(
  const sail_interfaces__msg__AnalogInput__Sequence * input,
  sail_interfaces__msg__AnalogInput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__ANALOG_INPUT__FUNCTIONS_H_
