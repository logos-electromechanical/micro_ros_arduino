// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/WingOrientation.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__WING_ORIENTATION__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__WING_ORIENTATION__STRUCT_H_

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

/// Struct defined in msg/WingOrientation in the package sail_interfaces.
/**
  * Wing orientation data to correct the windvane orientation.
 */
typedef struct sail_interfaces__msg__WingOrientation
{
  std_msgs__msg__Header header;
  /// enum
  uint8_t source_sail;
  /// sail orientation, degrees clockwise from dead ahead
  float orientation;
} sail_interfaces__msg__WingOrientation;

// Struct for a sequence of sail_interfaces__msg__WingOrientation.
typedef struct sail_interfaces__msg__WingOrientation__Sequence
{
  sail_interfaces__msg__WingOrientation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__WingOrientation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__WING_ORIENTATION__STRUCT_H_
