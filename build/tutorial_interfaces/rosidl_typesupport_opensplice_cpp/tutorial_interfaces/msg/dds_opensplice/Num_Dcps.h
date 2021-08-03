#ifndef _H_FBDEE196031BD3855CB633E69DD06CFA_Num_DCPS_H_
#define _H_FBDEE196031BD3855CB633E69DD06CFA_Num_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Num_.h"


namespace tutorial_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class Num_TypeSupportInterface;

            typedef Num_TypeSupportInterface * Num_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Num_TypeSupportInterface> Num_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Num_TypeSupportInterface> Num_TypeSupportInterface_out;


            class Num_DataWriter;

            typedef Num_DataWriter * Num_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Num_DataWriter> Num_DataWriter_var;
            typedef DDS_DCPSInterface_out < Num_DataWriter> Num_DataWriter_out;


            class Num_DataReader;

            typedef Num_DataReader * Num_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Num_DataReader> Num_DataReader_var;
            typedef DDS_DCPSInterface_out < Num_DataReader> Num_DataReader_out;


            class Num_DataReaderView;

            typedef Num_DataReaderView * Num_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Num_DataReaderView> Num_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Num_DataReaderView> Num_DataReaderView_out;

            struct Num_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Num_, struct Num_Seq_uniq_> Num_Seq;
            typedef DDS_DCPSSequence_var < Num_Seq> Num_Seq_var;
            typedef DDS_DCPSSequence_out < Num_Seq> Num_Seq_out;

            class  Num_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Num_TypeSupportInterface_ptr _ptr_type;
                typedef Num_TypeSupportInterface_var _var_type;

                static Num_TypeSupportInterface_ptr _duplicate (Num_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Num_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Num_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Num_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Num_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Num_TypeSupportInterface () {};
                ~Num_TypeSupportInterface () {};
            private:
                Num_TypeSupportInterface (const Num_TypeSupportInterface &);
                Num_TypeSupportInterface & operator = (const Num_TypeSupportInterface &);
            };

            class  Num_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Num_DataWriter_ptr _ptr_type;
                typedef Num_DataWriter_var _var_type;

                static Num_DataWriter_ptr _duplicate (Num_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Num_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Num_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Num_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Num_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Num_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Num_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Num_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Num_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Num_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Num_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Num_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Num_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Num_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Num_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Num_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Num_& instance_data) = 0;

            protected:
                Num_DataWriter () {};
                ~Num_DataWriter () {};
            private:
                Num_DataWriter (const Num_DataWriter &);
                Num_DataWriter & operator = (const Num_DataWriter &);
            };

            class  Num_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Num_DataReader_ptr _ptr_type;
                typedef Num_DataReader_var _var_type;

                static Num_DataReader_ptr _duplicate (Num_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Num_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Num_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Num_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Num_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Num_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Num_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Num_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Num_& instance) = 0;

            protected:
                Num_DataReader () {};
                ~Num_DataReader () {};
            private:
                Num_DataReader (const Num_DataReader &);
                Num_DataReader & operator = (const Num_DataReader &);
            };

            class  Num_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Num_DataReaderView_ptr _ptr_type;
                typedef Num_DataReaderView_var _var_type;

                static Num_DataReaderView_ptr _duplicate (Num_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Num_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Num_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Num_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Num_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Num_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Num_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Num_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Num_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Num_& instance) = 0;

            protected:
                Num_DataReaderView () {};
                ~Num_DataReaderView () {};
            private:
                Num_DataReaderView (const Num_DataReaderView &);
                Num_DataReaderView & operator = (const Num_DataReaderView &);
            };
        }

    }

}

#endif
