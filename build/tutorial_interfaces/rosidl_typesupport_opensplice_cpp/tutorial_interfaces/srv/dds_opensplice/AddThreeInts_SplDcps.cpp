#include "AddThreeInts_SplDcps.h"
#include "ccpp_AddThreeInts_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__tutorial_interfaces_srv_dds__AddThreeInts_Request___copyIn(
    c_base base,
    const struct ::tutorial_interfaces::srv::dds_::AddThreeInts_Request_ *from,
    struct _tutorial_interfaces_srv_dds__AddThreeInts_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->a_ = (c_longlong)from->a_;
    to->b_ = (c_longlong)from->b_;
    to->c_ = (c_longlong)from->c_;
    return result;
}

v_copyin_result
__tutorial_interfaces_srv_dds__AddThreeInts_Response___copyIn(
    c_base base,
    const struct ::tutorial_interfaces::srv::dds_::AddThreeInts_Response_ *from,
    struct _tutorial_interfaces_srv_dds__AddThreeInts_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->sum_ = (c_longlong)from->sum_;
    return result;
}

v_copyin_result
__tutorial_interfaces_srv_dds__Sample_AddThreeInts_Request___copyIn(
    c_base base,
    const struct ::tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_ *from,
    struct _tutorial_interfaces_srv_dds__Sample_AddThreeInts_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __tutorial_interfaces_srv_dds__AddThreeInts_Request___copyIn(c_base, const ::tutorial_interfaces::srv::dds_::AddThreeInts_Request_ *, _tutorial_interfaces_srv_dds__AddThreeInts_Request_ *);
        result = __tutorial_interfaces_srv_dds__AddThreeInts_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__tutorial_interfaces_srv_dds__Sample_AddThreeInts_Response___copyIn(
    c_base base,
    const struct ::tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_ *from,
    struct _tutorial_interfaces_srv_dds__Sample_AddThreeInts_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __tutorial_interfaces_srv_dds__AddThreeInts_Response___copyIn(c_base, const ::tutorial_interfaces::srv::dds_::AddThreeInts_Response_ *, _tutorial_interfaces_srv_dds__AddThreeInts_Response_ *);
        result = __tutorial_interfaces_srv_dds__AddThreeInts_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__tutorial_interfaces_srv_dds__AddThreeInts_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _tutorial_interfaces_srv_dds__AddThreeInts_Request_ *from = (const struct _tutorial_interfaces_srv_dds__AddThreeInts_Request_ *)_from;
    struct ::tutorial_interfaces::srv::dds_::AddThreeInts_Request_ *to = (struct ::tutorial_interfaces::srv::dds_::AddThreeInts_Request_ *)_to;
    to->a_ = (::DDS::LongLong)from->a_;
    to->b_ = (::DDS::LongLong)from->b_;
    to->c_ = (::DDS::LongLong)from->c_;
}

void
__tutorial_interfaces_srv_dds__AddThreeInts_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _tutorial_interfaces_srv_dds__AddThreeInts_Response_ *from = (const struct _tutorial_interfaces_srv_dds__AddThreeInts_Response_ *)_from;
    struct ::tutorial_interfaces::srv::dds_::AddThreeInts_Response_ *to = (struct ::tutorial_interfaces::srv::dds_::AddThreeInts_Response_ *)_to;
    to->sum_ = (::DDS::LongLong)from->sum_;
}

void
__tutorial_interfaces_srv_dds__Sample_AddThreeInts_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _tutorial_interfaces_srv_dds__Sample_AddThreeInts_Request_ *from = (const struct _tutorial_interfaces_srv_dds__Sample_AddThreeInts_Request_ *)_from;
    struct ::tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_ *to = (struct ::tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __tutorial_interfaces_srv_dds__AddThreeInts_Request___copyOut(const void *, void *);
        __tutorial_interfaces_srv_dds__AddThreeInts_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__tutorial_interfaces_srv_dds__Sample_AddThreeInts_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _tutorial_interfaces_srv_dds__Sample_AddThreeInts_Response_ *from = (const struct _tutorial_interfaces_srv_dds__Sample_AddThreeInts_Response_ *)_from;
    struct ::tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_ *to = (struct ::tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __tutorial_interfaces_srv_dds__AddThreeInts_Response___copyOut(const void *, void *);
        __tutorial_interfaces_srv_dds__AddThreeInts_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

