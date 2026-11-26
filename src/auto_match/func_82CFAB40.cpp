// hkBufferedStreamReader scalar deleting destructor, generated from the destructor below (hkBufferedStreamReader.cpp).
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkBufferedStreamReader::~hkBufferedStreamReader()
{
    m_stream->removeReference();
    hkAlignedDeallocate<char>(m_buf.begin);
}
