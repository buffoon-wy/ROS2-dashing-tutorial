#include "PacketMsg_.h"
#include "PacketMsg_Dcps.h"

namespace mymsgs
{
    namespace msg
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < mymsgs::msg::dds_::PacketMsg_, struct PacketMsg_Seq_uniq_>;
#endif

const char * mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_local_id = "IDL:::mymsgs::msg::dds_/PacketMsg_TypeSupportInterface:1.0";

mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_duplicate (mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_local_id) == 0)
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

mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr mymsgs::msg::dds_::PacketMsg_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr result;
    result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::msg::dds_::PacketMsg_DataWriter::_local_id = "IDL:::mymsgs::msg::dds_/PacketMsg_DataWriter:1.0";

mymsgs::msg::dds_::PacketMsg_DataWriter_ptr mymsgs::msg::dds_::PacketMsg_DataWriter::_duplicate (mymsgs::msg::dds_::PacketMsg_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::msg::dds_::PacketMsg_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::msg::dds_::PacketMsg_DataWriter::_local_id) == 0)
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

mymsgs::msg::dds_::PacketMsg_DataWriter_ptr mymsgs::msg::dds_::PacketMsg_DataWriter::_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_DataWriter_ptr result = NULL;
    if (p && p->_is_a (mymsgs::msg::dds_::PacketMsg_DataWriter::_local_id))
    {
        result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::msg::dds_::PacketMsg_DataWriter_ptr mymsgs::msg::dds_::PacketMsg_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_DataWriter_ptr result;
    result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::msg::dds_::PacketMsg_DataReader::_local_id = "IDL:::mymsgs::msg::dds_/PacketMsg_DataReader:1.0";

mymsgs::msg::dds_::PacketMsg_DataReader_ptr mymsgs::msg::dds_::PacketMsg_DataReader::_duplicate (mymsgs::msg::dds_::PacketMsg_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::msg::dds_::PacketMsg_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::msg::dds_::PacketMsg_DataReader::_local_id) == 0)
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

mymsgs::msg::dds_::PacketMsg_DataReader_ptr mymsgs::msg::dds_::PacketMsg_DataReader::_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_DataReader_ptr result = NULL;
    if (p && p->_is_a (mymsgs::msg::dds_::PacketMsg_DataReader::_local_id))
    {
        result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::msg::dds_::PacketMsg_DataReader_ptr mymsgs::msg::dds_::PacketMsg_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_DataReader_ptr result;
    result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * mymsgs::msg::dds_::PacketMsg_DataReaderView::_local_id = "IDL:::mymsgs::msg::dds_/PacketMsg_DataReaderView:1.0";

mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr mymsgs::msg::dds_::PacketMsg_DataReaderView::_duplicate (mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean mymsgs::msg::dds_::PacketMsg_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, mymsgs::msg::dds_::PacketMsg_DataReaderView::_local_id) == 0)
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

mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr mymsgs::msg::dds_::PacketMsg_DataReaderView::_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (mymsgs::msg::dds_::PacketMsg_DataReaderView::_local_id))
    {
        result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr mymsgs::msg::dds_::PacketMsg_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr result;
    result = dynamic_cast < mymsgs::msg::dds_::PacketMsg_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

