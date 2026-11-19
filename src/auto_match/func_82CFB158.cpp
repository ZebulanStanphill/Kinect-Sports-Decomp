// hkBufferedStreamWriter::tell (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp): the stream's position plus the bytes still
// buffered, or -1.
#include "havok/hkBufferedStreamWriter.h"

int hkBufferedStreamWriter::tell() const
{
    int childPos = m_stream ? m_stream->tell() : 0;
    if (childPos >= 0) {
        return childPos + m_bufSize;
    }
    return -1;
}
