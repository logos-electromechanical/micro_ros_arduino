// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:srv/GetPidTuning.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__SRV__DETAIL__GET_PID_TUNING__STRUCT_H_
#define SAIL_INTERFACES__SRV__DETAIL__GET_PID_TUNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPidTuning in the package sail_interfaces.
typedef struct sail_interfaces__srv__GetPidTuning_Request
{
  uint8_t structure_needs_at_least_one_member;
} sail_interfaces__srv__GetPidTuning_Request;

// Struct for a sequence of sail_interfaces__srv__GetPidTuning_Request.
typedef struct sail_interfaces__srv__GetPidTuning_Request__Sequence
{
  sail_interfaces__srv__GetPidTuning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__srv__GetPidTuning_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_tune'
#include "sail_interfaces/msg/detail/pid_tuning__struct.h"

/// Struct defined in srv/GetPidTuning in the package sail_interfaces.
typedef struct sail_interfaces__srv__GetPidTuning_Response
{
  sail_interfaces__msg__PidTuning current_tune;
} sail_interfaces__srv__GetPidTuning_Response;

// Struct for a sequence of sail_interfaces__srv__GetPidTuning_Response.
typedef struct sail_interfaces__srv__GetPidTuning_Response__Sequence
{
  sail_interfaces__srv__GetPidTuning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__srv__GetPidTuning_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__SRV__DETAIL__GET_PID_TUNING__STRUCT_H_
