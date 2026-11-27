// hkSystemMemoryBlockServer::hkSystemMemoryBlockServer (Common/Base/Memory/Allocator/LargeBlock/hkSystemMemoryBlockServer.cpp);
// the minimum allocation size defaults to 128 KB. The allocator is the one the overrides call through (+0x10).
#include "havok/hkSystemMemoryBlockServer.h"
hkSystemMemoryBlockServer::hkSystemMemoryBlockServer(hkMemoryAllocator *allocator, hk_size_t minAllocSize)
    : m_allocated(0), m_limit(0), m_allocator(allocator)
{
    if (minAllocSize == 0)
        m_minAllocSize = 0x20000;
    else
        m_minAllocSize = minAllocSize;
}
