// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:srv/SwitchPidDebug.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__SRV__DETAIL__SWITCH_PID_DEBUG__STRUCT_H_
#define SAIL_INTERFACES__SRV__DETAIL__SWITCH_PID_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SwitchPidDebug in the package sail_interfaces.
typedef struct sail_interfaces__srv__SwitchPidDebug_Request
{
  bool debug;
} sail_interfaces__srv__SwitchPidDebug_Request;

// Struct for a sequence of sail_interfaces__srv__SwitchPidDebug_Request.
typedef struct sail_interfaces__srv__SwitchPidDebug_Request__Sequence
{
  sail_interfaces__srv__SwitchPidDebug_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__srv__SwitchPidDebug_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SwitchPidDebug in the package sail_interfaces.
typedef struct sail_interfaces__srv__SwitchPidDebug_Response
{
  bool success;
} sail_interfaces__srv__SwitchPidDebug_Response;

// Struct for a sequence of sail_interfaces__srv__SwitchPidDebug_Response.
typedef struct sail_interfaces__srv__SwitchPidDebug_Response__Sequence
{
  sail_interfaces__srv__SwitchPidDebug_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__srv__SwitchPidDebug_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__SRV__DETAIL__SWITCH_PID_DEBUG__STRUCT_H_
