#include "OSConfigSrv_Dcps_impl.h"
#include "OSConfigSrv_SplDcps.h"
//

extern v_copyin_result
__mymsgs_srv_dds__OSConfigSrv_Request___copyIn (
    c_base base,
    const struct mymsgs::srv::dds_::OSConfigSrv_Request_ *from,
    struct _mymsgs_srv_dds__OSConfigSrv_Request_ *to);

extern void
__mymsgs_srv_dds__OSConfigSrv_Request___copyOut (
    const void *_from,
    void *_to);

// DDS mymsgs::srv::dds_::OSConfigSrv_Request_ TypeSupportMetaHolder Object Body
mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder::OSConfigSrv_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("mymsgs::srv::dds_::OSConfigSrv_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __mymsgs_srv_dds__OSConfigSrv_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __mymsgs_srv_dds__OSConfigSrv_Request___copyOut;
    metaDescriptorArrLength = 3;
    metaDescriptorLength = 251;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"mymsgs\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"OSConfigSrv_Request_\">",
"<Member name=\"structure_needs_at_least_one_member_\"><Octet/></Member></Struct></Module></Module></Module>",
"</MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder::~OSConfigSrv_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder::clone()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder::create_view ()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl();
}

// DDS mymsgs::srv::dds_::OSConfigSrv_Request_ TypeSupport Object Body
mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupport::OSConfigSrv_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportMetaHolder();
}

mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupport::~OSConfigSrv_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS mymsgs::srv::dds_::OSConfigSrv_Request_ DataWriter_impl Object Body
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::OSConfigSrv_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::~OSConfigSrv_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::register_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::register_instance_w_timestamp (
    const OSConfigSrv_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::unregister_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::write (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::write_w_timestamp (
    const OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::dispose (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::dispose_w_timestamp (
    const OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::writedispose (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::writedispose_w_timestamp (
    const OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::get_key_value (
    OSConfigSrv_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_impl::lookup_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS mymsgs::srv::dds_::OSConfigSrv_Request_ DataReader_impl Object Body
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::OSConfigSrv_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::~OSConfigSrv_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::read (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::take (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::read_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::take_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::read_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::take_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::read_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::take_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::read_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::take_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::return_loan (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::OSConfigSrv_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::get_key_value (
    mymsgs::srv::dds_::OSConfigSrv_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::lookup_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	mymsgs::srv::dds_::OSConfigSrv_Request_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_ *data = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Request_ *>(to);
    __mymsgs_srv_dds__OSConfigSrv_Request___copyOut(from, data);
}

void
mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_ *data = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Request_ *>(to);
    __mymsgs_srv_dds__OSConfigSrv_Request___copyOut(from, data);
}


// DDS mymsgs::srv::dds_::OSConfigSrv_Request_ DataReaderView_impl Object Body
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::OSConfigSrv_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::~OSConfigSrv_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::dataSeqAlloc,
            mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::read (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::take (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::read_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::take_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::read_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::take_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::read_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::take_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::read_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::take_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::return_loan (
    mymsgs::srv::dds_::OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::OSConfigSrv_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::get_key_value (
    mymsgs::srv::dds_::OSConfigSrv_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_impl::lookup_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__mymsgs_srv_dds__OSConfigSrv_Response___copyIn (
    c_base base,
    const struct mymsgs::srv::dds_::OSConfigSrv_Response_ *from,
    struct _mymsgs_srv_dds__OSConfigSrv_Response_ *to);

extern void
__mymsgs_srv_dds__OSConfigSrv_Response___copyOut (
    const void *_from,
    void *_to);

// DDS mymsgs::srv::dds_::OSConfigSrv_Response_ TypeSupportMetaHolder Object Body
mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder::OSConfigSrv_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("mymsgs::srv::dds_::OSConfigSrv_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __mymsgs_srv_dds__OSConfigSrv_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __mymsgs_srv_dds__OSConfigSrv_Response___copyOut;
    metaDescriptorArrLength = 2;
    metaDescriptorLength = 226;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"mymsgs\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"OSConfigSrv_Response_\">",
"<Member name=\"metadata_\"><String/></Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder::~OSConfigSrv_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder::clone()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder::create_view ()
{
    return new mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl();
}

// DDS mymsgs::srv::dds_::OSConfigSrv_Response_ TypeSupport Object Body
mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupport::OSConfigSrv_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportMetaHolder();
}

mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupport::~OSConfigSrv_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS mymsgs::srv::dds_::OSConfigSrv_Response_ DataWriter_impl Object Body
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::OSConfigSrv_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::~OSConfigSrv_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::register_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::register_instance_w_timestamp (
    const OSConfigSrv_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::unregister_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::write (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::write_w_timestamp (
    const OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::dispose (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::dispose_w_timestamp (
    const OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::writedispose (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::writedispose_w_timestamp (
    const OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::get_key_value (
    OSConfigSrv_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_impl::lookup_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS mymsgs::srv::dds_::OSConfigSrv_Response_ DataReader_impl Object Body
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::OSConfigSrv_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::~OSConfigSrv_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::read (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::take (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::read_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::take_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::read_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::take_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::read_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::take_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::read_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::take_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::return_loan (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::OSConfigSrv_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::get_key_value (
    mymsgs::srv::dds_::OSConfigSrv_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::lookup_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	mymsgs::srv::dds_::OSConfigSrv_Response_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_ *data = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Response_ *>(to);
    __mymsgs_srv_dds__OSConfigSrv_Response___copyOut(from, data);
}

void
mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_ *data = reinterpret_cast<mymsgs::srv::dds_::OSConfigSrv_Response_ *>(to);
    __mymsgs_srv_dds__OSConfigSrv_Response___copyOut(from, data);
}


// DDS mymsgs::srv::dds_::OSConfigSrv_Response_ DataReaderView_impl Object Body
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::OSConfigSrv_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::~OSConfigSrv_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::dataSeqAlloc,
            mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::read (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::take (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::read_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::take_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::read_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::take_next_sample (
    mymsgs::srv::dds_::OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::read_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::take_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::read_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::take_next_instance (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::return_loan (
    mymsgs::srv::dds_::OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::OSConfigSrv_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::get_key_value (
    mymsgs::srv::dds_::OSConfigSrv_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_impl::lookup_instance (
    const mymsgs::srv::dds_::OSConfigSrv_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyIn (
    c_base base,
    const struct mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *from,
    struct _mymsgs_srv_dds__Sample_OSConfigSrv_Request_ *to);

extern void
__mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyOut (
    const void *_from,
    void *_to);

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ TypeSupportMetaHolder Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder::Sample_OSConfigSrv_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("mymsgs::srv::dds_::Sample_OSConfigSrv_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyOut;
    metaDescriptorArrLength = 5;
    metaDescriptorLength = 537;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"mymsgs\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"OSConfigSrv_Request_\">",
"<Member name=\"structure_needs_at_least_one_member_\"><Octet/></Member></Struct><Struct name=\"Sample_OSConfigSrv_Request_\">",
"<Member name=\"client_guid_0_\"><ULongLong/></Member><Member name=\"client_guid_1_\"><ULongLong/></Member>",
"<Member name=\"sequence_number_\"><LongLong/></Member><Member name=\"request_\"><Type name=\"OSConfigSrv_Request_\"/>",
"</Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder::~Sample_OSConfigSrv_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder::clone()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder::create_view ()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl();
}

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ TypeSupport Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupport::Sample_OSConfigSrv_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportMetaHolder();
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupport::~Sample_OSConfigSrv_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ DataWriter_impl Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::Sample_OSConfigSrv_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::~Sample_OSConfigSrv_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::register_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::register_instance_w_timestamp (
    const Sample_OSConfigSrv_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::unregister_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::write (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::write_w_timestamp (
    const Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::dispose (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::dispose_w_timestamp (
    const Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::writedispose (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::writedispose_w_timestamp (
    const Sample_OSConfigSrv_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::get_key_value (
    Sample_OSConfigSrv_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_impl::lookup_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ DataReader_impl Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::Sample_OSConfigSrv_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::~Sample_OSConfigSrv_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::read (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::take (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::read_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::take_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::read_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::take_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::read_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::take_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::read_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::take_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::return_loan (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::get_key_value (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::lookup_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *data = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *>(to);
    __mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyOut(from, data);
}

void
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *data = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ *>(to);
    __mymsgs_srv_dds__Sample_OSConfigSrv_Request___copyOut(from, data);
}


// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ DataReaderView_impl Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::Sample_OSConfigSrv_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::~Sample_OSConfigSrv_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::dataSeqAlloc,
            mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::read (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::take (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::read_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::take_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::read_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::take_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::read_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::take_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::read_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::take_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::return_loan (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::Sample_OSConfigSrv_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::get_key_value (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_impl::lookup_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyIn (
    c_base base,
    const struct mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *from,
    struct _mymsgs_srv_dds__Sample_OSConfigSrv_Response_ *to);

extern void
__mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyOut (
    const void *_from,
    void *_to);

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ TypeSupportMetaHolder Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder::Sample_OSConfigSrv_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("mymsgs::srv::dds_::Sample_OSConfigSrv_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyOut;
    metaDescriptorArrLength = 5;
    metaDescriptorLength = 515;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"mymsgs\"><Module name=\"srv\"><Module name=\"dds_\"><Struct name=\"OSConfigSrv_Response_\">",
"<Member name=\"metadata_\"><String/></Member></Struct><Struct name=\"Sample_OSConfigSrv_Response_\"><Member name=\"client_guid_0_\">",
"<ULongLong/></Member><Member name=\"client_guid_1_\"><ULongLong/></Member><Member name=\"sequence_number_\">",
"<LongLong/></Member><Member name=\"response_\"><Type name=\"OSConfigSrv_Response_\"/></Member></Struct>",
"</Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder::~Sample_OSConfigSrv_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder::clone()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder::create_view ()
{
    return new mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl();
}

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ TypeSupport Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupport::Sample_OSConfigSrv_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportMetaHolder();
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupport::~Sample_OSConfigSrv_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ DataWriter_impl Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::Sample_OSConfigSrv_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::~Sample_OSConfigSrv_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::register_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::register_instance_w_timestamp (
    const Sample_OSConfigSrv_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::unregister_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::write (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::write_w_timestamp (
    const Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::dispose (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::dispose_w_timestamp (
    const Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::writedispose (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::writedispose_w_timestamp (
    const Sample_OSConfigSrv_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::get_key_value (
    Sample_OSConfigSrv_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_impl::lookup_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ DataReader_impl Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::Sample_OSConfigSrv_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::~Sample_OSConfigSrv_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::read (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::take (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::read_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::take_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::read_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::take_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::read_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::take_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::read_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::take_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::return_loan (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::get_key_value (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::lookup_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq *data_seq = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *data = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *>(to);
    __mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyOut(from, data);
}

void
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *data = reinterpret_cast<mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ *>(to);
    __mymsgs_srv_dds__Sample_OSConfigSrv_Response___copyOut(from, data);
}


// DDS mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ DataReaderView_impl Object Body
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::Sample_OSConfigSrv_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::~Sample_OSConfigSrv_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::dataSeqAlloc,
            mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::read (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::take (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::read_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::take_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::read_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::take_next_sample (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::read_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::take_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::read_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::take_next_instance (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::read_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::take_next_instance_w_condition (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::return_loan (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            mymsgs::srv::dds_::Sample_OSConfigSrv_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::get_key_value (
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_impl::lookup_instance (
    const mymsgs::srv::dds_::Sample_OSConfigSrv_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
