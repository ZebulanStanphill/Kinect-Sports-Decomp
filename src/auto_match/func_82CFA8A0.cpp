// hkBufferedStreamReader::rewindToMark (vtable slot +0x20): goes back to the mark when there is one.
#include "havok/hkBase.h"
#include "havok/hkBufferedStreamReader.h"

hkResult hkBufferedStreamReader::rewindToMark()
{
    if (m_buf.markPos >= 0) {
        m_buf.current = m_buf.markPos;
        return HK_SUCCESS;
    }
    return HK_FAILURE;
}
