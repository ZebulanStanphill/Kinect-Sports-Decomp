// hkBufferedStreamWriter::hkBufferedStreamWriter(hkStreamWriter *s, int bufSize) (Common/Base/System/Io/Writer/
// Buffered/hkBufferedStreamWriter.cpp): takes a reference on the stream and allocates the buffer 64-aligned.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamWriter.h"

hkBufferedStreamWriter::hkBufferedStreamWriter(hkStreamWriter *s, int bufSize)
    : m_stream(s), m_ownBuffer(true)
{
    if (m_stream)
        m_stream->addReference();
    m_buf = hkAlignedAllocate<char>(64, bufSize, HK_MEMORY_CLASS_STREAM);
    m_bufSize = 0;
    m_bufCapacity = bufSize;
}
