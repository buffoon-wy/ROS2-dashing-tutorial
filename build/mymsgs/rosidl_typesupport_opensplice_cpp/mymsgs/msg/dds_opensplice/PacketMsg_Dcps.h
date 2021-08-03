#ifndef _H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg_DCPS_H_
#define _H_0120F243482B5C76E2EEAED0EF0F86FA_PacketMsg_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PacketMsg_.h"


namespace mymsgs
{
    namespace msg
    {
        namespace dds_
        {
            class PacketMsg_TypeSupportInterface;

            typedef PacketMsg_TypeSupportInterface * PacketMsg_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PacketMsg_TypeSupportInterface> PacketMsg_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PacketMsg_TypeSupportInterface> PacketMsg_TypeSupportInterface_out;


            class PacketMsg_DataWriter;

            typedef PacketMsg_DataWriter * PacketMsg_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PacketMsg_DataWriter> PacketMsg_DataWriter_var;
            typedef DDS_DCPSInterface_out < PacketMsg_DataWriter> PacketMsg_DataWriter_out;


            class PacketMsg_DataReader;

            typedef PacketMsg_DataReader * PacketMsg_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PacketMsg_DataReader> PacketMsg_DataReader_var;
            typedef DDS_DCPSInterface_out < PacketMsg_DataReader> PacketMsg_DataReader_out;


            class PacketMsg_DataReaderView;

            typedef PacketMsg_DataReaderView * PacketMsg_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PacketMsg_DataReaderView> PacketMsg_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PacketMsg_DataReaderView> PacketMsg_DataReaderView_out;

            struct PacketMsg_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PacketMsg_, struct PacketMsg_Seq_uniq_> PacketMsg_Seq;
            typedef DDS_DCPSSequence_var < PacketMsg_Seq> PacketMsg_Seq_var;
            typedef DDS_DCPSSequence_out < PacketMsg_Seq> PacketMsg_Seq_out;

            class  PacketMsg_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PacketMsg_TypeSupportInterface_ptr _ptr_type;
                typedef PacketMsg_TypeSupportInterface_var _var_type;

                static PacketMsg_TypeSupportInterface_ptr _duplicate (PacketMsg_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PacketMsg_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PacketMsg_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PacketMsg_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PacketMsg_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PacketMsg_TypeSupportInterface () {};
                ~PacketMsg_TypeSupportInterface () {};
            private:
                PacketMsg_TypeSupportInterface (const PacketMsg_TypeSupportInterface &);
                PacketMsg_TypeSupportInterface & operator = (const PacketMsg_TypeSupportInterface &);
            };

            class  PacketMsg_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PacketMsg_DataWriter_ptr _ptr_type;
                typedef PacketMsg_DataWriter_var _var_type;

                static PacketMsg_DataWriter_ptr _duplicate (PacketMsg_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PacketMsg_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PacketMsg_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PacketMsg_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PacketMsg_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PacketMsg_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PacketMsg_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PacketMsg_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PacketMsg_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PacketMsg_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PacketMsg_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PacketMsg_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PacketMsg_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PacketMsg_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PacketMsg_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PacketMsg_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PacketMsg_& instance_data) = 0;

            protected:
                PacketMsg_DataWriter () {};
                ~PacketMsg_DataWriter () {};
            private:
                PacketMsg_DataWriter (const PacketMsg_DataWriter &);
                PacketMsg_DataWriter & operator = (const PacketMsg_DataWriter &);
            };

            class  PacketMsg_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PacketMsg_DataReader_ptr _ptr_type;
                typedef PacketMsg_DataReader_var _var_type;

                static PacketMsg_DataReader_ptr _duplicate (PacketMsg_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PacketMsg_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PacketMsg_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PacketMsg_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PacketMsg_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PacketMsg_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PacketMsg_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PacketMsg_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PacketMsg_& instance) = 0;

            protected:
                PacketMsg_DataReader () {};
                ~PacketMsg_DataReader () {};
            private:
                PacketMsg_DataReader (const PacketMsg_DataReader &);
                PacketMsg_DataReader & operator = (const PacketMsg_DataReader &);
            };

            class  PacketMsg_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PacketMsg_DataReaderView_ptr _ptr_type;
                typedef PacketMsg_DataReaderView_var _var_type;

                static PacketMsg_DataReaderView_ptr _duplicate (PacketMsg_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PacketMsg_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PacketMsg_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PacketMsg_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PacketMsg_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PacketMsg_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PacketMsg_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PacketMsg_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PacketMsg_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PacketMsg_& instance) = 0;

            protected:
                PacketMsg_DataReaderView () {};
                ~PacketMsg_DataReaderView () {};
            private:
                PacketMsg_DataReaderView (const PacketMsg_DataReaderView &);
                PacketMsg_DataReaderView & operator = (const PacketMsg_DataReaderView &);
            };
        }

    }

}

#endif
