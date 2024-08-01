// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/PidDebug.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__PID_DEBUG__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__PID_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PidDebug in the package sail_interfaces.
/**
  * PID Debug Output 
  * Includes all parameters used by the following libraries:
  * https://github.com/br3ttb/Arduino-PID-Library/
  * https://github.com/Tellicious/ArduPID-Library
  * https://github.com/PowerBroker2/ArduPID
 */
typedef struct sail_interfaces__msg__PidDebug
{
  /// loop identifier for nodes with multiple PID controllers
  uint8_t id;
  /// loop label for nodes with multiple PID controllers
  rosidl_runtime_c__String label;
  float input;
  float output;
  float setpoint;
  float p;
  float i;
  float d;
} sail_interfaces__msg__PidDebug;

// Struct for a sequence of sail_interfaces__msg__PidDebug.
typedef struct sail_interfaces__msg__PidDebug__Sequence
{
  sail_interfaces__msg__PidDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__PidDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__PID_DEBUG__STRUCT_H_
