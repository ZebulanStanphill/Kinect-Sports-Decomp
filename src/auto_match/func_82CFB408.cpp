// hkBufferedStreamWriter scalar deleting destructor (hkBufferedStreamWriter.cpp); it calls the destructor below rather than inlining it.
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
