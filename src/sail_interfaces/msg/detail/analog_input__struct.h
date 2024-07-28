// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/AnalogInput.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__ANALOG_INPUT__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__ANALOG_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AnalogInput in the package sail_interfaces.
/**
  * message for a digital input from any ADC source
 */
typedef struct sail_interfaces__msg__AnalogInput
{
  std_msgs__msg__Header header;
  int32_t raw_value;
  float scaled_voltage;
  float scaled_value;
} sail_interfaces__msg__AnalogInput;

// Struct for a sequence of sail_interfaces__msg__AnalogInput.
typedef struct sail_interfaces__msg__AnalogInput__Sequence
{
  sail_interfaces__msg__AnalogInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__AnalogInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__ANALOG_INPUT__STRUCT_H_
