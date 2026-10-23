// hkSystemMemoryBlockServer::hkSystemMemoryBlockServer(hk_size_t, hk_size_t) (Common/Base/Memory/Allocator/LargeBlock/hkSystemMemoryBlockServer.cpp); the minimum allocation size defaults to 128 KB. Parameter names are not confirmed.
#include "havok/hkBase.h"

class hkMemoryBlockServer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkMemoryBlockServer() {}
    virtual ~hkMemoryBlockServer() {}
};

class hkSystemMemoryBlockServer : public hkMemoryBlockServer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkSystemMemoryBlockServer(hk_size_t maxMemory, hk_size_t minAllocSize);

    hk_size_t m_minAllocSize;   // +0x4
    hk_size_t m_allocated;      // +0x8
    hk_size_t m_used;           // +0xC
    hk_size_t m_maxMemory;      // +0x10
};

hkSystemMemoryBlockServer::hkSystemMemoryBlockServer(hk_size_t maxMemory, hk_size_t minAllocSize)
    : m_allocated(0), m_used(0), m_maxMemory(maxMemory)
{
    if (minAllocSize == 0)
        m_minAllocSize = 0x20000;
    else
        m_minAllocSize = minAllocSize;
}
