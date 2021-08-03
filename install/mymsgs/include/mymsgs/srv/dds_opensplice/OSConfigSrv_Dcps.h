#ifndef _H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv_DCPS_H_
#define _H_419E11AF7AD354BD2188E5D28F8AA388_OSConfigSrv_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "OSConfigSrv_.h"


namespace mymsgs
{
    namespace srv
    {
        namespace dds_
        {
            class OSConfigSrv_Request_TypeSupportInterface;

            typedef OSConfigSrv_Request_TypeSupportInterface * OSConfigSrv_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Request_TypeSupportInterface> OSConfigSrv_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Request_TypeSupportInterface> OSConfigSrv_Request_TypeSupportInterface_out;


            class OSConfigSrv_Request_DataWriter;

            typedef OSConfigSrv_Request_DataWriter * OSConfigSrv_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Request_DataWriter> OSConfigSrv_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Request_DataWriter> OSConfigSrv_Request_DataWriter_out;


            class OSConfigSrv_Request_DataReader;

            typedef OSConfigSrv_Request_DataReader * OSConfigSrv_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Request_DataReader> OSConfigSrv_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Request_DataReader> OSConfigSrv_Request_DataReader_out;


            class OSConfigSrv_Request_DataReaderView;

            typedef OSConfigSrv_Request_DataReaderView * OSConfigSrv_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Request_DataReaderView> OSConfigSrv_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Request_DataReaderView> OSConfigSrv_Request_DataReaderView_out;

            struct OSConfigSrv_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < OSConfigSrv_Request_, struct OSConfigSrv_Request_Seq_uniq_> OSConfigSrv_Request_Seq;
            typedef DDS_DCPSSequence_var < OSConfigSrv_Request_Seq> OSConfigSrv_Request_Seq_var;
            typedef DDS_DCPSSequence_out < OSConfigSrv_Request_Seq> OSConfigSrv_Request_Seq_out;

            class  OSConfigSrv_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef OSConfigSrv_Request_TypeSupportInterface_ptr _ptr_type;
                typedef OSConfigSrv_Request_TypeSupportInterface_var _var_type;

                static OSConfigSrv_Request_TypeSupportInterface_ptr _duplicate (OSConfigSrv_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                OSConfigSrv_Request_TypeSupportInterface () {};
                ~OSConfigSrv_Request_TypeSupportInterface () {};
            private:
                OSConfigSrv_Request_TypeSupportInterface (const OSConfigSrv_Request_TypeSupportInterface &);
                OSConfigSrv_Request_TypeSupportInterface & operator = (const OSConfigSrv_Request_TypeSupportInterface &);
            };

            class  OSConfigSrv_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef OSConfigSrv_Request_DataWriter_ptr _ptr_type;
                typedef OSConfigSrv_Request_DataWriter_var _var_type;

                static OSConfigSrv_Request_DataWriter_ptr _duplicate (OSConfigSrv_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const OSConfigSrv_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const OSConfigSrv_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (OSConfigSrv_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OSConfigSrv_Request_& instance_data) = 0;

            protected:
                OSConfigSrv_Request_DataWriter () {};
                ~OSConfigSrv_Request_DataWriter () {};
            private:
                OSConfigSrv_Request_DataWriter (const OSConfigSrv_Request_DataWriter &);
                OSConfigSrv_Request_DataWriter & operator = (const OSConfigSrv_Request_DataWriter &);
            };

            class  OSConfigSrv_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef OSConfigSrv_Request_DataReader_ptr _ptr_type;
                typedef OSConfigSrv_Request_DataReader_var _var_type;

                static OSConfigSrv_Request_DataReader_ptr _duplicate (OSConfigSrv_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OSConfigSrv_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OSConfigSrv_Request_& instance) = 0;

            protected:
                OSConfigSrv_Request_DataReader () {};
                ~OSConfigSrv_Request_DataReader () {};
            private:
                OSConfigSrv_Request_DataReader (const OSConfigSrv_Request_DataReader &);
                OSConfigSrv_Request_DataReader & operator = (const OSConfigSrv_Request_DataReader &);
            };

            class  OSConfigSrv_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef OSConfigSrv_Request_DataReaderView_ptr _ptr_type;
                typedef OSConfigSrv_Request_DataReaderView_var _var_type;

                static OSConfigSrv_Request_DataReaderView_ptr _duplicate (OSConfigSrv_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OSConfigSrv_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OSConfigSrv_Request_& instance) = 0;

            protected:
                OSConfigSrv_Request_DataReaderView () {};
                ~OSConfigSrv_Request_DataReaderView () {};
            private:
                OSConfigSrv_Request_DataReaderView (const OSConfigSrv_Request_DataReaderView &);
                OSConfigSrv_Request_DataReaderView & operator = (const OSConfigSrv_Request_DataReaderView &);
            };
            class OSConfigSrv_Response_TypeSupportInterface;

