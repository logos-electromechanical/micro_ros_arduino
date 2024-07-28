// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/AuxPropulsionFeedback.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__AUX_PROPULSION_FEEDBACK__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__AUX_PROPULSION_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEPLOY_STATE_UNKNOWN'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_UNKNOWN = 0
};

/// Constant 'DEPLOY_STATE_RETRACTED'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_RETRACTED = 1
};

/// Constant 'DEPLOY_STATE_RETRACTING'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_RETRACTING = 2
};

/// Constant 'DEPLOY_STATE_DEPLOYING'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_DEPLOYING = 3
};

/// Constant 'DEPLOY_STATE_DEPLOYED'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_DEPLOYED = 4
};

/// Constant 'DEPLOY_STATE_FAILURE'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_FAILURE = 5
};

/// Constant 'DEPLOY_STATE_MAX'.
enum
{
  sail_interfaces__msg__AuxPropulsionFeedback__DEPLOY_STATE_MAX = 255
};

/// Struct defined in msg/AuxPropulsionFeedback in the package sail_interfaces.
typedef struct sail_interfaces__msg__AuxPropulsionFeedback
{
  uint8_t motor_number;
  uint8_t deploy_state;
  float throttle;
  float motor_speed;
} sail_interfaces__msg__AuxPropulsionFeedback;

// Struct for a sequence of sail_interfaces__msg__AuxPropulsionFeedback.
typedef struct sail_interfaces__msg__AuxPropulsionFeedback__Sequence
{
  sail_interfaces__msg__AuxPropulsionFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__AuxPropulsionFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__AUX_PROPULSION_FEEDBACK__STRUCT_H_
