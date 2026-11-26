// hkFreeListAllocatorServer (Common/Base/Memory/Allocator/FreeList/hkFreeListAllocator.h), 4 bytes: the interface
// that gives an hkFreeListAllocator its blocks. A root class (RTTI); hkLargeBlockAllocator implements it. The
// destructor is inline and empty; deleting one uses the global operator delete (fn_8265CA20, 82D02838).
// Its vtable (??_7hkFreeListAllocatorServer@@6B@, 8 slots) has seven pure slots after the destructor. They are placed
// by hkLargeBlockAllocator's overrides (??_7hkLargeBlockAllocator@@6B@, fn_ names): alloc 82D031A0 (rounds the
// size up and takes a chunk, else asks the block server for a page), free 82D038A8, isValidAlloc 82D03808 (finds
// the page that holds the pointer and walks its chunks), getAllocSize 82D039A8 and getAllocTotalSize 82D039B8 (the
// chunk header, without and with its 16 bytes), criticalAlloc 82D03510 (alloc, else the block server's
// criticalAlloc; tags the block) and criticalFree 82D035B0 (by the tag: the block server's criticalFree or free).
// The names follow Havok's hkLargeBlockAllocator where it has the function and are invented from what the
// functions do otherwise.
#ifndef HAVOK_HKFREELISTALLOCATORSERVER_H
#define HAVOK_HKFREELISTALLOCATORSERVER_H

#include "havok/hkBase.h"

class hkFreeListAllocatorServer {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkFreeListAllocatorServer() {}
    virtual void *alloc(hk_size_t size) = 0;                        // +0x4
    virtual void free(void *p) = 0;                                 // +0x8
    virtual hkBool isValidAlloc(void *p) = 0;                       // +0xC
    virtual hk_size_t getAllocSize(void *p) = 0;                    // +0x10
    virtual hk_size_t getAllocTotalSize(void *p) = 0;               // +0x14
    virtual void *criticalAlloc(hk_size_t size) = 0;                // +0x18
    virtual void criticalFree(void *p, hk_size_t size) = 0;         // +0x1C
};

#endif
