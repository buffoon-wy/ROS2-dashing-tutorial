#ifndef H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook_SPLTYPES_H
#define H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AddressBook_.h"


extern c_metaObject __AddressBook__more_interfaces__load (c_base base);

extern c_metaObject __AddressBook__more_interfaces_msg__load (c_base base);

extern c_metaObject __AddressBook__more_interfaces_msg_dds___load (c_base base);

extern c_metaObject __AddressBook__more_interfaces_msg_dds__AddressBook_Constants__load (c_base base);

extern const char *more_interfaces_msg_dds__AddressBook__metaDescriptor[];
extern const int more_interfaces_msg_dds__AddressBook__metaDescriptorArrLength;
extern const int more_interfaces_msg_dds__AddressBook__metaDescriptorLength;
extern c_metaObject __more_interfaces_msg_dds__AddressBook___load (c_base base);
struct _more_interfaces_msg_dds__AddressBook_ ;
extern  v_copyin_result __more_interfaces_msg_dds__AddressBook___copyIn(c_base base, const struct more_interfaces::msg::dds_::AddressBook_ *from, struct _more_interfaces_msg_dds__AddressBook_ *to);
extern  void __more_interfaces_msg_dds__AddressBook___copyOut(const void *_from, void *_to);
struct _more_interfaces_msg_dds__AddressBook_ {
    c_string first_name_;
    c_string last_name_;
    c_bool gender_;
    c_octet age_;
    c_string address_;
};

#undef OS_API
#endif
