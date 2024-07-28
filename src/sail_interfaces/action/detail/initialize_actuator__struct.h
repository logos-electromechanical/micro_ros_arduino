// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:action/InitializeActuator.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__ACTION__DETAIL__INITIALIZE_ACTUATOR__STRUCT_H_
#define SAIL_INTERFACES__ACTION__DETAIL__INITIALIZE_ACTUATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_Goal
{
  float voltage;
} sail_interfaces__action__InitializeActuator_Goal;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_Goal.
typedef struct sail_interfaces__action__InitializeActuator_Goal__Sequence
{
  sail_interfaces__action__InitializeActuator_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_Result
{
  float absolute_encoder_value;
  float steps_per_volt;
  int32_t incremental_encoder_value;
} sail_interfaces__action__InitializeActuator_Result;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_Result.
typedef struct sail_interfaces__action__InitializeActuator_Result__Sequence
{
  sail_interfaces__action__InitializeActuator_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_Feedback
{
  float absolute_feedback;
  int32_t incremental_feedback;
} sail_interfaces__action__InitializeActuator_Feedback;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_Feedback.
typedef struct sail_interfaces__action__InitializeActuator_Feedback__Sequence
{
  sail_interfaces__action__InitializeActuator_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sail_interfaces/action/detail/initialize_actuator__struct.h"

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sail_interfaces__action__InitializeActuator_Goal goal;
} sail_interfaces__action__InitializeActuator_SendGoal_Request;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_SendGoal_Request.
typedef struct sail_interfaces__action__InitializeActuator_SendGoal_Request__Sequence
{
  sail_interfaces__action__InitializeActuator_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sail_interfaces__action__InitializeActuator_SendGoal_Response;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_SendGoal_Response.
typedef struct sail_interfaces__action__InitializeActuator_SendGoal_Response__Sequence
{
  sail_interfaces__action__InitializeActuator_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sail_interfaces__action__InitializeActuator_GetResult_Request;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_GetResult_Request.
typedef struct sail_interfaces__action__InitializeActuator_GetResult_Request__Sequence
{
  sail_interfaces__action__InitializeActuator_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sail_interfaces/action/detail/initialize_actuator__struct.h"

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_GetResult_Response
{
  int8_t status;
  sail_interfaces__action__InitializeActuator_Result result;
} sail_interfaces__action__InitializeActuator_GetResult_Response;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_GetResult_Response.
typedef struct sail_interfaces__action__InitializeActuator_GetResult_Response__Sequence
{
  sail_interfaces__action__InitializeActuator_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sail_interfaces/action/detail/initialize_actuator__struct.h"

/// Struct defined in action/InitializeActuator in the package sail_interfaces.
typedef struct sail_interfaces__action__InitializeActuator_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sail_interfaces__action__InitializeActuator_Feedback feedback;
} sail_interfaces__action__InitializeActuator_FeedbackMessage;

// Struct for a sequence of sail_interfaces__action__InitializeActuator_FeedbackMessage.
typedef struct sail_interfaces__action__InitializeActuator_FeedbackMessage__Sequence
{
  sail_interfaces__action__InitializeActuator_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__InitializeActuator_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__ACTION__DETAIL__INITIALIZE_ACTUATOR__STRUCT_H_
