// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sail_interfaces:srv/SetPidTuning.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__SRV__DETAIL__SET_PID_TUNING__FUNCTIONS_H_
#define SAIL_INTERFACES__SRV__DETAIL__SET_PID_TUNING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sail_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sail_interfaces/srv/detail/set_pid_tuning__struct.h"

/// Initialize srv/SetPidTuning message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__srv__SetPidTuning_Request
 * )) before or use
 * sail_interfaces__srv__SetPidTuning_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Request__init(sail_interfaces__srv__SetPidTuning_Request * msg);

/// Finalize srv/SetPidTuning message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Request__fini(sail_interfaces__srv__SetPidTuning_Request * msg);

/// Create srv/SetPidTuning message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__srv__SetPidTuning_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__srv__SetPidTuning_Request *
sail_interfaces__srv__SetPidTuning_Request__create();

/// Destroy srv/SetPidTuning message.
/**
 * It calls
 * sail_interfaces__srv__SetPidTuning_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Request__destroy(sail_interfaces__srv__SetPidTuning_Request * msg);

/// Check for srv/SetPidTuning message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Request__are_equal(const sail_interfaces__srv__SetPidTuning_Request * lhs, const sail_interfaces__srv__SetPidTuning_Request * rhs);

/// Copy a srv/SetPidTuning message.
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
sail_interfaces__srv__SetPidTuning_Request__copy(
  const sail_interfaces__srv__SetPidTuning_Request * input,
  sail_interfaces__srv__SetPidTuning_Request * output);

/// Initialize array of srv/SetPidTuning messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__srv__SetPidTuning_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Request__Sequence__init(sail_interfaces__srv__SetPidTuning_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetPidTuning messages.
/**
 * It calls
 * sail_interfaces__srv__SetPidTuning_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Request__Sequence__fini(sail_interfaces__srv__SetPidTuning_Request__Sequence * array);

/// Create array of srv/SetPidTuning messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__srv__SetPidTuning_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__srv__SetPidTuning_Request__Sequence *
sail_interfaces__srv__SetPidTuning_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetPidTuning messages.
/**
 * It calls
 * sail_interfaces__srv__SetPidTuning_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Request__Sequence__destroy(sail_interfaces__srv__SetPidTuning_Request__Sequence * array);

/// Check for srv/SetPidTuning message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Request__Sequence__are_equal(const sail_interfaces__srv__SetPidTuning_Request__Sequence * lhs, const sail_interfaces__srv__SetPidTuning_Request__Sequence * rhs);

/// Copy an array of srv/SetPidTuning messages.
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
sail_interfaces__srv__SetPidTuning_Request__Sequence__copy(
  const sail_interfaces__srv__SetPidTuning_Request__Sequence * input,
  sail_interfaces__srv__SetPidTuning_Request__Sequence * output);

/// Initialize srv/SetPidTuning message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__srv__SetPidTuning_Response
 * )) before or use
 * sail_interfaces__srv__SetPidTuning_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Response__init(sail_interfaces__srv__SetPidTuning_Response * msg);

/// Finalize srv/SetPidTuning message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Response__fini(sail_interfaces__srv__SetPidTuning_Response * msg);

/// Create srv/SetPidTuning message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__srv__SetPidTuning_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__srv__SetPidTuning_Response *
sail_interfaces__srv__SetPidTuning_Response__create();

/// Destroy srv/SetPidTuning message.
/**
 * It calls
 * sail_interfaces__srv__SetPidTuning_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Response__destroy(sail_interfaces__srv__SetPidTuning_Response * msg);

/// Check for srv/SetPidTuning message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Response__are_equal(const sail_interfaces__srv__SetPidTuning_Response * lhs, const sail_interfaces__srv__SetPidTuning_Response * rhs);

/// Copy a srv/SetPidTuning message.
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
sail_interfaces__srv__SetPidTuning_Response__copy(
  const sail_interfaces__srv__SetPidTuning_Response * input,
  sail_interfaces__srv__SetPidTuning_Response * output);

/// Initialize array of srv/SetPidTuning messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__srv__SetPidTuning_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Response__Sequence__init(sail_interfaces__srv__SetPidTuning_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetPidTuning messages.
/**
 * It calls
 * sail_interfaces__srv__SetPidTuning_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Response__Sequence__fini(sail_interfaces__srv__SetPidTuning_Response__Sequence * array);

/// Create array of srv/SetPidTuning messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__srv__SetPidTuning_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__srv__SetPidTuning_Response__Sequence *
sail_interfaces__srv__SetPidTuning_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetPidTuning messages.
/**
 * It calls
 * sail_interfaces__srv__SetPidTuning_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__srv__SetPidTuning_Response__Sequence__destroy(sail_interfaces__srv__SetPidTuning_Response__Sequence * array);

/// Check for srv/SetPidTuning message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__srv__SetPidTuning_Response__Sequence__are_equal(const sail_interfaces__srv__SetPidTuning_Response__Sequence * lhs, const sail_interfaces__srv__SetPidTuning_Response__Sequence * rhs);

/// Copy an array of srv/SetPidTuning messages.
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
sail_interfaces__srv__SetPidTuning_Response__Sequence__copy(
  const sail_interfaces__srv__SetPidTuning_Response__Sequence * input,
  sail_interfaces__srv__SetPidTuning_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__SRV__DETAIL__SET_PID_TUNING__FUNCTIONS_H_
