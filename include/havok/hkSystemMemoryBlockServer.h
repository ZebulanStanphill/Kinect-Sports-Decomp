// hkSystemMemoryBlockServer (Common/Base/Memory/Allocator/LargeBlock/hkSystemMemoryBlockServer.h), 0x14 bytes: a
// block server that takes its blocks from an allocator and keeps count of them against an optional limit.
// The constructor (82CF9A38) stores the allocator, clears the count and the limit, and takes 128 KB as the
// minimum allocation size when it is given 0. Its symbol, ??0hkSystemMemoryBlockServer@@QAA@II@Z, was written
// with two unsigned parameters before the overrides were read, so the constructor takes the allocator as an
// hk_size_t (see "Renames needed" in km/hdr/reports/b-base.md).
// The overrides keep their fn_ names (vtable ??_7hkSystemMemoryBlockServer@@6B@): isSingleBlockServer and
// resize are the shared `return false` (82609770); recommendSize 82CF98E8 (what is left under the limit, else
// the size rounded up to 32 KB but at least m_minAllocSize); allocate 82CF9928 (fails past the limit, else counts
// the block and tail-calls m_allocator->blockAlloc); free 82CF9978 (uncounts, m_allocator->blockFree);
// getTotalAvailableMemory 82CF9998 (-1 without a limit); getMemoryLimit 82CF99B8; setMemoryLimit 82CF99C0 (0
// clears it; refused below the count); criticalAlloc 82CF9A08 and criticalFree 82CF9A20 (straight to
// m_allocator). The member names are invented from these.
#ifndef HAVOK_HKSYSTEMMEMORYBLOCKSERVER_H
#define HAVOK_HKSYSTEMMEMORYBLOCKSERVER_H

#include "havok/hkMemoryBlockServer.h"
#include "havok/hkMemoryAllocator.h"

class hkSystemMemoryBlockServer : public hkMemoryBlockServer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkSystemMemoryBlockServer(hk_size_t allocator, hk_size_t minAllocSize);
    virtual hkBool isSingleBlockServer();
    virtual hk_size_t recommendSize(hk_size_t size);
    virtual void *allocate(hk_size_t size, hk_size_t &sizeOut);
    virtual void free(void *data, hk_size_t size);
    virtual hkBool resize(void *data, hk_size_t oldSize, hk_size_t newSize, hk_size_t &sizeOut);
    virtual hk_size_t getTotalAvailableMemory();
    virtual hk_size_t getMemoryLimit();
    virtual hkBool setMemoryLimit(hk_size_t size);
    virtual void *criticalAlloc(hk_size_t size);
    virtual void criticalFree(void *ptr, hk_size_t size);

    hk_size_t m_minAllocSize;          // +0x4
    hk_size_t m_allocated;             // +0x8: the bytes handed out
    hk_size_t m_limit;                 // +0xC: 0 for none
    hkMemoryAllocator *m_allocator;    // +0x10
};

#endif
