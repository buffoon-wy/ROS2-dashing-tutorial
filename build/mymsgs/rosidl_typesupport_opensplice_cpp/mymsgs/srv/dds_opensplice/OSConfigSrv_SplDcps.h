#ifndef H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv_SPLTYPES_H
#define H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_OSConfigSrv_.h"


extern c_metaObject __OSConfigSrv__mymsgs__load (c_base base);

extern c_metaObject __OSConfigSrv__mymsgs_srv__load (c_base base);

extern c_metaObject __OSConfigSrv__mymsgs_srv_dds___load (c_base base);

extern const char *mymsgs_srv_dds__OSConfigSrv_Request__metaDescriptor[];
extern const int mymsgs_srv_dds__OSConfigSrv_Request__metaDescriptorArrLength;
extern const int mymsgs_srv_dds__OSConfigSrv_Request__metaDescriptorLength;
extern c_metaObject __mymsgs_srv_dds__OSConfigSrv_Request___load (c_base base);
struct _mymsgs_srv_dds__OSConfigSrv_Request_ ;
extern  v_copyin_result __mymsgs_srv_dds__OSConfigSrv_Request___copyIn(c_base base, const struct mymsgs::srv::dds_::OSConfigSrv_Request_ *from, struct _mymsgs_srv_dds__OSConfigSrv_Request_ *to);
extern  void __mymsgs_srv_dds__OSConfigSrv_Request___copyOut(const void *_from, void *_to);
struct _mymsgs_srv_dds__OSConfigSrv_Request_ {
    c_octet structure_needs_at_least_one_member_;
};

extern const char *mymsgs_srv_dds__OSConfigSrv_Response__metaDescriptor[];
extern const int mymsgs_srv_dds__OSConfigSrv_Response__metaDescriptorArrLength;
extern const int mymsgs_srv_dds__OSConfigSrv_Response__metaDescriptorLength;
extern c_metaObject __mymsgs_srv_dds__OSConfigSrv_Response___load (c_base base);
struct _mymsgs_srv_dds__OSConfigSrv_Response_ ;
extern  v_copyin_result __mymsgs_srv_dds__OSConfigSrv_Response___copyIn(c_base base, const struct mymsgs::srv::dds_::OSConfigSrv_Response_ *from, struct _mymsgs_srv_dds__OSConfigSrv_Response_ *to);
extern  void __mymsgs_srv_dds__OSConfigSrv_Response___copyOut(const void *_from, void *_to);
struct _mymsgs_srv_dds__OSConfigSrv_Response_ {
    c_string metadata_;
};

extern const char *mymsgs_srv_dds__Sample_OSConfigSrv_Request__metaDescriptor[];
extern const int mymsgs_srv_dds__Sample_OSConfigSrv_Request__metaDescriptorArrLength;
extern const int mymsgs_srv_dds__Sample_OSConfigSrv_Request__metaDescriptorLength;
extern c_metaObject __mymsgs_srv_dds__Sample_OSConfigSrv_Request___load (c_base base);
struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ ;
extern  v_copyin_result __mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyIn(c_base base, const struct mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *from, struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ *to);
extern  void __mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyOut(const void *_from, void *_to);
struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _mymsgs_srv_dds__OSConfigSrv_Request_ request_;
};

extern const char *mymsgs_srv_dds__Sample_OSConfigSrv_Response__metaDescriptor[];
extern const int mymsgs_srv_dds__Sample_OSConfigSrv_Response__metaDescriptorArrLength;
extern const int mymsgs_srv_dds__Sample_OSConfigSrv_Response__metaDescriptorLength;
extern c_metaObject __mymsgs_srv_dds__Sample_OSConfigSrv_Response___load (c_base base);
struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ ;
extern  v_copyin_result __mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyIn(c_base base, const struct mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *from, struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ *to);
extern  void __mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyOut(const void *_from, void *_to);
struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _mymsgs_srv_dds__OSConfigSrv_Response_ response_;
};

#undef OS_API
#endif
