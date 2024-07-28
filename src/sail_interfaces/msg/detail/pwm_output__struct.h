// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/PwmOutput.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__PWM_OUTPUT__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__PWM_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PWM_RUDDER'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_RUDDER = 0
};

/// Constant 'PWM_RUDDER_PORT'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_RUDDER_PORT = 1
};

/// Constant 'PWM_RUDDER_STBD'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_RUDDER_STBD = 2
};

/// Constant 'PWM_AUX_DEPLOY'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_AUX_DEPLOY = 3
};

/// Constant 'PWM_AUX_DEPLOY_PORT'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_AUX_DEPLOY_PORT = 4
};

/// Constant 'PWM_AUX_DEPLOY_STBD'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_AUX_DEPLOY_STBD = 5
};

/// Constant 'PWM_AUX_THROTTLE'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_AUX_THROTTLE = 6
};

/// Constant 'PWM_AUX_THROTTLE_PORT'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_AUX_THROTTLE_PORT = 7
};

/// Constant 'PWM_AUX_THROTTLE_STBD'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_AUX_THROTTLE_STBD = 8
};

/// Constant 'PWM_CHANNEL_MAX'.
enum
{
  sail_interfaces__msg__PwmOutput__PWM_CHANNEL_MAX = 9
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PwmOutput in the package sail_interfaces.
typedef struct sail_interfaces__msg__PwmOutput
{
  std_msgs__msg__Header header;
  uint8_t channel;
  float value;
} sail_interfaces__msg__PwmOutput;

// Struct for a sequence of sail_interfaces__msg__PwmOutput.
typedef struct sail_interfaces__msg__PwmOutput__Sequence
{
  sail_interfaces__msg__PwmOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__PwmOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__PWM_OUTPUT__STRUCT_H_
