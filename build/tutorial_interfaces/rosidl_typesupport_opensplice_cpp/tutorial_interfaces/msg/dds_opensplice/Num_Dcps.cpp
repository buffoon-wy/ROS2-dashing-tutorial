#include "Num_.h"
#include "Num_Dcps.h"

namespace tutorial_interfaces
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < tutorial_interfaces::msg::dds_::Num_, struct Num_Seq_uniq_>;
#endif

const char * tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_local_id = "IDL:::tutorial_interfaces::msg::dds_/Num_TypeSupportInterface:1.0";

tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_duplicate (tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_local_id) == 0)
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

tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr tutorial_interfaces::msg::dds_::Num_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr result;
    result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::msg::dds_::Num_DataWriter::_local_id = "IDL:::tutorial_interfaces::msg::dds_/Num_DataWriter:1.0";

tutorial_interfaces::msg::dds_::Num_DataWriter_ptr tutorial_interfaces::msg::dds_::Num_DataWriter::_duplicate (tutorial_interfaces::msg::dds_::Num_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::msg::dds_::Num_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::msg::dds_::Num_DataWriter::_local_id) == 0)
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

tutorial_interfaces::msg::dds_::Num_DataWriter_ptr tutorial_interfaces::msg::dds_::Num_DataWriter::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_DataWriter_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::msg::dds_::Num_DataWriter::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::msg::dds_::Num_DataWriter_ptr tutorial_interfaces::msg::dds_::Num_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_DataWriter_ptr result;
    result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::msg::dds_::Num_DataReader::_local_id = "IDL:::tutorial_interfaces::msg::dds_/Num_DataReader:1.0";

tutorial_interfaces::msg::dds_::Num_DataReader_ptr tutorial_interfaces::msg::dds_::Num_DataReader::_duplicate (tutorial_interfaces::msg::dds_::Num_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::msg::dds_::Num_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::msg::dds_::Num_DataReader::_local_id) == 0)
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

tutorial_interfaces::msg::dds_::Num_DataReader_ptr tutorial_interfaces::msg::dds_::Num_DataReader::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_DataReader_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::msg::dds_::Num_DataReader::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::msg::dds_::Num_DataReader_ptr tutorial_interfaces::msg::dds_::Num_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_DataReader_ptr result;
    result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * tutorial_interfaces::msg::dds_::Num_DataReaderView::_local_id = "IDL:::tutorial_interfaces::msg::dds_/Num_DataReaderView:1.0";

tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr tutorial_interfaces::msg::dds_::Num_DataReaderView::_duplicate (tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean tutorial_interfaces::msg::dds_::Num_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, tutorial_interfaces::msg::dds_::Num_DataReaderView::_local_id) == 0)
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

tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr tutorial_interfaces::msg::dds_::Num_DataReaderView::_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (tutorial_interfaces::msg::dds_::Num_DataReaderView::_local_id))
    {
        result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr tutorial_interfaces::msg::dds_::Num_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr result;
    result = dynamic_cast < tutorial_interfaces::msg::dds_::Num_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}
