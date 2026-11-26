// hkBufferedStreamReader::~hkBufferedStreamReader (Common/Base/System/Io/Reader/Buffered/hkBufferedStreamReader.cpp).
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkBufferedStreamReader::~hkBufferedStreamReader()
{
    m_stream->removeReference();
    hkAlignedDeallocate<char>(m_buf.begin);
}
