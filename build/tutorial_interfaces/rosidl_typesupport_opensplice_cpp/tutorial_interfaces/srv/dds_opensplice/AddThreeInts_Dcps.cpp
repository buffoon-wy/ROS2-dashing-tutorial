#include "AddThreeInts_.h"
#include "AddThreeInts_Dcps.h"

namespace tutorial_interfaces
{
    namespace srv
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < tutorial_interfaces::srv::dds_::AddThreeInts_Request_, struct AddThreeInts_Request_Seq_uniq_>;
#endif

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Request_TypeSupportInterface:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Request_DataWriter:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Request_DataReader:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Request_DataReaderView:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < tutorial_interfaces::srv::dds_::AddThreeInts_Response_, struct AddThreeInts_Response_Seq_uniq_>;
#endif

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Response_TypeSupportInterface:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Response_DataWriter:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Response_DataReader:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_local_id = "IDL:::tutorial_interfaces::srv::dds_/AddThreeInts_Response_DataReaderView:1.0";

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_duplicate (tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::AddThreeInts_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_, struct Sample_AddThreeInts_Request_Seq_uniq_>;
#endif

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Request_TypeSupportInterface:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Request_DataWriter:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Request_DataReader:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Request_DataReaderView:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_, struct Sample_AddThreeInts_Response_Seq_uniq_>;
#endif

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Response_TypeSupportInterface:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Response_DataWriter:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Response_DataReader:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_local_id = "IDL:::tutorial_interfaces::srv::dds_/Sample_AddThreeInts_Response_DataReaderView:1.0";

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_duplicate (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_local_id) == 0)
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

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr result;
    result = dynamic_cast < tutorial_interfaces::srv::dds_::Sample_AddThreeInts_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

