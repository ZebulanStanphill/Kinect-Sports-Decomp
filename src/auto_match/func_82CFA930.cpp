// hkBufferedStreamReader::tell (vtable slot +0x2C): the wrapped stream's position less what is still buffered;
// -1 when the stream cannot tell.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

int hkBufferedStreamReader::tell() const
{
    int t = m_stream->tell();
    if (t >= 0)
        return m_buf.current - m_buf.size + t;
    return -1;
}
