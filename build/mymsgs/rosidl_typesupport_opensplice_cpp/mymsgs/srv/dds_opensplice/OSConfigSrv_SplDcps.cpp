#include "OSConfigSrv_SplDcps.h"
#include "ccpp_OSConfigSrv_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__mymsgs_srv_dds__OSConfigSrv_Request___copyIn(
    c_base base,
    const struct ::mymsgs::srv::dds_::OSConfigSrv_Request_ *from,
    struct _mymsgs_srv_dds__OSConfigSrv_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->structure_needs_at_least_one_member_ = (c_octet)from->structure_needs_at_least_one_member_;
    return result;
}

v_copyin_result
__mymsgs_srv_dds__OSConfigSrv_Response___copyIn(
    c_base base,
    const struct ::mymsgs::srv::dds_::OSConfigSrv_Response_ *from,
    struct _mymsgs_srv_dds__OSConfigSrv_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->metadata_){
        to->metadata_ = c_stringNew_s(base, from->metadata_);
        if(to->metadata_ == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'mymsgs::srv::dds_::OSConfigSrv_Response_.metadata_' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->metadata_ = c_stringNew_s(base, from->metadata_);
    if(to->metadata_ == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    return result;
}

v_copyin_result
__mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyIn(
    c_base base,
    const struct ::mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *from,
    struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __mymsgs_srv_dds__OSConfigSrv_Request___copyIn(c_base, const ::mymsgs::srv::dds_::OSConfigSrv_Request_ *, _mymsgs_srv_dds__OSConfigSrv_Request_ *);
        result = __mymsgs_srv_dds__OSConfigSrv_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyIn(
    c_base base,
    const struct ::mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *from,
    struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __mymsgs_srv_dds__OSConfigSrv_Response___copyIn(c_base, const ::mymsgs::srv::dds_::OSConfigSrv_Response_ *, _mymsgs_srv_dds__OSConfigSrv_Response_ *);
        result = __mymsgs_srv_dds__OSConfigSrv_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__mymsgs_srv_dds__OSConfigSrv_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _mymsgs_srv_dds__OSConfigSrv_Request_ *from = (const struct _mymsgs_srv_dds__OSConfigSrv_Request_ *)_from;
    struct ::mymsgs::srv::dds_::OSConfigSrv_Request_ *to = (struct ::mymsgs::srv::dds_::OSConfigSrv_Request_ *)_to;
    to->structure_needs_at_least_one_member_ = (::DDS::Octet)from->structure_needs_at_least_one_member_;
}

void
__mymsgs_srv_dds__OSConfigSrv_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _mymsgs_srv_dds__OSConfigSrv_Response_ *from = (const struct _mymsgs_srv_dds__OSConfigSrv_Response_ *)_from;
    struct ::mymsgs::srv::dds_::OSConfigSrv_Response_ *to = (struct ::mymsgs::srv::dds_::OSConfigSrv_Response_ *)_to;
    to->metadata_ = DDS::string_dup(from->metadata_ ? from->metadata_ : "");
}

void
__mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ *from = (const struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ *)_from;
    struct ::mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *to = (struct ::mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __mymsgs_srv_dds__OSConfigSrv_Request___copyOut(const void *, void *);
        __mymsgs_srv_dds__OSConfigSrv_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ *from = (const struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ *)_from;
    struct ::mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *to = (struct ::mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __mymsgs_srv_dds__OSConfigSrv_Response___copyOut(const void *, void *);
        __mymsgs_srv_dds__OSConfigSrv_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

