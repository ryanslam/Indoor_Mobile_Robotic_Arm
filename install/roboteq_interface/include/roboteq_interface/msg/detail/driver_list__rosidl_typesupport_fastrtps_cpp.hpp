// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#ifndef ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "roboteq_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "roboteq_interface/msg/detail/driver_list__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roboteq_interface::msg::DriverList & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
get_serialized_size(
  const roboteq_interface::msg::DriverList & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
max_serialized_size_DriverList(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roboteq_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roboteq_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roboteq_interface, msg, DriverList)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
