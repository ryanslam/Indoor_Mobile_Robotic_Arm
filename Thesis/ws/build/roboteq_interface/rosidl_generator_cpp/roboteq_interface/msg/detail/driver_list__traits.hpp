// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#ifndef ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__TRAITS_HPP_
#define ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__TRAITS_HPP_

#include "roboteq_interface/msg/detail/driver_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<roboteq_interface::msg::DriverList>()
{
  return "roboteq_interface::msg::DriverList";
}

template<>
inline const char * name<roboteq_interface::msg::DriverList>()
{
  return "roboteq_interface/msg/DriverList";
}

template<>
struct has_fixed_size<roboteq_interface::msg::DriverList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roboteq_interface::msg::DriverList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roboteq_interface::msg::DriverList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__TRAITS_HPP_
