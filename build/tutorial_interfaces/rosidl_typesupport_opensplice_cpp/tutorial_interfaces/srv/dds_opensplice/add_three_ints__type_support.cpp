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

// generated from rosidl_typesupport_opensplice_cpp/resource/srv__type_support.cpp.em
// generated code does not contain a copyright notice

#include "tutorial_interfaces/srv/add_three_ints__rosidl_typesupport_opensplice_cpp.hpp"
#include "rosidl_generator_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_opensplice_cpp/visibility_control.h"
#include "rmw/rmw.h"
#include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
// already included above
// #include "tutorial_interfaces/srv/add_three_ints__rosidl_typesupport_opensplice_cpp.hpp"
#include "tutorial_interfaces/srv/dds_opensplice/ccpp_AddThreeInts_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/service_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/service_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/requester.hpp"
#include "rosidl_typesupport_opensplice_cpp/responder.hpp"

// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tutorial_interfaces/srv/add_three_ints__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "tutorial_interfaces/srv/add_three_ints__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
// already included above
// #include "tutorial_interfaces/srv/dds_opensplice/ccpp_AddThreeInts_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace tutorial_interfaces
{
namespace srv
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_AddThreeInts_Request = tutorial_interfaces::srv::dds_::AddThreeInts_Request_;
using __ros_msg_type_AddThreeInts_Request = tutorial_interfaces::srv::AddThreeInts_Request;

static tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport __type_support_AddThreeInts_Request;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
register_type__AddThreeInts_Request(
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

  DDS::ReturnCode_t status = __type_support_AddThreeInts_Request.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
void
convert_ros_message_to_dds(
  const __ros_msg_type_AddThreeInts_Request & ros_message,
  __dds_msg_type_AddThreeInts_Request & dds_message)
{
  // member.name a
  dds_message.a_ = ros_message.a;
  // member.name b
  dds_message.b_ = ros_message.b;
  // member.name c
  dds_message.c_ = ros_message.c;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
publish__AddThreeInts_Request(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_AddThreeInts_Request & ros_message = *static_cast<const __ros_msg_type_AddThreeInts_Request *>(untyped_ros_message);
  __dds_msg_type_AddThreeInts_Request dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter * data_writer =
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "the handle has not been registered with this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
void
convert_dds_message_to_ros(
  const __dds_msg_type_AddThreeInts_Request & dds_message,
  __ros_msg_type_AddThreeInts_Request & ros_message)
{
  // member.name a
  ros_message.a =
    dds_message.a_;
  // member.name b
  ros_message.b =
    dds_message.b_;
  // member.name c
  ros_message.c =
    dds_message.c_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
take__AddThreeInts_Request(
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

  tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader * data_reader =
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_narrow(topic_reader);

  tutorial_interfaces::srv::dds_::AddThreeInts_Request_Seq dds_messages;
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
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.take: "
        "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.take: "
        "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.take: "
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
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.take: unknown return code";
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
    __ros_msg_type_AddThreeInts_Request & ros_message = *static_cast<__ros_msg_type_AddThreeInts_Request *>(untyped_ros_message);
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
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.return_loan: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.return_loan: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
serialize__AddThreeInts_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_AddThreeInts_Request & ros_message = *static_cast<const __ros_msg_type_AddThreeInts_Request *>(untyped_ros_message);
  __dds_msg_type_AddThreeInts_Request dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_AddThreeInts_Request);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.serialize: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.serialize failed with "
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
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
deserialize__AddThreeInts_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_AddThreeInts_Request dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_AddThreeInts_Request);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.deserialize: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_AddThreeInts_Request & ros_message = *static_cast<__ros_msg_type_AddThreeInts_Request *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t AddThreeInts_Request_callbacks = {
  "tutorial_interfaces::srv",
  "AddThreeInts_Request",
  &register_type__AddThreeInts_Request,
  &publish__AddThreeInts_Request,
  &take__AddThreeInts_Request,
  &serialize__AddThreeInts_Request,
  &deserialize__AddThreeInts_Request,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t AddThreeInts_Request_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &AddThreeInts_Request_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace tutorial_interfaces

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::AddThreeInts_Request>()
{
  return &tutorial_interfaces::srv::typesupport_opensplice_cpp::AddThreeInts_Request_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tutorial_interfaces, srv,
  AddThreeInts_Request)()
{
  return &tutorial_interfaces::srv::typesupport_opensplice_cpp::AddThreeInts_Request_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tutorial_interfaces/srv/add_three_ints__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "tutorial_interfaces/srv/add_three_ints__rosidl_typesupport_opensplice_cpp.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
// already included above
// #include "tutorial_interfaces/srv/dds_opensplice/ccpp_AddThreeInts_.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace tutorial_interfaces
{
namespace srv
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type_AddThreeInts_Response = tutorial_interfaces::srv::dds_::AddThreeInts_Response_;
using __ros_msg_type_AddThreeInts_Response = tutorial_interfaces::srv::AddThreeInts_Response;

static tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport __type_support_AddThreeInts_Response;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
register_type__AddThreeInts_Response(
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

  DDS::ReturnCode_t status = __type_support_AddThreeInts_Response.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
void
convert_ros_message_to_dds(
  const __ros_msg_type_AddThreeInts_Response & ros_message,
  __dds_msg_type_AddThreeInts_Response & dds_message)
{
  // member.name sum
  dds_message.sum_ = ros_message.sum;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
publish__AddThreeInts_Response(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type_AddThreeInts_Response & ros_message = *static_cast<const __ros_msg_type_AddThreeInts_Response *>(untyped_ros_message);
  __dds_msg_type_AddThreeInts_Response dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter * data_writer =
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "the handle has not been registered with this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
void
convert_dds_message_to_ros(
  const __dds_msg_type_AddThreeInts_Response & dds_message,
  __ros_msg_type_AddThreeInts_Response & ros_message)
{
  // member.name sum
  ros_message.sum =
    dds_message.sum_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
take__AddThreeInts_Response(
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

  tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader * data_reader =
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_narrow(topic_reader);

  tutorial_interfaces::srv::dds_::AddThreeInts_Response_Seq dds_messages;
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
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.take: "
        "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.take: "
        "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.take: "
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
      errs = "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.take: unknown return code";
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
    __ros_msg_type_AddThreeInts_Response & ros_message = *static_cast<__ros_msg_type_AddThreeInts_Response *>(untyped_ros_message);
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
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.return_loan: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.return_loan: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
serialize__AddThreeInts_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type_AddThreeInts_Response & ros_message = *static_cast<const __ros_msg_type_AddThreeInts_Response *>(untyped_ros_message);
  __dds_msg_type_AddThreeInts_Response dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_AddThreeInts_Response);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.serialize: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.serialize failed with "
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
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
deserialize__AddThreeInts_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type_AddThreeInts_Response dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support_AddThreeInts_Response);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.deserialize: "
             "this tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type_AddThreeInts_Response & ros_message = *static_cast<__ros_msg_type_AddThreeInts_Response *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t AddThreeInts_Response_callbacks = {
  "tutorial_interfaces::srv",
  "AddThreeInts_Response",
  &register_type__AddThreeInts_Response,
  &publish__AddThreeInts_Response,
  &take__AddThreeInts_Response,
  &serialize__AddThreeInts_Response,
  &deserialize__AddThreeInts_Response,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t AddThreeInts_Response_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &AddThreeInts_Response_callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace tutorial_interfaces

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tutorial_interfaces::srv::AddThreeInts_Response>()
{
  return &tutorial_interfaces::srv::typesupport_opensplice_cpp::AddThreeInts_Response_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tutorial_interfaces, srv,
  AddThreeInts_Response)()
{
  return &tutorial_interfaces::srv::typesupport_opensplice_cpp::AddThreeInts_Response_handle;
}

#ifdef __cplusplus
}
#endif


namespace rosidl_typesupport_opensplice_cpp
{

template<>
class Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_>
  : public tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_
{
public:
  tutorial_interfaces::srv::dds_::AddThreeInts_Request_ & data()
  {
    return request_;
  }
};

template<>
class TemplateDataReader<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_>
  : public tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_> & sample,
    bool * taken)
  noexcept
  {
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader * typed_datareader = _narrow(datareader);

    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.take failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.take failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.return_loan failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.return_loan failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_>>
  : public TemplateDataReader<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_>
{
};

template<>
class TemplateDataWriter<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_>
  : public tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_> & sample)
  noexcept
  {
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "the handle has not been registered with this "
               "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_>>
  : public TemplateDataWriter<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_>
{
};

template<>
class Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_>
  : public tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_
{
public:
  tutorial_interfaces::srv::dds_::AddThreeInts_Response_ & data()
  {
    return response_;
  }
};

template<>
class TemplateDataReader<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_>
  : public tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader
{
public:
  static const char * take_sample(
    DDS::DataReader * datareader,
    Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_> & sample,
    bool * taken)
  noexcept
  {
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader * typed_datareader = _narrow(datareader);

    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_Seq dds_messages;
    DDS::SampleInfoSeq sample_infos;
    DDS::ReturnCode_t status = typed_datareader->take(
      dds_messages,
      sample_infos,
      1,
      DDS::ANY_SAMPLE_STATE,
      DDS::ANY_VIEW_STATE,
      // See ros2/rclcpp#192 for a justification of this option:
      // https://github.com/ros2/rclcpp/issues/192#issuecomment-183491185
      DDS::ANY_INSTANCE_STATE);

    switch (status) {
      case DDS::RETCODE_ERROR:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.take failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.take failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.take failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.take failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.take failed with: "
               "a precondition is not met, one of: "
               "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
               "the two sequences do not have matching parameters (length, maximum, release), or "
               "maximum > 0 and release is false.";
      case DDS::RETCODE_NO_DATA:
        *taken = false;
        return nullptr;
      case DDS::RETCODE_OK:
        break;
      default:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.take failed with "
               "unknown return code";
    }

    *taken = (sample_infos.length() > 0 && sample_infos[0].valid_data);
    if (*taken) {
      sample = reinterpret_cast<Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_> &>(dds_messages[0]);
    }
    status = typed_datareader->return_loan(dds_messages, sample_infos);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.return_loan failed with: "
               "an internal error has occurred";
      case DDS::RETCODE_ALREADY_DELETED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.return_loan failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.return_loan failed with: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.return_loan failed with: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.return_loan failed with: "
               "a precondition is not met, one of: "
               "the data_values and info_seq do not belong to a single related pair, or "
               "the data_values and info_seq were not obtained from this "
               "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader";
      case DDS::RETCODE_OK:
        break;
      default:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader.return_loan failed with "
               "unknown return code";
    }

    return nullptr;
  }
};

template<>
class TemplateDataReader<Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_>>
  : public TemplateDataReader<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_>
{
};

template<>
class TemplateDataWriter<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_>
  : public tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter
{
public:
  static const char * write_sample(
    DDS::DataWriter * datawriter,
    Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_> & sample)
  noexcept
  {
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter * typed_datawriter = _narrow(datawriter);

    DDS::ReturnCode_t status = typed_datawriter->write(sample, DDS::HANDLE_NIL);
    switch (status) {
      case DDS::RETCODE_ERROR:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "an internal error has occurred";
      case DDS::RETCODE_BAD_PARAMETER:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "bad handle or instance_data parameter";
      case DDS::RETCODE_ALREADY_DELETED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter has already been deleted";
      case DDS::RETCODE_OUT_OF_RESOURCES:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "out of resources";
      case DDS::RETCODE_NOT_ENABLED:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "this tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter is not enabled";
      case DDS::RETCODE_PRECONDITION_NOT_MET:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "the handle has not been registered with this "
               "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter";
      case DDS::RETCODE_TIMEOUT:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: "
               "writing resulted in blocking and then exceeded the timeout set by the "
               "max_blocking_time of the ReliabilityQosPolicy";
      case DDS::RETCODE_OK:
        return nullptr;
      default:
        return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter.write: unknown return code";
    }
  }
};

template<>
class TemplateDataWriter<Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_>>
  : public TemplateDataWriter<tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_>
{
};

}  // namespace rosidl_typesupport_opensplice_cpp

namespace tutorial_interfaces
{
namespace srv
{

namespace typesupport_opensplice_cpp
{

const char *
register_types__AddThreeInts(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  DDS::DomainParticipant * participant = static_cast<DDS::DomainParticipant *>(untyped_participant);

  tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupport ros_request_ts;
  DDS::ReturnCode_t status = ros_request_ts.register_type(participant, request_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupport.register_type: unkown return code";
  }

  tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupport ros_response_ts;
  status = ros_response_ts.register_type(participant, response_type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupport.register_type: "
             "precondition not met, already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      break;
    default:
      return "tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupport.register_type: unkown return code";
  }
  return nullptr;
}

const char *
create_requester__AddThreeInts(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("tutorial_interfaces::srv::dds_::Sample_AddThreeInts");
  const std::string request_type_name("tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_");
  const std::string response_type_name("tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__AddThreeInts(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;

  RequesterT * requester = static_cast<RequesterT *>(_allocator(sizeof(RequesterT)));
  if (!requester) {
    return "failed to allocate memory for requester";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (requester) RequesterT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of RequesterT";
  }
  error_string = requester->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_requester = requester;
  *untyped_reader = requester->get_response_datareader();

  return nullptr;
}

const char *
create_responder__AddThreeInts(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  auto _allocator = allocator ? allocator : &malloc;
  const std::string service_type_name("tutorial_interfaces::srv::dds_::Sample_AddThreeInts");
  const std::string request_type_name("tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_");
  const std::string response_type_name("tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_");

  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  const DDS::DataReaderQos * datareader_qos = static_cast<const DDS::DataReaderQos *>(untyped_datareader_qos);
  const DDS::DataWriterQos * datawriter_qos = static_cast<const DDS::DataWriterQos *>(untyped_datawriter_qos);

  const char * error_string = register_types__AddThreeInts(
    participant, request_type_name.c_str(), response_type_name.c_str());
  if (error_string) {
    return error_string;
  }

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;

  ResponderT * responder = static_cast<ResponderT *>(_allocator(sizeof(ResponderT)));
  if (!responder) {
    return "failed to allocate memory for responder";
  }
  // Assumption: this constructor will not throw. This is a reasonable assumption
  // since we do all things which usually can cause problem in init().
  // However, it could still throw a bad_alloc or something like that.
  try {
    new (responder) ResponderT(participant, service_name, service_type_name);
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during construction of ResponderT";
  }
  error_string = responder->init(datareader_qos, datawriter_qos,
      avoid_ros_namespace_conventions);
  if (error_string) {
    return error_string;
  }

  *untyped_responder = responder;
  *untyped_reader = responder->get_request_datareader();

  return nullptr;
}

const char *
send_request__AddThreeInts(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_>;
  using ROSRequestT = tutorial_interfaces::srv::AddThreeInts_Request;

  SampleT request;
  auto ros_request = reinterpret_cast<const ROSRequestT *>(untyped_ros_request);
  tutorial_interfaces::srv::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_request, request.data());

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__AddThreeInts(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;
  using ROSRequestT = tutorial_interfaces::srv::AddThreeInts_Request;

  auto ros_request = static_cast<ROSRequestT *>(untyped_ros_request);

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    tutorial_interfaces::srv::typesupport_opensplice_cpp::convert_dds_message_to_ros(request.data(), *ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__AddThreeInts(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ROSResponseT = tutorial_interfaces::srv::AddThreeInts_Response;
  rosidl_typesupport_opensplice_cpp::Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_> response;
  auto ros_response = reinterpret_cast<const ROSResponseT *>(untyped_ros_response);
  tutorial_interfaces::srv::typesupport_opensplice_cpp::convert_ros_message_to_dds(*ros_response, response.data());


  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__AddThreeInts(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using ROSResponseT = tutorial_interfaces::srv::AddThreeInts_Response;
  auto ros_response = static_cast<ROSResponseT *>(untyped_ros_response);

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<tutorial_interfaces::srv::dds_::AddThreeInts_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    tutorial_interfaces::srv::typesupport_opensplice_cpp::convert_dds_message_to_ros(
      response.data(), *ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__AddThreeInts(void * untyped_requester, void (* deallocator)(void *))
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;

  auto requester = static_cast<RequesterT *>(untyped_requester);
  const char * teardown_status = requester->teardown();
  try {
    requester->~RequesterT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of RequesterT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(requester);
  return nullptr;
}

const char *
destroy_responder__AddThreeInts(void * untyped_responder, void (* deallocator)(void *))
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;
  auto responder = static_cast<ResponderT *>(untyped_responder);
  const char * teardown_status = responder->teardown();
  try {
    responder->~ResponderT();
  } catch (...) {
    // TODO(wjwwood): catch errors and add their type and what() to the error.
    // This cannot be done when we just return const char *, so a more complex
    // error reporting will be required for this function if we continue to
    // throw exceptions below.
    return "C++ exception caught during destruction of ResponderT";
  }
  if (teardown_status != nullptr) {
    return teardown_status;
  }
  auto _deallocator = deallocator ? deallocator : &free;
  _deallocator(responder);
  return nullptr;
}

const char *
server_is_available__AddThreeInts(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_,
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_
  >;

  auto typed_requester = reinterpret_cast<RequesterT *>(requester);

  return typed_requester->server_is_available(node, is_available);
}

static service_type_support_callbacks_t AddThreeInts_callbacks = {
  "tutorial_interfaces::srv",
  "AddThreeInts",
  &create_requester__AddThreeInts,
  &destroy_requester__AddThreeInts,
  &create_responder__AddThreeInts,
  &destroy_responder__AddThreeInts,
  &send_request__AddThreeInts,
  &take_request__AddThreeInts,
  &send_response__AddThreeInts,
  &take_response__AddThreeInts,
  &server_is_available__AddThreeInts,
};

static rosidl_service_type_support_t AddThreeInts_handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &AddThreeInts_callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace tutorial_interfaces

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<tutorial_interfaces::srv::AddThreeInts>()
{
  return &tutorial_interfaces::srv::typesupport_opensplice_cpp::AddThreeInts_handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tutorial_interfaces, srv,
  AddThreeInts)() {
  return &tutorial_interfaces::srv::typesupport_opensplice_cpp::AddThreeInts_handle;
}

#ifdef __cplusplus
}
#endif
