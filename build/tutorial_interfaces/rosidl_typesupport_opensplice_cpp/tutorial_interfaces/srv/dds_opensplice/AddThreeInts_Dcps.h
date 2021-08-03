#ifndef _H_28CE85F4FF01A7D9FDEC9C5BC77B72F7_AddThreeInts_DCPS_H_
#define _H_28CE85F4FF01A7D9FDEC9C5BC77B72F7_AddThreeInts_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AddThreeInts_.h"


namespace tutorial_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class AddThreeInts_Request_TypeSupportInterface;

            typedef AddThreeInts_Request_TypeSupportInterface * AddThreeInts_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Request_TypeSupportInterface> AddThreeInts_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Request_TypeSupportInterface> AddThreeInts_Request_TypeSupportInterface_out;


            class AddThreeInts_Request_DataWriter;

            typedef AddThreeInts_Request_DataWriter * AddThreeInts_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Request_DataWriter> AddThreeInts_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Request_DataWriter> AddThreeInts_Request_DataWriter_out;


            class AddThreeInts_Request_DataReader;

            typedef AddThreeInts_Request_DataReader * AddThreeInts_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Request_DataReader> AddThreeInts_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Request_DataReader> AddThreeInts_Request_DataReader_out;


            class AddThreeInts_Request_DataReaderView;

            typedef AddThreeInts_Request_DataReaderView * AddThreeInts_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Request_DataReaderView> AddThreeInts_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Request_DataReaderView> AddThreeInts_Request_DataReaderView_out;

            struct AddThreeInts_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < AddThreeInts_Request_, struct AddThreeInts_Request_Seq_uniq_> AddThreeInts_Request_Seq;
            typedef DDS_DCPSSequence_var < AddThreeInts_Request_Seq> AddThreeInts_Request_Seq_var;
            typedef DDS_DCPSSequence_out < AddThreeInts_Request_Seq> AddThreeInts_Request_Seq_out;

            class  AddThreeInts_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddThreeInts_Request_TypeSupportInterface_ptr _ptr_type;
                typedef AddThreeInts_Request_TypeSupportInterface_var _var_type;

                static AddThreeInts_Request_TypeSupportInterface_ptr _duplicate (AddThreeInts_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddThreeInts_Request_TypeSupportInterface () {};
                ~AddThreeInts_Request_TypeSupportInterface () {};
            private:
                AddThreeInts_Request_TypeSupportInterface (const AddThreeInts_Request_TypeSupportInterface &);
                AddThreeInts_Request_TypeSupportInterface & operator = (const AddThreeInts_Request_TypeSupportInterface &);
            };

            class  AddThreeInts_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddThreeInts_Request_DataWriter_ptr _ptr_type;
                typedef AddThreeInts_Request_DataWriter_var _var_type;

                static AddThreeInts_Request_DataWriter_ptr _duplicate (AddThreeInts_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddThreeInts_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddThreeInts_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddThreeInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddThreeInts_Request_& instance_data) = 0;

            protected:
                AddThreeInts_Request_DataWriter () {};
                ~AddThreeInts_Request_DataWriter () {};
            private:
                AddThreeInts_Request_DataWriter (const AddThreeInts_Request_DataWriter &);
                AddThreeInts_Request_DataWriter & operator = (const AddThreeInts_Request_DataWriter &);
            };

            class  AddThreeInts_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddThreeInts_Request_DataReader_ptr _ptr_type;
                typedef AddThreeInts_Request_DataReader_var _var_type;

                static AddThreeInts_Request_DataReader_ptr _duplicate (AddThreeInts_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddThreeInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddThreeInts_Request_& instance) = 0;

            protected:
                AddThreeInts_Request_DataReader () {};
                ~AddThreeInts_Request_DataReader () {};
            private:
                AddThreeInts_Request_DataReader (const AddThreeInts_Request_DataReader &);
                AddThreeInts_Request_DataReader & operator = (const AddThreeInts_Request_DataReader &);
            };

            class  AddThreeInts_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddThreeInts_Request_DataReaderView_ptr _ptr_type;
                typedef AddThreeInts_Request_DataReaderView_var _var_type;

                static AddThreeInts_Request_DataReaderView_ptr _duplicate (AddThreeInts_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddThreeInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddThreeInts_Request_& instance) = 0;

            protected:
                AddThreeInts_Request_DataReaderView () {};
                ~AddThreeInts_Request_DataReaderView () {};
            private:
                AddThreeInts_Request_DataReaderView (const AddThreeInts_Request_DataReaderView &);
                AddThreeInts_Request_DataReaderView & operator = (const AddThreeInts_Request_DataReaderView &);
            };
            class AddThreeInts_Response_TypeSupportInterface;

            typedef AddThreeInts_Response_TypeSupportInterface * AddThreeInts_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Response_TypeSupportInterface> AddThreeInts_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Response_TypeSupportInterface> AddThreeInts_Response_TypeSupportInterface_out;


            class AddThreeInts_Response_DataWriter;

            typedef AddThreeInts_Response_DataWriter * AddThreeInts_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Response_DataWriter> AddThreeInts_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Response_DataWriter> AddThreeInts_Response_DataWriter_out;


            class AddThreeInts_Response_DataReader;

            typedef AddThreeInts_Response_DataReader * AddThreeInts_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Response_DataReader> AddThreeInts_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Response_DataReader> AddThreeInts_Response_DataReader_out;


            class AddThreeInts_Response_DataReaderView;

            typedef AddThreeInts_Response_DataReaderView * AddThreeInts_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddThreeInts_Response_DataReaderView> AddThreeInts_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddThreeInts_Response_DataReaderView> AddThreeInts_Response_DataReaderView_out;

            struct AddThreeInts_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < AddThreeInts_Response_, struct AddThreeInts_Response_Seq_uniq_> AddThreeInts_Response_Seq;
            typedef DDS_DCPSSequence_var < AddThreeInts_Response_Seq> AddThreeInts_Response_Seq_var;
            typedef DDS_DCPSSequence_out < AddThreeInts_Response_Seq> AddThreeInts_Response_Seq_out;

            class  AddThreeInts_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddThreeInts_Response_TypeSupportInterface_ptr _ptr_type;
                typedef AddThreeInts_Response_TypeSupportInterface_var _var_type;

                static AddThreeInts_Response_TypeSupportInterface_ptr _duplicate (AddThreeInts_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddThreeInts_Response_TypeSupportInterface () {};
                ~AddThreeInts_Response_TypeSupportInterface () {};
            private:
                AddThreeInts_Response_TypeSupportInterface (const AddThreeInts_Response_TypeSupportInterface &);
                AddThreeInts_Response_TypeSupportInterface & operator = (const AddThreeInts_Response_TypeSupportInterface &);
            };

            class  AddThreeInts_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddThreeInts_Response_DataWriter_ptr _ptr_type;
                typedef AddThreeInts_Response_DataWriter_var _var_type;

                static AddThreeInts_Response_DataWriter_ptr _duplicate (AddThreeInts_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddThreeInts_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddThreeInts_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddThreeInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddThreeInts_Response_& instance_data) = 0;

            protected:
                AddThreeInts_Response_DataWriter () {};
                ~AddThreeInts_Response_DataWriter () {};
            private:
                AddThreeInts_Response_DataWriter (const AddThreeInts_Response_DataWriter &);
                AddThreeInts_Response_DataWriter & operator = (const AddThreeInts_Response_DataWriter &);
            };

            class  AddThreeInts_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddThreeInts_Response_DataReader_ptr _ptr_type;
                typedef AddThreeInts_Response_DataReader_var _var_type;

                static AddThreeInts_Response_DataReader_ptr _duplicate (AddThreeInts_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddThreeInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddThreeInts_Response_& instance) = 0;

            protected:
                AddThreeInts_Response_DataReader () {};
                ~AddThreeInts_Response_DataReader () {};
            private:
                AddThreeInts_Response_DataReader (const AddThreeInts_Response_DataReader &);
                AddThreeInts_Response_DataReader & operator = (const AddThreeInts_Response_DataReader &);
            };

            class  AddThreeInts_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddThreeInts_Response_DataReaderView_ptr _ptr_type;
                typedef AddThreeInts_Response_DataReaderView_var _var_type;

                static AddThreeInts_Response_DataReaderView_ptr _duplicate (AddThreeInts_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddThreeInts_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddThreeInts_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddThreeInts_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddThreeInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddThreeInts_Response_& instance) = 0;

            protected:
                AddThreeInts_Response_DataReaderView () {};
                ~AddThreeInts_Response_DataReaderView () {};
            private:
                AddThreeInts_Response_DataReaderView (const AddThreeInts_Response_DataReaderView &);
                AddThreeInts_Response_DataReaderView & operator = (const AddThreeInts_Response_DataReaderView &);
            };
            class Sample_AddThreeInts_Request_TypeSupportInterface;

            typedef Sample_AddThreeInts_Request_TypeSupportInterface * Sample_AddThreeInts_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Request_TypeSupportInterface> Sample_AddThreeInts_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Request_TypeSupportInterface> Sample_AddThreeInts_Request_TypeSupportInterface_out;


            class Sample_AddThreeInts_Request_DataWriter;

            typedef Sample_AddThreeInts_Request_DataWriter * Sample_AddThreeInts_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Request_DataWriter> Sample_AddThreeInts_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Request_DataWriter> Sample_AddThreeInts_Request_DataWriter_out;


            class Sample_AddThreeInts_Request_DataReader;

            typedef Sample_AddThreeInts_Request_DataReader * Sample_AddThreeInts_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Request_DataReader> Sample_AddThreeInts_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Request_DataReader> Sample_AddThreeInts_Request_DataReader_out;


            class Sample_AddThreeInts_Request_DataReaderView;

            typedef Sample_AddThreeInts_Request_DataReaderView * Sample_AddThreeInts_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Request_DataReaderView> Sample_AddThreeInts_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Request_DataReaderView> Sample_AddThreeInts_Request_DataReaderView_out;

            struct Sample_AddThreeInts_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_AddThreeInts_Request_, struct Sample_AddThreeInts_Request_Seq_uniq_> Sample_AddThreeInts_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_AddThreeInts_Request_Seq> Sample_AddThreeInts_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_AddThreeInts_Request_Seq> Sample_AddThreeInts_Request_Seq_out;

            class  Sample_AddThreeInts_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_AddThreeInts_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_AddThreeInts_Request_TypeSupportInterface_var _var_type;

                static Sample_AddThreeInts_Request_TypeSupportInterface_ptr _duplicate (Sample_AddThreeInts_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_AddThreeInts_Request_TypeSupportInterface () {};
                ~Sample_AddThreeInts_Request_TypeSupportInterface () {};
            private:
                Sample_AddThreeInts_Request_TypeSupportInterface (const Sample_AddThreeInts_Request_TypeSupportInterface &);
                Sample_AddThreeInts_Request_TypeSupportInterface & operator = (const Sample_AddThreeInts_Request_TypeSupportInterface &);
            };

            class  Sample_AddThreeInts_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_AddThreeInts_Request_DataWriter_ptr _ptr_type;
                typedef Sample_AddThreeInts_Request_DataWriter_var _var_type;

                static Sample_AddThreeInts_Request_DataWriter_ptr _duplicate (Sample_AddThreeInts_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_AddThreeInts_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_AddThreeInts_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_AddThreeInts_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_AddThreeInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddThreeInts_Request_& instance_data) = 0;

            protected:
                Sample_AddThreeInts_Request_DataWriter () {};
                ~Sample_AddThreeInts_Request_DataWriter () {};
            private:
                Sample_AddThreeInts_Request_DataWriter (const Sample_AddThreeInts_Request_DataWriter &);
                Sample_AddThreeInts_Request_DataWriter & operator = (const Sample_AddThreeInts_Request_DataWriter &);
            };

            class  Sample_AddThreeInts_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_AddThreeInts_Request_DataReader_ptr _ptr_type;
                typedef Sample_AddThreeInts_Request_DataReader_var _var_type;

                static Sample_AddThreeInts_Request_DataReader_ptr _duplicate (Sample_AddThreeInts_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddThreeInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddThreeInts_Request_& instance) = 0;

            protected:
                Sample_AddThreeInts_Request_DataReader () {};
                ~Sample_AddThreeInts_Request_DataReader () {};
            private:
                Sample_AddThreeInts_Request_DataReader (const Sample_AddThreeInts_Request_DataReader &);
                Sample_AddThreeInts_Request_DataReader & operator = (const Sample_AddThreeInts_Request_DataReader &);
            };

            class  Sample_AddThreeInts_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_AddThreeInts_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_AddThreeInts_Request_DataReaderView_var _var_type;

                static Sample_AddThreeInts_Request_DataReaderView_ptr _duplicate (Sample_AddThreeInts_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddThreeInts_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddThreeInts_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddThreeInts_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddThreeInts_Request_& instance) = 0;

            protected:
                Sample_AddThreeInts_Request_DataReaderView () {};
                ~Sample_AddThreeInts_Request_DataReaderView () {};
            private:
                Sample_AddThreeInts_Request_DataReaderView (const Sample_AddThreeInts_Request_DataReaderView &);
                Sample_AddThreeInts_Request_DataReaderView & operator = (const Sample_AddThreeInts_Request_DataReaderView &);
            };
            class Sample_AddThreeInts_Response_TypeSupportInterface;

            typedef Sample_AddThreeInts_Response_TypeSupportInterface * Sample_AddThreeInts_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Response_TypeSupportInterface> Sample_AddThreeInts_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Response_TypeSupportInterface> Sample_AddThreeInts_Response_TypeSupportInterface_out;


            class Sample_AddThreeInts_Response_DataWriter;

            typedef Sample_AddThreeInts_Response_DataWriter * Sample_AddThreeInts_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Response_DataWriter> Sample_AddThreeInts_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Response_DataWriter> Sample_AddThreeInts_Response_DataWriter_out;


            class Sample_AddThreeInts_Response_DataReader;

            typedef Sample_AddThreeInts_Response_DataReader * Sample_AddThreeInts_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Response_DataReader> Sample_AddThreeInts_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Response_DataReader> Sample_AddThreeInts_Response_DataReader_out;


            class Sample_AddThreeInts_Response_DataReaderView;

            typedef Sample_AddThreeInts_Response_DataReaderView * Sample_AddThreeInts_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_AddThreeInts_Response_DataReaderView> Sample_AddThreeInts_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_AddThreeInts_Response_DataReaderView> Sample_AddThreeInts_Response_DataReaderView_out;

            struct Sample_AddThreeInts_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_AddThreeInts_Response_, struct Sample_AddThreeInts_Response_Seq_uniq_> Sample_AddThreeInts_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_AddThreeInts_Response_Seq> Sample_AddThreeInts_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_AddThreeInts_Response_Seq> Sample_AddThreeInts_Response_Seq_out;

            class  Sample_AddThreeInts_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_AddThreeInts_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_AddThreeInts_Response_TypeSupportInterface_var _var_type;

                static Sample_AddThreeInts_Response_TypeSupportInterface_ptr _duplicate (Sample_AddThreeInts_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_AddThreeInts_Response_TypeSupportInterface () {};
                ~Sample_AddThreeInts_Response_TypeSupportInterface () {};
            private:
                Sample_AddThreeInts_Response_TypeSupportInterface (const Sample_AddThreeInts_Response_TypeSupportInterface &);
                Sample_AddThreeInts_Response_TypeSupportInterface & operator = (const Sample_AddThreeInts_Response_TypeSupportInterface &);
            };

            class  Sample_AddThreeInts_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_AddThreeInts_Response_DataWriter_ptr _ptr_type;
                typedef Sample_AddThreeInts_Response_DataWriter_var _var_type;

                static Sample_AddThreeInts_Response_DataWriter_ptr _duplicate (Sample_AddThreeInts_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_AddThreeInts_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_AddThreeInts_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_AddThreeInts_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_AddThreeInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddThreeInts_Response_& instance_data) = 0;

            protected:
                Sample_AddThreeInts_Response_DataWriter () {};
                ~Sample_AddThreeInts_Response_DataWriter () {};
            private:
                Sample_AddThreeInts_Response_DataWriter (const Sample_AddThreeInts_Response_DataWriter &);
                Sample_AddThreeInts_Response_DataWriter & operator = (const Sample_AddThreeInts_Response_DataWriter &);
            };

            class  Sample_AddThreeInts_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_AddThreeInts_Response_DataReader_ptr _ptr_type;
                typedef Sample_AddThreeInts_Response_DataReader_var _var_type;

                static Sample_AddThreeInts_Response_DataReader_ptr _duplicate (Sample_AddThreeInts_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddThreeInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddThreeInts_Response_& instance) = 0;

            protected:
                Sample_AddThreeInts_Response_DataReader () {};
                ~Sample_AddThreeInts_Response_DataReader () {};
            private:
                Sample_AddThreeInts_Response_DataReader (const Sample_AddThreeInts_Response_DataReader &);
                Sample_AddThreeInts_Response_DataReader & operator = (const Sample_AddThreeInts_Response_DataReader &);
            };

            class  Sample_AddThreeInts_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_AddThreeInts_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_AddThreeInts_Response_DataReaderView_var _var_type;

                static Sample_AddThreeInts_Response_DataReaderView_ptr _duplicate (Sample_AddThreeInts_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_AddThreeInts_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_AddThreeInts_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_AddThreeInts_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_AddThreeInts_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_AddThreeInts_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_AddThreeInts_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_AddThreeInts_Response_& instance) = 0;

            protected:
                Sample_AddThreeInts_Response_DataReaderView () {};
                ~Sample_AddThreeInts_Response_DataReaderView () {};
            private:
                Sample_AddThreeInts_Response_DataReaderView (const Sample_AddThreeInts_Response_DataReaderView &);
                Sample_AddThreeInts_Response_DataReaderView & operator = (const Sample_AddThreeInts_Response_DataReaderView &);
            };
        }

    }

}

#endif
