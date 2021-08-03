#ifndef _H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv__H_
#define _H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace mymsgs
{
    namespace srv
    {
        namespace dds_
        {
            struct  OSConfigSrv_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<OSConfigSrv_Request_> OSConfigSrv_Request__var;
            typedef OSConfigSrv_Request_& OSConfigSrv_Request__out;

            struct  OSConfigSrv_Response_
            {
                ::DDS::String_mgr metadata_;
            };

            typedef DDS_DCPSStruct_var<OSConfigSrv_Response_> OSConfigSrv_Response__var;
            typedef DDS_DCPSStruct_out < OSConfigSrv_Response_> OSConfigSrv_Response__out;

            struct  Sample_OSConfigSrv_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::mymsgs::srv::dds_::OSConfigSrv_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_OSConfigSrv_Request_> Sample_OSConfigSrv_Request__var;
            typedef Sample_OSConfigSrv_Request_& Sample_OSConfigSrv_Request__out;

            struct  Sample_OSConfigSrv_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::mymsgs::srv::dds_::OSConfigSrv_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_OSConfigSrv_Response_> Sample_OSConfigSrv_Response__var;
            typedef DDS_DCPSStruct_out < Sample_OSConfigSrv_Response_> Sample_OSConfigSrv_Response__out;

        }

    }

}

#endif /* _H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv__H_ */
