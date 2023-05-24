// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roboteq_interface/msg/detail/driver_list__rosidl_typesupport_introspection_c.h"
#include "roboteq_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roboteq_interface/msg/detail/driver_list__functions.h"
#include "roboteq_interface/msg/detail/driver_list__struct.h"


// Include directives for member types
// Member `motors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DriverList__rosidl_typesupport_introspection_c__DriverList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roboteq_interface__msg__DriverList__init(message_memory);
}

void DriverList__rosidl_typesupport_introspection_c__DriverList_fini_function(void * message_memory)
{
  roboteq_interface__msg__DriverList__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DriverList__rosidl_typesupport_introspection_c__DriverList_message_member_array[1] = {
  {
    "motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboteq_interface__msg__DriverList, motors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DriverList__rosidl_typesupport_introspection_c__DriverList_message_members = {
  "roboteq_interface__msg",  // message namespace
  "DriverList",  // message name
  1,  // number of fields
  sizeof(roboteq_interface__msg__DriverList),
  DriverList__rosidl_typesupport_introspection_c__DriverList_message_member_array,  // message members
  DriverList__rosidl_typesupport_introspection_c__DriverList_init_function,  // function to initialize message memory (memory has to be allocated)
  DriverList__rosidl_typesupport_introspection_c__DriverList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DriverList__rosidl_typesupport_introspection_c__DriverList_message_type_support_handle = {
  0,
  &DriverList__rosidl_typesupport_introspection_c__DriverList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roboteq_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roboteq_interface, msg, DriverList)() {
  if (!DriverList__rosidl_typesupport_introspection_c__DriverList_message_type_support_handle.typesupport_identifier) {
    DriverList__rosidl_typesupport_introspection_c__DriverList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DriverList__rosidl_typesupport_introspection_c__DriverList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
