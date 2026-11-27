// hkSystemMemoryBlockServer::allocate (vtable slot +0xC): fails past the limit, else counts the block and takes it
// from the allocator.
#include "havok/hkBase.h"
#include "havok/hkSystemMemoryBlockServer.h"

void *hkSystemMemoryBlockServer::allocate(hk_size_t size, hk_size_t &sizeOut)
{
    if (m_limit && m_allocated + size > m_limit)
        return HK_NULL;
    sizeOut = size;
    m_allocated += size;
    return m_allocator->blockAlloc(size);
}
