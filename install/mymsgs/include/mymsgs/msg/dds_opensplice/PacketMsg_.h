#ifndef _H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg__H_
#define _H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace mymsgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  PacketMsg_
            {
                struct _buf__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _buf__seq_uniq_ > _buf__seq;
                typedef DDS_DCPSSequence_var< _buf__seq > _buf__seq_var;
                typedef DDS_DCPSSequence_out< _buf__seq > _buf__seq_out;
                _buf__seq buf_;
            };

            typedef DDS_DCPSStruct_var<PacketMsg_> PacketMsg__var;
            typedef DDS_DCPSStruct_out < PacketMsg_> PacketMsg__out;

        }

    }

}

#endif /* _H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg__H_ */
