// hkLargeBlockAllocator (Common/Base/Memory/Allocator/LargeBlock/hkLargeBlockAllocator.h), 0xC4 bytes: a
// dlmalloc-style allocator of chunks inside pages that it takes from an hkMemoryBlockServer; it serves an
// hkFreeListAllocator as its hkFreeListAllocatorServer (RTTI). Placement-only allocator: the scalar deleting
// destructor (82D03F30) frees nothing.
// The constructor (82D03DD8; hkFreeListAllocator's constructor 82CF9730 calls it) and the destructor (82D028F8;
// 82D03F30 and hkFreeListAllocator's destructor 82CF93D0 call it) are out of line. The constructor clears the bins and the counters, points m_top at the zero chunk (its head is 3) and makes the
// page list empty; the destructor returns every page to the block server.
// The overrides of hkFreeListAllocatorServer keep their fn_ names (see hkFreeListAllocatorServer.h).
// Layout: m_server +0x98 and the page list +0xA4 from the destructor; the pages' bounds at +0x10 and +0x14 from
// isValidAlloc (82D03808); m_top +0x10 from free (82D038A8), which also lowers the two counters at +0xBC and
// +0xC0. The member names are invented after dlmalloc's, on which the allocator is built; which of +0x4 .. +0x14
// are dlmalloc's treemap, dvsize, topsize and dv is not checked.
#ifndef HAVOK_HKLARGEBLOCKALLOCATOR_H
#define HAVOK_HKLARGEBLOCKALLOCATOR_H

#include "havok/hkBase.h"
#include "havok/hkMemoryBlockServer.h"
#include "havok/hkFreeListAllocatorServer.h"

class hkLargeBlockAllocator : public hkFreeListAllocatorServer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();

    // The chunk header: the previous chunk's size (when it is free) and this chunk's size and flags.
    struct MemChunk {
        hk_size_t prevFoot;   // +0x0
        hk_size_t head;       // +0x4
    };
    // A page from the block server; the pages form a ring through m_pages.
    struct MemPage {
        MemPage *m_prev;      // +0x0
        MemPage *m_next;      // +0x4
        int m_numAllocs;      // +0x8
        hk_size_t m_size;     // +0xC
        char *m_start;        // +0x10
        char *m_end;          // +0x14
    };

    hkLargeBlockAllocator(hkMemoryBlockServer *server);
    virtual ~hkLargeBlockAllocator();
    virtual void *alloc(hk_size_t size);
    virtual void free(void *p);
    virtual hkBool isValidAlloc(void *p);
    virtual hk_size_t getAllocSize(void *p);
    virtual hk_size_t getAllocTotalSize(void *p);
    virtual void *criticalAlloc(hk_size_t size);
    virtual void criticalFree(void *p, hk_size_t size);

    hkUint32 m_treemap;                      // +0x4
    hk_size_t m_dvsize;                      // +0x8
    hk_size_t m_topsize;                     // +0xC
    MemChunk *m_top;                         // +0x10
    MemChunk *m_dv;                          // +0x14
    void *m_treebins[32];                    // +0x18
    hkMemoryBlockServer *m_server;           // +0x98
    MemChunk m_zeroChunk;                    // +0x9C
    MemPage m_pages;                         // +0xA4
    hk_size_t m_sumAllocatedSize;            // +0xBC
    hk_size_t m_sumAllocatedWithMgrOverhead; // +0xC0
};

#endif
