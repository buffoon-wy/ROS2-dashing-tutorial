#ifndef H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg_SPLTYPES_H
#define H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_PacketMsg_.h"


extern c_metaObject __PacketMsg__mymsgs__load (c_base base);

extern c_metaObject __PacketMsg__mymsgs_msg__load (c_base base);

extern c_metaObject __PacketMsg__mymsgs_msg_dds___load (c_base base);

extern const char *mymsgs_msg_dds__PacketMsg__metaDescriptor[];
extern const int mymsgs_msg_dds__PacketMsg__metaDescriptorArrLength;
extern const int mymsgs_msg_dds__PacketMsg__metaDescriptorLength;
extern c_metaObject __mymsgs_msg_dds__PacketMsg___load (c_base base);
struct _mymsgs_msg_dds__PacketMsg_ ;
extern  v_copyin_result __mymsgs_msg_dds__PacketMsg___copyIn(c_base base, const struct mymsgs::msg::dds_::PacketMsg_ *from, struct _mymsgs_msg_dds__PacketMsg_ *to);
extern  void __mymsgs_msg_dds__PacketMsg___copyOut(const void *_from, void *_to);
struct _mymsgs_msg_dds__PacketMsg_ {
    c_sequence buf_;
};

#undef OS_API
#endif
