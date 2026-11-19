// hkBufferedStreamWriter::flushBuffer (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp):
// writes the buffered bytes to the stream; returns how many were written.
#include "havok/hkBufferedStreamWriter.h"

int hkBufferedStreamWriter::flushBuffer()
{
    if (m_stream) {
        int nbytes = m_bufSize;
        int bytesWritten = 0;
        while (bytesWritten < nbytes) {
            int thisWrite = m_stream->write(m_buf + bytesWritten, nbytes - bytesWritten);
            bytesWritten += thisWrite;
            if (thisWrite == 0) {
                return bytesWritten;
            }
        }
        m_bufSize = 0;
        return bytesWritten;
    }
    return 0;
}
