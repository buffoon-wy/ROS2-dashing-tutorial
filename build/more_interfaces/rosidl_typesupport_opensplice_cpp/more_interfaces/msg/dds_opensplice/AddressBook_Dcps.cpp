#include "AddressBook_.h"
#include "AddressBook_Dcps.h"

namespace more_interfaces
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < more_interfaces::msg::dds_::AddressBook_, struct AddressBook_Seq_uniq_>;
#endif

const char * more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_local_id = "IDL:::more_interfaces::msg::dds_/AddressBook_TypeSupportInterface:1.0";

more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_duplicate (more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_local_id) == 0)
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

more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr more_interfaces::msg::dds_::AddressBook_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr result;
    result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * more_interfaces::msg::dds_::AddressBook_DataWriter::_local_id = "IDL:::more_interfaces::msg::dds_/AddressBook_DataWriter:1.0";

more_interfaces::msg::dds_::AddressBook_DataWriter_ptr more_interfaces::msg::dds_::AddressBook_DataWriter::_duplicate (more_interfaces::msg::dds_::AddressBook_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean more_interfaces::msg::dds_::AddressBook_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, more_interfaces::msg::dds_::AddressBook_DataWriter::_local_id) == 0)
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

more_interfaces::msg::dds_::AddressBook_DataWriter_ptr more_interfaces::msg::dds_::AddressBook_DataWriter::_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_DataWriter_ptr result = NULL;
    if (p && p->_is_a (more_interfaces::msg::dds_::AddressBook_DataWriter::_local_id))
    {
        result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

more_interfaces::msg::dds_::AddressBook_DataWriter_ptr more_interfaces::msg::dds_::AddressBook_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_DataWriter_ptr result;
    result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * more_interfaces::msg::dds_::AddressBook_DataReader::_local_id = "IDL:::more_interfaces::msg::dds_/AddressBook_DataReader:1.0";

more_interfaces::msg::dds_::AddressBook_DataReader_ptr more_interfaces::msg::dds_::AddressBook_DataReader::_duplicate (more_interfaces::msg::dds_::AddressBook_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean more_interfaces::msg::dds_::AddressBook_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, more_interfaces::msg::dds_::AddressBook_DataReader::_local_id) == 0)
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

more_interfaces::msg::dds_::AddressBook_DataReader_ptr more_interfaces::msg::dds_::AddressBook_DataReader::_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_DataReader_ptr result = NULL;
    if (p && p->_is_a (more_interfaces::msg::dds_::AddressBook_DataReader::_local_id))
    {
        result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

more_interfaces::msg::dds_::AddressBook_DataReader_ptr more_interfaces::msg::dds_::AddressBook_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_DataReader_ptr result;
    result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * more_interfaces::msg::dds_::AddressBook_DataReaderView::_local_id = "IDL:::more_interfaces::msg::dds_/AddressBook_DataReaderView:1.0";

more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr more_interfaces::msg::dds_::AddressBook_DataReaderView::_duplicate (more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean more_interfaces::msg::dds_::AddressBook_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, more_interfaces::msg::dds_::AddressBook_DataReaderView::_local_id) == 0)
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

more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr more_interfaces::msg::dds_::AddressBook_DataReaderView::_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (more_interfaces::msg::dds_::AddressBook_DataReaderView::_local_id))
    {
        result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr more_interfaces::msg::dds_::AddressBook_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr result;
    result = dynamic_cast < more_interfaces::msg::dds_::AddressBook_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

