// hkBufferedStreamWriter::seek (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp): flushes and seeks the stream, or in memory
// mode moves the write position, clamped to the buffer.
#include "havok/hkBufferedStreamWriter.h"

hkResult hkBufferedStreamWriter::seek(int offset, SeekWhence whence)
{
    if (m_stream) {
        flushBuffer();
        return m_stream->seek(offset, whence);
    } else {
        int absOffset = -1;
        switch (whence) {
        case STREAM_SET:
            absOffset = offset;
            break;
        case STREAM_CUR:
            absOffset = m_bufSize + offset;
            break;
        case STREAM_END:
            absOffset = m_bufSize - offset;
            break;
        }
        hkResult result = HK_SUCCESS;
        if (absOffset < 0) {
            absOffset = 0;
            result = HK_FAILURE;
        } else if (absOffset > m_bufCapacity) {
            absOffset = m_bufCapacity;
            result = HK_FAILURE;
        }
        m_bufSize = absOffset;
        return result;
    }
}
