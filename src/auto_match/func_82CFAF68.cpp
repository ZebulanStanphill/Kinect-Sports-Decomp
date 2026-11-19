// hkBufferedStreamWriter::flush (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp).
#include "havok/hkBufferedStreamWriter.h"

void hkBufferedStreamWriter::flush()
{
    flushBuffer();
    if (m_stream) {
        m_stream->flush();
    }
}
