// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/PidTuning.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__PID_TUNING__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__PID_TUNING__STRUCT_H_

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

/// Struct defined in msg/PidTuning in the package sail_interfaces.
/**
  * PID Tuning parameters
  * Includes all parameters used by the following libraries:
  * https://github.com/br3ttb/Arduino-PID-Library/
  * https://github.com/Tellicious/ArduPID-Library
  * https://github.com/PowerBroker2/ArduPID
 */
typedef struct sail_interfaces__msg__PidTuning
{
  /// loop identifier for nodes with multiple PID controllers
  uint8_t id;
  /// loop label for nodes with multiple PID controllers
  rosidl_runtime_c__String label;
  /// proportional gain
  float k_p;
  /// integral gain
  float k_i;
  /// differential gain
  float k_d;
  /// differential filter term (from https://github.com/Tellicious/ArduPID-Library)
  float n;
  /// integral saturation limit (absolute value)
  float max_i;
  /// maximum output value
  float max_out;
  /// minimum output value
  float min_out;
  /// maximum deadband value
  float max_deadband;
  /// minimum deadband value
  float min_deadband;
  /// constant output bias
  float output_bias;
  /// sample time, in milliseconds
  int32_t sample_time;
  /// if true, the output increases with increasing error; if false, decreases with increasing error
  bool direct;
  /// if true, the PID loop is active
  bool active;
  /// if true, calculate proportional output on the error term (from https://github.com/br3ttb/Arduino-PID-Library/)
  bool prop_on_err;
} sail_interfaces__msg__PidTuning;

// Struct for a sequence of sail_interfaces__msg__PidTuning.
typedef struct sail_interfaces__msg__PidTuning__Sequence
{
  sail_interfaces__msg__PidTuning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__PidTuning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__PID_TUNING__STRUCT_H_
