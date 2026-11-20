#include "havok/hkMemoryStreamReader.h"

hkMemoryStreamReader::~hkMemoryStreamReader()
{
    if (m_memType == MEMORY_COPY || m_memType == MEMORY_TAKE)
        hkDeallocate<char>(m_buf);
}
