// generated from rosidl_typesupport_opensplice_cpp/resource/idl__dds_opensplice_type_support.cpp.em
// generated code does not contain a copyright notice

#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>
#include <stdexcept>
#include <string>

#include <u_instanceHandle.h>
#include <CdrTypeSupport.h>

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "more_interfaces/msg/address_book__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "more_interfaces/msg/address_book__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "more_interfaces/msg/address_book__struct.hpp"
#include "more_interfaces/msg/dds_opensplice/ccpp_AddressBook_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace more_interfaces
{
namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_AddressBook = more_interfaces::msg::dds_::AddressBook_;
using __ros_msg_type_AddressBook = more_interfaces::msg::AddressBook;

static more_interfaces::msg::dds_::AddressBook_TypeSupport __type_support_AddressBook;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
register_type__AddressBook(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support_AddressBook.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
void
convert_ros_message_to_dds(
  const __ros_msg_type_AddressBook & ros_message,
  __dds_msg_type_AddressBook & dds_message)
{
  // member.name first_name
  dds_message.first_name_ = ros_message.first_name.c_str();
  // member.name last_name
  dds_message.last_name_ = ros_message.last_name.c_str();
  // member.name gender
  dds_message.gender_ = ros_message.gender;
  // member.name age
  dds_message.age_ = ros_message.age;
  // member.name address
  dds_message.address_ = ros_message.address.c_str();
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
publish__AddressBook(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_AddressBook & ros_message = *static_cast<const __ros_msg_type_AddressBook *>(untyped_ros_message);
  __dds_msg_type_AddressBook dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  more_interfaces::msg::dds_::AddressBook_DataWriter * data_writer =
    more_interfaces::msg::dds_::AddressBook_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "this more_interfaces::msg::dds_::AddressBook_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "this more_interfaces::msg::dds_::AddressBook_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "the handle has not been registered with this more_interfaces::msg::dds_::AddressBook_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "more_interfaces::msg::dds_::AddressBook_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
void
convert_dds_message_to_ros(
  const __dds_msg_type_AddressBook & dds_message,
  __ros_msg_type_AddressBook & ros_message)
{
  // member.name first_name
  ros_message.first_name = dds_message.first_name_;
  // member.name last_name
  ros_message.last_name = dds_message.last_name_;
  // member.name gender
  ros_message.gender =
    (dds_message.gender_ != 0);
  // member.name age
  ros_message.age =
    dds_message.age_;
  // member.name address
  ros_message.address = dds_message.address_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
take__AddressBook(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  more_interfaces::msg::dds_::AddressBook_DataReader * data_reader =
    more_interfaces::msg::dds_::AddressBook_DataReader::_narrow(topic_reader);

  more_interfaces::msg::dds_::AddressBook_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "more_interfaces::msg::dds_::AddressBook_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "more_interfaces::msg::dds_::AddressBook_DataReader.take: "
        "this more_interfaces::msg::dds_::AddressBook_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "more_interfaces::msg::dds_::AddressBook_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "more_interfaces::msg::dds_::AddressBook_DataReader.take: "
        "this more_interfaces::msg::dds_::AddressBook_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "more_interfaces::msg::dds_::AddressBook_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "more_interfaces::msg::dds_::AddressBook_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type_AddressBook & ros_message = *static_cast<__ros_msg_type_AddressBook *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "more_interfaces::msg::dds_::AddressBook_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "more_interfaces::msg::dds_::AddressBook_DataReader.return_loan: "
             "this more_interfaces::msg::dds_::AddressBook_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "more_interfaces::msg::dds_::AddressBook_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "more_interfaces::msg::dds_::AddressBook_DataReader.return_loan: "
             "this more_interfaces::msg::dds_::AddressBook_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "more_interfaces::msg::dds_::AddressBook_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "more_interfaces::msg::dds_::AddressBook_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "more_interfaces::msg::dds_::AddressBook_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
serialize__AddressBook(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_AddressBook & ros_message = *static_cast<const __ros_msg_type_AddressBook *>(untyped_ros_message);
  __dds_msg_type_AddressBook dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_AddressBook);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.serialize: "
             "this more_interfaces::msg::dds_::AddressBook_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
deserialize__AddressBook(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_AddressBook dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_AddressBook);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.deserialize: "
             "this more_interfaces::msg::dds_::AddressBook_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "more_interfaces::msg::dds_::AddressBook_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_AddressBook & ros_message = *static_cast<__ros_msg_type_AddressBook *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t AddressBook_callbacks = {
  "more_interfaces::msg",
  "AddressBook",
  &register_type__AddressBook,
  &publish__AddressBook,
  &take__AddressBook,
  &serialize__AddressBook,
  &deserialize__AddressBook,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t AddressBook_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &AddressBook_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace more_interfaces

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::AddressBook>()
{
  return &more_interfaces::msg::typesupport_opensplice_cpp::AddressBook_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  more_interfaces, msg,
  AddressBook)()
{
  return &more_interfaces::msg::typesupport_opensplice_cpp::AddressBook_handle;
}

#ifdef __cplusplus
}
#endif
