// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice
#include "roboteq_interface/msg/detail/driver_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roboteq_interface/msg/detail/driver_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace roboteq_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
cdr_serialize(
  const roboteq_interface::msg::DriverList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motors
  {
    cdr << ros_message.motors;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roboteq_interface::msg::DriverList & ros_message)
{
  // Member: motors
  {
    cdr >> ros_message.motors;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
get_serialized_size(
  const roboteq_interface::msg::DriverList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motors
  {
    size_t array_size = ros_message.motors.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.motors[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
max_serialized_size_DriverList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motors
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

static bool _DriverList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const roboteq_interface::msg::DriverList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DriverList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roboteq_interface::msg::DriverList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DriverList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roboteq_interface::msg::DriverList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DriverList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DriverList(full_bounded, 0);
}

static message_type_support_callbacks_t _DriverList__callbacks = {
  "roboteq_interface::msg",
  "DriverList",
  _DriverList__cdr_serialize,
  _DriverList__cdr_deserialize,
  _DriverList__get_serialized_size,
  _DriverList__max_serialized_size
};

static rosidl_message_type_support_t _DriverList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DriverList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roboteq_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roboteq_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<roboteq_interface::msg::DriverList>()
{
  return &roboteq_interface::msg::typesupport_fastrtps_cpp::_DriverList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roboteq_interface, msg, DriverList)() {
  return &roboteq_interface::msg::typesupport_fastrtps_cpp::_DriverList__handle;
}

#ifdef __cplusplus
}
#endif
