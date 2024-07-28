// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sail_interfaces:action/DeployAuxPropulsion.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__ACTION__DETAIL__DEPLOY_AUX_PROPULSION__FUNCTIONS_H_
#define SAIL_INTERFACES__ACTION__DETAIL__DEPLOY_AUX_PROPULSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sail_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sail_interfaces/action/detail/deploy_aux_propulsion__struct.h"

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_Goal
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Goal__init(sail_interfaces__action__DeployAuxPropulsion_Goal * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Goal__fini(sail_interfaces__action__DeployAuxPropulsion_Goal * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_Goal *
sail_interfaces__action__DeployAuxPropulsion_Goal__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Goal__destroy(sail_interfaces__action__DeployAuxPropulsion_Goal * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Goal__are_equal(const sail_interfaces__action__DeployAuxPropulsion_Goal * lhs, const sail_interfaces__action__DeployAuxPropulsion_Goal * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_Goal__copy(
  const sail_interfaces__action__DeployAuxPropulsion_Goal * input,
  sail_interfaces__action__DeployAuxPropulsion_Goal * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence *
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_Result
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Result__init(sail_interfaces__action__DeployAuxPropulsion_Result * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Result__fini(sail_interfaces__action__DeployAuxPropulsion_Result * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_Result *
sail_interfaces__action__DeployAuxPropulsion_Result__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Result__destroy(sail_interfaces__action__DeployAuxPropulsion_Result * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Result__are_equal(const sail_interfaces__action__DeployAuxPropulsion_Result * lhs, const sail_interfaces__action__DeployAuxPropulsion_Result * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_Result__copy(
  const sail_interfaces__action__DeployAuxPropulsion_Result * input,
  sail_interfaces__action__DeployAuxPropulsion_Result * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence *
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_Result__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_Result__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_Feedback
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Feedback__init(sail_interfaces__action__DeployAuxPropulsion_Feedback * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Feedback__fini(sail_interfaces__action__DeployAuxPropulsion_Feedback * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_Feedback *
sail_interfaces__action__DeployAuxPropulsion_Feedback__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Feedback__destroy(sail_interfaces__action__DeployAuxPropulsion_Feedback * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Feedback__are_equal(const sail_interfaces__action__DeployAuxPropulsion_Feedback * lhs, const sail_interfaces__action__DeployAuxPropulsion_Feedback * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_Feedback__copy(
  const sail_interfaces__action__DeployAuxPropulsion_Feedback * input,
  sail_interfaces__action__DeployAuxPropulsion_Feedback * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence *
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__init(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__fini(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request *
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__destroy(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__are_equal(const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * lhs, const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__copy(
  const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * input,
  sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence *
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__init(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__fini(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response *
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__destroy(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__are_equal(const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * lhs, const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__copy(
  const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * input,
  sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence *
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__init(sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__fini(sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request *
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__destroy(sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__are_equal(const sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * lhs, const sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__copy(
  const sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * input,
  sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence *
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__init(sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__fini(sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response *
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__destroy(sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__are_equal(const sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * lhs, const sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__copy(
  const sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * input,
  sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence *
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence * output);

/// Initialize action/DeployAuxPropulsion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage
 * )) before or use
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__init(sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * msg);

/// Finalize action/DeployAuxPropulsion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__fini(sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * msg);

/// Create action/DeployAuxPropulsion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage *
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__create();

/// Destroy action/DeployAuxPropulsion message.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__destroy(sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * msg);

/// Check for action/DeployAuxPropulsion message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__are_equal(const sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * lhs, const sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * rhs);

/// Copy a action/DeployAuxPropulsion message.
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
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__copy(
  const sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * input,
  sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * output);

/// Initialize array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the number of elements and calls
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__init(sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__fini(sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * array);

/// Create array of action/DeployAuxPropulsion messages.
/**
 * It allocates the memory for the array and calls
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence *
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/DeployAuxPropulsion messages.
/**
 * It calls
 * sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
void
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__destroy(sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * array);

/// Check for action/DeployAuxPropulsion message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sail_interfaces
bool
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__are_equal(const sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * lhs, const sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/DeployAuxPropulsion messages.
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
sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence__copy(
  const sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * input,
  sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__ACTION__DETAIL__DEPLOY_AUX_PROPULSION__FUNCTIONS_H_
