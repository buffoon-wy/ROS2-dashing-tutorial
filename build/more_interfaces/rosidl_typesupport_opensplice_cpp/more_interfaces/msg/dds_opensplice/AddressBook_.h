#ifndef _H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook__H_
#define _H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace more_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            namespace AddressBook_Constants
            {
                const ::DDS::Boolean FEMALE_ = TRUE;

                const ::DDS::Boolean MALE_ = FALSE;

            }

            struct  AddressBook_
            {
                ::DDS::String_mgr first_name_;
                ::DDS::String_mgr last_name_;
                ::DDS::Boolean gender_;
                ::DDS::Octet age_;
                ::DDS::String_mgr address_;
            };

            typedef DDS_DCPSStruct_var<AddressBook_> AddressBook__var;
            typedef DDS_DCPSStruct_out < AddressBook_> AddressBook__out;

        }

    }

}

#endif /* _H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook__H_ */
