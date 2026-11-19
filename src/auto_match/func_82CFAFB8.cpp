// hkBufferedStreamWriter::isOk (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp): the stream's state, or in memory mode
// whether the buffer has room left.
#include "havok/hkBufferedStreamWriter.h"

hkBool hkBufferedStreamWriter::isOk() const
{
    return m_stream ? m_stream->isOk() : hkBool(m_bufSize != m_bufCapacity);
}
