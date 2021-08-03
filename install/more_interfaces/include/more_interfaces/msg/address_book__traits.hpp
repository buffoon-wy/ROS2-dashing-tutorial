// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__ADDRESS_BOOK__TRAITS_HPP_
#define MORE_INTERFACES__MSG__ADDRESS_BOOK__TRAITS_HPP_

#include "more_interfaces/msg/address_book__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::msg::AddressBook>()
{
  return "more_interfaces::msg::AddressBook";
}

template<>
struct has_fixed_size<more_interfaces::msg::AddressBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<more_interfaces::msg::AddressBook>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__MSG__ADDRESS_BOOK__TRAITS_HPP_
