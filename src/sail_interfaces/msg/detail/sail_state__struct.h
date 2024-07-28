// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/SailState.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__SAIL_STATE__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__SAIL_STATE__STRUCT_H_

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

/// Struct defined in msg/SailState in the package sail_interfaces.
typedef struct sail_interfaces__msg__SailState
{
  std_msgs__msg__Header header;
  bool is_manual_control;
  bool is_point_of_sail_control;
  bool is_nav_control;
  bool is_aux_enabled;
  bool is_aux_active;
  bool is_sail_enabled;
  bool is_flap_enabled;
  bool is_armed;
} sail_interfaces__msg__SailState;

// Struct for a sequence of sail_interfaces__msg__SailState.
typedef struct sail_interfaces__msg__SailState__Sequence
{
  sail_interfaces__msg__SailState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__SailState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__SAIL_STATE__STRUCT_H_
