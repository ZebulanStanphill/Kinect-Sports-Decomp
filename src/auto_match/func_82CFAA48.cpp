// hkBufferedStreamReader::hkBufferedStreamReader(hkStreamReader *, int) (hkBufferedStreamReader.cpp).
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkBufferedStreamReader::hkBufferedStreamReader(hkStreamReader *s, int bufSize)
    : m_stream(s)
{
    m_buf.begin = hkAlignedAllocate<char>(64, bufSize, HK_MEMORY_CLASS_STREAM);
    m_buf.current = 0;
    m_buf.size = 0;
    m_buf.capacity = bufSize;
    m_buf.markPos = -1;
    m_buf.markLimit = -1;
    m_stream->addReference();
}
