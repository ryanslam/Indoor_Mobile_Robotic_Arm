// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "roboteq_interface/msg/detail/driver_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace roboteq_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DriverList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) roboteq_interface::msg::DriverList(_init);
}

void DriverList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<roboteq_interface::msg::DriverList *>(message_memory);
  typed_message->~DriverList();
}

size_t size_function__DriverList__motors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DriverList__motors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DriverList__motors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__DriverList__motors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DriverList_message_member_array[1] = {
  {
    "motors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roboteq_interface::msg::DriverList, motors),  // bytes offset in struct
    nullptr,  // default value
    size_function__DriverList__motors,  // size() function pointer
    get_const_function__DriverList__motors,  // get_const(index) function pointer
    get_function__DriverList__motors,  // get(index) function pointer
    resize_function__DriverList__motors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DriverList_message_members = {
  "roboteq_interface::msg",  // message namespace
  "DriverList",  // message name
  1,  // number of fields
  sizeof(roboteq_interface::msg::DriverList),
  DriverList_message_member_array,  // message members
  DriverList_init_function,  // function to initialize message memory (memory has to be allocated)
  DriverList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DriverList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DriverList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace roboteq_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roboteq_interface::msg::DriverList>()
{
  return &::roboteq_interface::msg::rosidl_typesupport_introspection_cpp::DriverList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roboteq_interface, msg, DriverList)() {
  return &::roboteq_interface::msg::rosidl_typesupport_introspection_cpp::DriverList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
