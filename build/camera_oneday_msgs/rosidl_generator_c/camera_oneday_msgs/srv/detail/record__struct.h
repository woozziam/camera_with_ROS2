// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_oneday_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__STRUCT_H_
#define CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Record in the package camera_oneday_msgs.
typedef struct camera_oneday_msgs__srv__Record_Request
{
  bool start;
  rosidl_runtime_c__String topic_name;
} camera_oneday_msgs__srv__Record_Request;

// Struct for a sequence of camera_oneday_msgs__srv__Record_Request.
typedef struct camera_oneday_msgs__srv__Record_Request__Sequence
{
  camera_oneday_msgs__srv__Record_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_oneday_msgs__srv__Record_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'file_path'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Record in the package camera_oneday_msgs.
typedef struct camera_oneday_msgs__srv__Record_Response
{
  rosidl_runtime_c__String file_path;
} camera_oneday_msgs__srv__Record_Response;

// Struct for a sequence of camera_oneday_msgs__srv__Record_Response.
typedef struct camera_oneday_msgs__srv__Record_Response__Sequence
{
  camera_oneday_msgs__srv__Record_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_oneday_msgs__srv__Record_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__STRUCT_H_
