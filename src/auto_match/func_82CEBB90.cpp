#include "havok/hkString.h"
#include "havok/hkMemoryStreamReader.h"

hkMemoryStreamReader::hkMemoryStreamReader(const void *mem, int memSize, MemoryType type)
    : m_bufCurrent(0), m_bufSize(memSize), m_markPos(-1), m_memType(type)
{
    if (type == MEMORY_COPY) {
        m_buf = static_cast<char *>(hkMemoryRouter::easyAlloc(hkMemoryRouter::getInstance().heap(), memSize));
        hkString::memCpy(m_buf, mem, memSize);
    } else {
        m_buf = const_cast<char *>(static_cast<const char *>(mem));
    }
}
