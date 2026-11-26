// hkBufferedStreamWriter::~hkBufferedStreamWriter (hkBufferedStreamWriter.cpp).
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamWriter.h"

hkBufferedStreamWriter::~hkBufferedStreamWriter()
{
    flushBuffer();
    if (m_stream)
        m_stream->flush();
    if (m_stream)
        m_stream->removeReference();
    if (m_ownBuffer)
        hkAlignedDeallocate<char>(m_buf);
}
