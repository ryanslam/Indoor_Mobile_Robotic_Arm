// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#ifndef ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__STRUCT_H_
#define ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motors'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/DriverList in the package roboteq_interface.
typedef struct roboteq_interface__msg__DriverList
{
  rosidl_runtime_c__int16__Sequence motors;
} roboteq_interface__msg__DriverList;

// Struct for a sequence of roboteq_interface__msg__DriverList.
typedef struct roboteq_interface__msg__DriverList__Sequence
{
  roboteq_interface__msg__DriverList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roboteq_interface__msg__DriverList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__STRUCT_H_
