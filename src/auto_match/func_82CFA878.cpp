// hkBufferedStreamReader::setMark (vtable slot +0x1C): remembers the limit and the current position; a limit past
// the buffer's capacity fails.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkResult hkBufferedStreamReader::setMark(int markLimit)
{
    m_buf.markLimit = markLimit;
    m_buf.markPos = m_buf.current;
    return markLimit > m_buf.capacity ? HK_FAILURE : HK_SUCCESS;
}