            typedef OSConfigSrv_Response_TypeSupportInterface * OSConfigSrv_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Response_TypeSupportInterface> OSConfigSrv_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Response_TypeSupportInterface> OSConfigSrv_Response_TypeSupportInterface_out;


            class OSConfigSrv_Response_DataWriter;

            typedef OSConfigSrv_Response_DataWriter * OSConfigSrv_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Response_DataWriter> OSConfigSrv_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Response_DataWriter> OSConfigSrv_Response_DataWriter_out;


            class OSConfigSrv_Response_DataReader;

            typedef OSConfigSrv_Response_DataReader * OSConfigSrv_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Response_DataReader> OSConfigSrv_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Response_DataReader> OSConfigSrv_Response_DataReader_out;


            class OSConfigSrv_Response_DataReaderView;

            typedef OSConfigSrv_Response_DataReaderView * OSConfigSrv_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < OSConfigSrv_Response_DataReaderView> OSConfigSrv_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < OSConfigSrv_Response_DataReaderView> OSConfigSrv_Response_DataReaderView_out;

            struct OSConfigSrv_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < OSConfigSrv_Response_, struct OSConfigSrv_Response_Seq_uniq_> OSConfigSrv_Response_Seq;
            typedef DDS_DCPSSequence_var < OSConfigSrv_Response_Seq> OSConfigSrv_Response_Seq_var;
            typedef DDS_DCPSSequence_out < OSConfigSrv_Response_Seq> OSConfigSrv_Response_Seq_out;

            class  OSConfigSrv_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef OSConfigSrv_Response_TypeSupportInterface_ptr _ptr_type;
                typedef OSConfigSrv_Response_TypeSupportInterface_var _var_type;

                static OSConfigSrv_Response_TypeSupportInterface_ptr _duplicate (OSConfigSrv_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                OSConfigSrv_Response_TypeSupportInterface () {};
                ~OSConfigSrv_Response_TypeSupportInterface () {};
            private:
                OSConfigSrv_Response_TypeSupportInterface (const OSConfigSrv_Response_TypeSupportInterface &);
                OSConfigSrv_Response_TypeSupportInterface & operator = (const OSConfigSrv_Response_TypeSupportInterface &);
            };

            class  OSConfigSrv_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef OSConfigSrv_Response_DataWriter_ptr _ptr_type;
                typedef OSConfigSrv_Response_DataWriter_var _var_type;

                static OSConfigSrv_Response_DataWriter_ptr _duplicate (OSConfigSrv_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const OSConfigSrv_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const OSConfigSrv_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (OSConfigSrv_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OSConfigSrv_Response_& instance_data) = 0;

            protected:
                OSConfigSrv_Response_DataWriter () {};
                ~OSConfigSrv_Response_DataWriter () {};
            private:
                OSConfigSrv_Response_DataWriter (const OSConfigSrv_Response_DataWriter &);
                OSConfigSrv_Response_DataWriter & operator = (const OSConfigSrv_Response_DataWriter &);
            };

            class  OSConfigSrv_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef OSConfigSrv_Response_DataReader_ptr _ptr_type;
                typedef OSConfigSrv_Response_DataReader_var _var_type;

                static OSConfigSrv_Response_DataReader_ptr _duplicate (OSConfigSrv_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OSConfigSrv_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OSConfigSrv_Response_& instance) = 0;

