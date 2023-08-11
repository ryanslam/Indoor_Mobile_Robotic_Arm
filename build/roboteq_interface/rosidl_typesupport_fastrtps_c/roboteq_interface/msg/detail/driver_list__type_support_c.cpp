// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice
#include "roboteq_interface/msg/detail/driver_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roboteq_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roboteq_interface/msg/detail/driver_list__struct.h"
#include "roboteq_interface/msg/detail/driver_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // motors
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // motors

// forward declare type support functions


using _DriverList__ros_msg_type = roboteq_interface__msg__DriverList;

static bool _DriverList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DriverList__ros_msg_type * ros_message = static_cast<const _DriverList__ros_msg_type *>(untyped_ros_message);
  // Field name: motors
  {
    size_t size = ros_message->motors.size;
    auto array_ptr = ros_message->motors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _DriverList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DriverList__ros_msg_type * ros_message = static_cast<_DriverList__ros_msg_type *>(untyped_ros_message);
  // Field name: motors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->motors.data) {
      rosidl_runtime_c__int16__Sequence__fini(&ros_message->motors);
    }
    if (!rosidl_runtime_c__int16__Sequence__init(&ros_message->motors, size)) {
      return "failed to create array for field 'motors'";
    }
    auto array_ptr = ros_message->motors.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboteq_interface
size_t get_serialized_size_roboteq_interface__msg__DriverList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriverList__ros_msg_type * ros_message = static_cast<const _DriverList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motors
  {
    size_t array_size = ros_message->motors.size;
    auto array_ptr = ros_message->motors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DriverList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roboteq_interface__msg__DriverList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roboteq_interface
size_t max_serialized_size_roboteq_interface__msg__DriverList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motors
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DriverList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_roboteq_interface__msg__DriverList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DriverList = {
  "roboteq_interface::msg",
  "DriverList",
  _DriverList__cdr_serialize,
  _DriverList__cdr_deserialize,
  _DriverList__get_serialized_size,
  _DriverList__max_serialized_size
};

static rosidl_message_type_support_t _DriverList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DriverList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roboteq_interface, msg, DriverList)() {
  return &_DriverList__type_support;
}

#if defined(__cplusplus)
}
#endif
