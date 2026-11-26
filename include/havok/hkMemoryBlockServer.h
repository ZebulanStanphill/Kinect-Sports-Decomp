// hkMemoryBlockServer (Common/Base/Memory/Allocator/LargeBlock/hkMemoryBlockServer.h), 4 bytes: the interface
// that hands large blocks of memory to an allocator. A root class (RTTI) with a placement-only allocator, so the
// scalar deleting destructor (82CF9A70) frees nothing. The destructor is inline and empty.
// Its vtable (??_7hkMemoryBlockServer@@6B@, 11 slots) has ten pure slots after the destructor. The names and
// parameter lists follow Havok's header; checked against the game through hkSystemMemoryBlockServer's overrides
// (see hkSystemMemoryBlockServer.h) and hkLargeBlockAllocator's destructor (82D028F8), which returns its pages
// through free at +0x10.
#ifndef HAVOK_HKMEMORYBLOCKSERVER_H
#define HAVOK_HKMEMORYBLOCKSERVER_H

#include "havok/hkBase.h"

class hkMemoryBlockServer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkMemoryBlockServer() {}
    virtual ~hkMemoryBlockServer() {}
    virtual hkBool isSingleBlockServer() = 0;                                                     // +0x4
    virtual hk_size_t recommendSize(hk_size_t size) = 0;                                          // +0x8
    virtual void *allocate(hk_size_t size, hk_size_t &sizeOut) = 0;                               // +0xC
    virtual void free(void *data, hk_size_t size) = 0;                                            // +0x10
    virtual hkBool resize(void *data, hk_size_t oldSize, hk_size_t newSize, hk_size_t &sizeOut) = 0;  // +0x14
    virtual hk_size_t getTotalAvailableMemory() = 0;                                              // +0x18
    virtual hk_size_t getMemoryLimit() = 0;                                                       // +0x1C
    virtual hkBool setMemoryLimit(hk_size_t size) = 0;                                            // +0x20
    virtual void *criticalAlloc(hk_size_t size) = 0;                                              // +0x24
    virtual void criticalFree(void *ptr, hk_size_t size) = 0;                                     // +0x28
};

#endif
