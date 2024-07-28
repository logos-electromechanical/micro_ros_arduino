// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sail_interfaces:action/DeployAuxPropulsion.idl
// generated code does not contain a copyright notice

#ifndef SAIL_INTERFACES__ACTION__DETAIL__DEPLOY_AUX_PROPULSION__STRUCT_H_
#define SAIL_INTERFACES__ACTION__DETAIL__DEPLOY_AUX_PROPULSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_Goal
{
  bool retract;
  bool extend;
} sail_interfaces__action__DeployAuxPropulsion_Goal;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_Goal.
typedef struct sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_Result
{
  std_msgs__msg__Header header;
  bool retracted;
  bool extended;
} sail_interfaces__action__DeployAuxPropulsion_Result;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_Result.
typedef struct sail_interfaces__action__DeployAuxPropulsion_Result__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
// already included above
// #include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_Feedback
{
  std_msgs__msg__Header header;
  float sec_to_finish;
  float sec_from_start;
  float fraction_complete;
} sail_interfaces__action__DeployAuxPropulsion_Feedback;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_Feedback.
typedef struct sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sail_interfaces/action/detail/deploy_aux_propulsion__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sail_interfaces__action__DeployAuxPropulsion_Goal goal;
} sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request.
typedef struct sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response.
typedef struct sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sail_interfaces__action__DeployAuxPropulsion_GetResult_Request;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_GetResult_Request.
typedef struct sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sail_interfaces/action/detail/deploy_aux_propulsion__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_GetResult_Response
{
  int8_t status;
  sail_interfaces__action__DeployAuxPropulsion_Result result;
} sail_interfaces__action__DeployAuxPropulsion_GetResult_Response;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_GetResult_Response.
typedef struct sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sail_interfaces/action/detail/deploy_aux_propulsion__struct.h"

/// Struct defined in action/DeployAuxPropulsion in the package sail_interfaces.
typedef struct sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sail_interfaces__action__DeployAuxPropulsion_Feedback feedback;
} sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage;

// Struct for a sequence of sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage.
typedef struct sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence
{
  sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sail_interfaces__action__DeployAuxPropulsion_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SAIL_INTERFACES__ACTION__DETAIL__DEPLOY_AUX_PROPULSION__STRUCT_H_
