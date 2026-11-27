// hkStdioStreamReader::setMark (vtable slot +0x1C): saves tell() in m_mark; fails when tell() fails (-1).
#include "havok/hkBase.h"
#include "havok/hkStdioStreamReader.h"

hkResult hkStdioStreamReader::setMark(int markLimit)
{
    m_mark = tell();
    return m_mark == -1 ? HK_FAILURE : HK_SUCCESS;
}
