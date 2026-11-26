// hkSystemMemoryBlockServer::hkSystemMemoryBlockServer (Common/Base/Memory/Allocator/LargeBlock/hkSystemMemoryBlockServer.cpp);
// the minimum allocation size defaults to 128 KB. The first argument is the allocator the overrides call through
// (+0x10); the symbol gives it as unsigned (see hkSystemMemoryBlockServer.h).
#include "havok/hkSystemMemoryBlockServer.h"

hkSystemMemoryBlockServer::hkSystemMemoryBlockServer(hk_size_t allocator, hk_size_t minAllocSize)
    : m_allocated(0), m_limit(0), m_allocator(reinterpret_cast<hkMemoryAllocator *>(allocator))
{
    if (minAllocSize == 0)
        m_minAllocSize = 0x20000;
    else
        m_minAllocSize = minAllocSize;
}
