#ifndef _H_FBDEE196031BD3855CB633E69DD06CFA_Num__H_
#define _H_FBDEE196031BD3855CB633E69DD06CFA_Num__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace tutorial_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  Num_
            {
                ::DDS::LongLong num_;
            };

            typedef DDS_DCPSStruct_var<Num_> Num__var;
            typedef Num_& Num__out;

        }

    }

}

#endif /* _H_FBDEE196031BD3855CB633E69DD06CFA_Num__H_ */
