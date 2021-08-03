#ifndef _H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook_DCPS_H_
#define _H_44251D9CA3E854F8A9C7D5906B8CF669_AddressBook_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "AddressBook_.h"


namespace more_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class AddressBook_TypeSupportInterface;

            typedef AddressBook_TypeSupportInterface * AddressBook_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < AddressBook_TypeSupportInterface> AddressBook_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < AddressBook_TypeSupportInterface> AddressBook_TypeSupportInterface_out;


            class AddressBook_DataWriter;

            typedef AddressBook_DataWriter * AddressBook_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < AddressBook_DataWriter> AddressBook_DataWriter_var;
            typedef DDS_DCPSInterface_out < AddressBook_DataWriter> AddressBook_DataWriter_out;


            class AddressBook_DataReader;

            typedef AddressBook_DataReader * AddressBook_DataReader_ptr;
            typedef DDS_DCPSInterface_var < AddressBook_DataReader> AddressBook_DataReader_var;
            typedef DDS_DCPSInterface_out < AddressBook_DataReader> AddressBook_DataReader_out;


            class AddressBook_DataReaderView;

            typedef AddressBook_DataReaderView * AddressBook_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < AddressBook_DataReaderView> AddressBook_DataReaderView_var;
            typedef DDS_DCPSInterface_out < AddressBook_DataReaderView> AddressBook_DataReaderView_out;

            struct AddressBook_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < AddressBook_, struct AddressBook_Seq_uniq_> AddressBook_Seq;
            typedef DDS_DCPSSequence_var < AddressBook_Seq> AddressBook_Seq_var;
            typedef DDS_DCPSSequence_out < AddressBook_Seq> AddressBook_Seq_out;

            class  AddressBook_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef AddressBook_TypeSupportInterface_ptr _ptr_type;
                typedef AddressBook_TypeSupportInterface_var _var_type;

                static AddressBook_TypeSupportInterface_ptr _duplicate (AddressBook_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddressBook_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static AddressBook_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddressBook_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                AddressBook_TypeSupportInterface_ptr _this () { return this; }


            protected:
                AddressBook_TypeSupportInterface () {};
                ~AddressBook_TypeSupportInterface () {};
            private:
                AddressBook_TypeSupportInterface (const AddressBook_TypeSupportInterface &);
                AddressBook_TypeSupportInterface & operator = (const AddressBook_TypeSupportInterface &);
            };

            class  AddressBook_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef AddressBook_DataWriter_ptr _ptr_type;
                typedef AddressBook_DataWriter_var _var_type;

                static AddressBook_DataWriter_ptr _duplicate (AddressBook_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddressBook_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static AddressBook_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddressBook_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                AddressBook_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const AddressBook_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const AddressBook_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const AddressBook_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const AddressBook_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const AddressBook_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const AddressBook_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const AddressBook_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const AddressBook_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const AddressBook_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const AddressBook_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (AddressBook_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddressBook_& instance_data) = 0;

            protected:
                AddressBook_DataWriter () {};
                ~AddressBook_DataWriter () {};
            private:
                AddressBook_DataWriter (const AddressBook_DataWriter &);
                AddressBook_DataWriter & operator = (const AddressBook_DataWriter &);
            };

            class  AddressBook_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef AddressBook_DataReader_ptr _ptr_type;
                typedef AddressBook_DataReader_var _var_type;

                static AddressBook_DataReader_ptr _duplicate (AddressBook_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddressBook_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static AddressBook_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddressBook_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                AddressBook_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddressBook_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddressBook_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddressBook_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddressBook_& instance) = 0;

            protected:
                AddressBook_DataReader () {};
                ~AddressBook_DataReader () {};
            private:
                AddressBook_DataReader (const AddressBook_DataReader &);
                AddressBook_DataReader & operator = (const AddressBook_DataReader &);
            };

            class  AddressBook_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef AddressBook_DataReaderView_ptr _ptr_type;
                typedef AddressBook_DataReaderView_var _var_type;

                static AddressBook_DataReaderView_ptr _duplicate (AddressBook_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static AddressBook_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static AddressBook_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static AddressBook_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                AddressBook_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (AddressBook_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (AddressBook_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (AddressBook_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (AddressBook_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const AddressBook_& instance) = 0;

            protected:
                AddressBook_DataReaderView () {};
                ~AddressBook_DataReaderView () {};
            private:
                AddressBook_DataReaderView (const AddressBook_DataReaderView &);
                AddressBook_DataReaderView & operator = (const AddressBook_DataReaderView &);
            };
        }

    }

}

#endif
