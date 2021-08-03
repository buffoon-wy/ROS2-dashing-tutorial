#include "OSConfigSrv_.h"
#include "OSConfigSrv_Dcps.h"

namespace mymsgs
{
    namespace srv
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < mymsgs::srv::dds_::OSConfigSrv_Request_, struct OSConfigSrv_Request_Seq_uniq_>;
#endif

const char * mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Request_TypeSupportInterface:1.0";

mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Request_DataWriter:1.0";

mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Request_DataReader:1.0";

mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Request_DataReaderView:1.0";

mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < mymsgs::srv::dds_::OSConfigSrv_Response_, struct OSConfigSrv_Response_Seq_uniq_>;
#endif

const char * mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Response_TypeSupportInterface:1.0";

mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Response_DataWriter:1.0";

mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Response_DataReader:1.0";

mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_local_id = "IDL:::mymsgs::srv::dds_/OSConfigSrv_Response_DataReaderView:1.0";

mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_duplicate (mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::OSConfigSrv_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_, struct Sample_OSConfigSrv_Request_Seq_uniq_>;
#endif

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Request_TypeSupportInterface:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Request_DataWriter:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Request_DataReader:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Request_DataReaderView:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_, struct Sample_OSConfigSrv_Response_Seq_uniq_>;
#endif

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Response_TypeSupportInterface:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Response_DataWriter:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Response_DataReader:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_local_id = "IDL:::mymsgs::srv::dds_/Sample_OSConfigSrv_Response_DataReaderView:1.0";

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_duplicate (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr result;
    result = dynamic_cast < mymsgs::srv::dds_::Sample_OSConfigSrv_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