            protected:
                OSConfigSrv_Response_DataReader () {};
                ~OSConfigSrv_Response_DataReader () {};
            private:
                OSConfigSrv_Response_DataReader (const OSConfigSrv_Response_DataReader &);
                OSConfigSrv_Response_DataReader & operator = (const OSConfigSrv_Response_DataReader &);
            };

            class  OSConfigSrv_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef OSConfigSrv_Response_DataReaderView_ptr _ptr_type;
                typedef OSConfigSrv_Response_DataReaderView_var _var_type;

                static OSConfigSrv_Response_DataReaderView_ptr _duplicate (OSConfigSrv_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OSConfigSrv_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OSConfigSrv_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                OSConfigSrv_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OSConfigSrv_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OSConfigSrv_Response_& instance) = 0;

            protected:
                OSConfigSrv_Response_DataReaderView () {};
                ~OSConfigSrv_Response_DataReaderView () {};
            private:
                OSConfigSrv_Response_DataReaderView (const OSConfigSrv_Response_DataReaderView &);
                OSConfigSrv_Response_DataReaderView & operator = (const OSConfigSrv_Response_DataReaderView &);
            };
            class Sample_OSConfigSrv_Request_TypeSupportInterface;

            typedef Sample_OSConfigSrv_Request_TypeSupportInterface * Sample_OSConfigSrv_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Request_TypeSupportInterface> Sample_OSConfigSrv_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Request_TypeSupportInterface> Sample_OSConfigSrv_Request_TypeSupportInterface_out;


            class Sample_OSConfigSrv_Request_DataWriter;

            typedef Sample_OSConfigSrv_Request_DataWriter * Sample_OSConfigSrv_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Request_DataWriter> Sample_OSConfigSrv_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Request_DataWriter> Sample_OSConfigSrv_Request_DataWriter_out;


            class Sample_OSConfigSrv_Request_DataReader;

            typedef Sample_OSConfigSrv_Request_DataReader * Sample_OSConfigSrv_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Request_DataReader> Sample_OSConfigSrv_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Request_DataReader> Sample_OSConfigSrv_Request_DataReader_out;


            class Sample_OSConfigSrv_Request_DataReaderView;

            typedef Sample_OSConfigSrv_Request_DataReaderView * Sample_OSConfigSrv_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Request_DataReaderView> Sample_OSConfigSrv_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Request_DataReaderView> Sample_OSConfigSrv_Request_DataReaderView_out;

            struct Sample_OSConfigSrv_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_OSConfigSrv_Request_, struct Sample_OSConfigSrv_Request_Seq_uniq_> Sample_OSConfigSrv_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_OSConfigSrv_Request_Seq> Sample_OSConfigSrv_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_OSConfigSrv_Request_Seq> Sample_OSConfigSrv_Request_Seq_out;

            class  Sample_OSConfigSrv_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_OSConfigSrv_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Request_TypeSupportInterface_var _var_type;

                static Sample_OSConfigSrv_Request_TypeSupportInterface_ptr _duplicate (Sample_OSConfigSrv_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_OSConfigSrv_Request_TypeSupportInterface () {};
                ~Sample_OSConfigSrv_Request_TypeSupportInterface () {};
            private:
                Sample_OSConfigSrv_Request_TypeSupportInterface (const Sample_OSConfigSrv_Request_TypeSupportInterface &);
                Sample_OSConfigSrv_Request_TypeSupportInterface & operator = (const Sample_OSConfigSrv_Request_TypeSupportInterface &);
            };

            class  Sample_OSConfigSrv_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_OSConfigSrv_Request_DataWriter_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Request_DataWriter_var _var_type;

                static Sample_OSConfigSrv_Request_DataWriter_ptr _duplicate (Sample_OSConfigSrv_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_OSConfigSrv_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_OSConfigSrv_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_OSConfigSrv_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_OSConfigSrv_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_OSConfigSrv_Request_& instance_data) = 0;

            protected:
                Sample_OSConfigSrv_Request_DataWriter () {};
                ~Sample_OSConfigSrv_Request_DataWriter () {};
            private:
                Sample_OSConfigSrv_Request_DataWriter (const Sample_OSConfigSrv_Request_DataWriter &);
                Sample_OSConfigSrv_Request_DataWriter & operator = (const Sample_OSConfigSrv_Request_DataWriter &);
            };

            class  Sample_OSConfigSrv_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_OSConfigSrv_Request_DataReader_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Request_DataReader_var _var_type;

                static Sample_OSConfigSrv_Request_DataReader_ptr _duplicate (Sample_OSConfigSrv_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_OSConfigSrv_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_OSConfigSrv_Request_& instance) = 0;

            protected:
                Sample_OSConfigSrv_Request_DataReader () {};
                ~Sample_OSConfigSrv_Request_DataReader () {};
            private:
                Sample_OSConfigSrv_Request_DataReader (const Sample_OSConfigSrv_Request_DataReader &);
                Sample_OSConfigSrv_Request_DataReader & operator = (const Sample_OSConfigSrv_Request_DataReader &);
            };

            class  Sample_OSConfigSrv_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_OSConfigSrv_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Request_DataReaderView_var _var_type;

                static Sample_OSConfigSrv_Request_DataReaderView_ptr _duplicate (Sample_OSConfigSrv_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_OSConfigSrv_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_OSConfigSrv_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_OSConfigSrv_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_OSConfigSrv_Request_& instance) = 0;

            protected:
                Sample_OSConfigSrv_Request_DataReaderView () {};
                ~Sample_OSConfigSrv_Request_DataReaderView () {};
            private:
                Sample_OSConfigSrv_Request_DataReaderView (const Sample_OSConfigSrv_Request_DataReaderView &);
                Sample_OSConfigSrv_Request_DataReaderView & operator = (const Sample_OSConfigSrv_Request_DataReaderView &);
            };
            class Sample_OSConfigSrv_Response_TypeSupportInterface;

            typedef Sample_OSConfigSrv_Response_TypeSupportInterface * Sample_OSConfigSrv_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Response_TypeSupportInterface> Sample_OSConfigSrv_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Response_TypeSupportInterface> Sample_OSConfigSrv_Response_TypeSupportInterface_out;


            class Sample_OSConfigSrv_Response_DataWriter;

            typedef Sample_OSConfigSrv_Response_DataWriter * Sample_OSConfigSrv_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Response_DataWriter> Sample_OSConfigSrv_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Response_DataWriter> Sample_OSConfigSrv_Response_DataWriter_out;


            class Sample_OSConfigSrv_Response_DataReader;

            typedef Sample_OSConfigSrv_Response_DataReader * Sample_OSConfigSrv_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Response_DataReader> Sample_OSConfigSrv_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Response_DataReader> Sample_OSConfigSrv_Response_DataReader_out;


            class Sample_OSConfigSrv_Response_DataReaderView;

            typedef Sample_OSConfigSrv_Response_DataReaderView * Sample_OSConfigSrv_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_OSConfigSrv_Response_DataReaderView> Sample_OSConfigSrv_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_OSConfigSrv_Response_DataReaderView> Sample_OSConfigSrv_Response_DataReaderView_out;

            struct Sample_OSConfigSrv_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_OSConfigSrv_Response_, struct Sample_OSConfigSrv_Response_Seq_uniq_> Sample_OSConfigSrv_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_OSConfigSrv_Response_Seq> Sample_OSConfigSrv_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_OSConfigSrv_Response_Seq> Sample_OSConfigSrv_Response_Seq_out;

            class  Sample_OSConfigSrv_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_OSConfigSrv_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Response_TypeSupportInterface_var _var_type;

                static Sample_OSConfigSrv_Response_TypeSupportInterface_ptr _duplicate (Sample_OSConfigSrv_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_OSConfigSrv_Response_TypeSupportInterface () {};
                ~Sample_OSConfigSrv_Response_TypeSupportInterface () {};
            private:
                Sample_OSConfigSrv_Response_TypeSupportInterface (const Sample_OSConfigSrv_Response_TypeSupportInterface &);
                Sample_OSConfigSrv_Response_TypeSupportInterface & operator = (const Sample_OSConfigSrv_Response_TypeSupportInterface &);
            };

            class  Sample_OSConfigSrv_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_OSConfigSrv_Response_DataWriter_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Response_DataWriter_var _var_type;

                static Sample_OSConfigSrv_Response_DataWriter_ptr _duplicate (Sample_OSConfigSrv_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_OSConfigSrv_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_OSConfigSrv_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_OSConfigSrv_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_OSConfigSrv_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_OSConfigSrv_Response_& instance_data) = 0;

            protected:
                Sample_OSConfigSrv_Response_DataWriter () {};
                ~Sample_OSConfigSrv_Response_DataWriter () {};
            private:
                Sample_OSConfigSrv_Response_DataWriter (const Sample_OSConfigSrv_Response_DataWriter &);
                Sample_OSConfigSrv_Response_DataWriter & operator = (const Sample_OSConfigSrv_Response_DataWriter &);
            };

            class  Sample_OSConfigSrv_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_OSConfigSrv_Response_DataReader_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Response_DataReader_var _var_type;

                static Sample_OSConfigSrv_Response_DataReader_ptr _duplicate (Sample_OSConfigSrv_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_OSConfigSrv_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_OSConfigSrv_Response_& instance) = 0;

            protected:
                Sample_OSConfigSrv_Response_DataReader () {};
                ~Sample_OSConfigSrv_Response_DataReader () {};
            private:
                Sample_OSConfigSrv_Response_DataReader (const Sample_OSConfigSrv_Response_DataReader &);
                Sample_OSConfigSrv_Response_DataReader & operator = (const Sample_OSConfigSrv_Response_DataReader &);
            };

            class  Sample_OSConfigSrv_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_OSConfigSrv_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_OSConfigSrv_Response_DataReaderView_var _var_type;

                static Sample_OSConfigSrv_Response_DataReaderView_ptr _duplicate (Sample_OSConfigSrv_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_OSConfigSrv_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_OSConfigSrv_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_OSConfigSrv_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_OSConfigSrv_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_OSConfigSrv_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_OSConfigSrv_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_OSConfigSrv_Response_& instance) = 0;

            protected:
                Sample_OSConfigSrv_Response_DataReaderView () {};
                ~Sample_OSConfigSrv_Response_DataReaderView () {};
            private:
                Sample_OSConfigSrv_Response_DataReaderView (const Sample_OSConfigSrv_Response_DataReaderView &);
                Sample_OSConfigSrv_Response_DataReaderView & operator = (const Sample_OSConfigSrv_Response_DataReaderView &);
            };
        }

    }

}

#endif
