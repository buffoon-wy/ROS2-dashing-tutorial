// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MYMSGS__MSG__PACKET_MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MYMSGS__MSG__PACKET_MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "mymsgs/msg/packet_msg__struct.hpp"
#include "mymsgs/msg/dds_opensplice/ccpp_PacketMsg_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mymsgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace mymsgs
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_mymsgs
extern void register_type__PacketMsg(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_mymsgs
extern void convert_ros_message_to_dds(
  const mymsgs::msg::PacketMsg & ros_message,
  mymsgs::msg::dds_::PacketMsg_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_mymsgs
extern void publish__PacketMsg(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_mymsgs
extern void convert_dds_message_to_ros(
  const mymsgs::msg::dds_::PacketMsg_ & dds_message,
  mymsgs::msg::PacketMsg & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_mymsgs
extern bool take__PacketMsg(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_mymsgs
const char *
serialize__PacketMsg(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_mymsgs
const char *
deserialize__PacketMsg(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace mymsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_mymsgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  mymsgs, msg,
  PacketMsg)();

#ifdef __cplusplus
}
#endif
#endif  // MYMSGS__MSG__PACKET_MSG__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
