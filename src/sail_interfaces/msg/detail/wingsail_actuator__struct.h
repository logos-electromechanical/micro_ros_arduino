// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:msg/WingsailActuator.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__MSG__DETAIL__WINGSAIL_ACTUATOR__STRUCT_H_
#define SAIL_INTERFACES__MSG__DETAIL__WINGSAIL_ACTUATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SAIL_POS_ID_SINGLE'.
/**
  * A single sail on the boat
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_SINGLE = 0
};

/// Constant 'SAIL_POS_ID_1'.
/**
  * Wingsail #1
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_1 = 1
};

/// Constant 'SAIL_POS_ID_2'.
/**
  * Wingsail #2
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_2 = 2
};

/// Constant 'SAIL_POS_ID_3'.
/**
  * Wingsail #3
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_3 = 3
};

/// Constant 'SAIL_POS_ID_4'.
/**
  * Wingsail #4
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_4 = 4
};

/// Constant 'SAIL_POS_ID_5'.
/**
  * Wingsail #5
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_5 = 5
};

/// Constant 'SAIL_POS_ID_6'.
/**
  * Wingsail #6
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_6 = 6
};

/// Constant 'SAIL_POS_ID_7'.
/**
  * Wingsail #7
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_7 = 7
};

/// Constant 'SAIL_POS_ID_8'.
/**
  * Wingsail #8
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_8 = 8
};

/// Constant 'SAIL_POS_ID_FORE'.
/**
  * The forward most sail on a boat
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_FORE = 20
};

/// Constant 'SAIL_POS_ID_MAIN'.
/**
  * The middle sail on a boat
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_MAIN = 21
};

/// Constant 'SAIL_POS_ID_MIZZEN'.
/**
  * The aft most sail on a boat
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_MIZZEN = 22
};

/// Constant 'SAIL_POS_HULL'.
/**
  * Indicates a source fixed to the hull
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_HULL = 101
};

/// Constant 'SAIL_POS_MIXED'.
/**
  * Indicates a mixed value
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_MIXED = 201
};

/// Constant 'SAIL_POS_ID_NONE'.
/**
  * No wingsail defined
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_POS_ID_NONE = 255
};

/// Constant 'SAIL_ANGLE_TYPE_AOA'.
/**
  * The angle is an angle of attack
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_ANGLE_TYPE_AOA = 1
};

/// Constant 'SAIL_ANGLE_TYPE_ROT'.
/**
  * The angle is a rotation angle
 */
enum
{
  sail_interfaces__msg__WingsailActuator__SAIL_ANGLE_TYPE_ROT = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/WingsailActuator in the package sail_interfaces.
/**
  * ROS2 message to go with the WINGSAIL_ACTUATOR mavlink message (part of the ladon_robotics dialect)
 */
typedef struct sail_interfaces__msg__WingsailActuator
{
  std_msgs__msg__Header header;
  /// enum
  uint8_t target_sail;
  /// enum
  uint8_t sail_angle_type;
  /// angle in degrees
  float sail_angle;
  /// bitmask
  uint8_t flap_active;
  /// deflection in degrees
  float flap_angle[8];
} sail_interfaces__msg__WingsailActuator;

// Struct for a sequence of sail_interfaces__msg__WingsailActuator.
typedef struct sail_interfaces__msg__WingsailActuator__Sequence
{
  sail_interfaces__msg__WingsailActuator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__msg__WingsailActuator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__MSG__DETAIL__WINGSAIL_ACTUATOR__STRUCT_H_
