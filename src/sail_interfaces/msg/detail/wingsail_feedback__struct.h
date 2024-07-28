// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/WingsailFeedback.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__WINGSAIL_FEEDBACK__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__WINGSAIL_FEEDBACK__STRUCT_H_

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

/// Struct defined in msg/WingsailFeedback in the package sail_interfaces.
/**
  * ROS2 message to go with the WINGSAIL_FEEDBACK mavlink message (part of the ladon_robotics dialect)
 */
typedef struct sail_interfaces__msg__WingsailFeedback
{
  std_msgs__msg__Header header;
  /// enum
  uint8_t source_sail;
  /// degrees
  float sail_angle;
  /// degrees
  float wind_angle;
  /// bitmask
  uint8_t flap_active;
  /// degrees
  float flap_angle[8];
} sail_interfaces__msg__WingsailFeedback;

// Struct for a sequence of sail_interfaces__msg__WingsailFeedback.
typedef struct sail_interfaces__msg__WingsailFeedback__Sequence
{
  sail_interfaces__msg__WingsailFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__WingsailFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__WINGSAIL_FEEDBACK__STRUCT_H_
