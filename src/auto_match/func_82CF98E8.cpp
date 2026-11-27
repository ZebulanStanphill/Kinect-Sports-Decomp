// hkSystemMemoryBlockServer::recommendSize (vtable slot +0x8): under a limit, what is left when it covers the
// size (else the size); without one, the size rounded up to 32 KB, but at least m_minAllocSize.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

hk_size_t hkSystemMemoryBlockServer::recommendSize(hk_size_t size)
{
    if (m_limit) {
        hk_size_t avail = m_limit - m_allocated;
        if (avail >= size)
            return avail;
        return size;
    }
    if (size < m_minAllocSize)
        return m_minAllocSize;
    return (size + 0x7fff) & ~0x7fff;
}
