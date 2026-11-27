// hkBufferedStreamReader::seek (vtable slot +0x28): drops the mark and the buffered data, then seeks the wrapped
// stream.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkResult hkBufferedStreamReader::seek(int offset, SeekWhence whence)
{
    m_buf.markPos = -1;
    m_buf.markLimit = -1;
    m_buf.current = 0;
    m_buf.size = 0;
    return m_stream->seek(offset, whence);
}
