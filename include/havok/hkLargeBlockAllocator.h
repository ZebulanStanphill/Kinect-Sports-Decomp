// hkLargeBlockAllocator (Common/Base/Memory/Allocator/LargeBlock/hkLargeBlockAllocator.h), 0xC4 bytes: a
// dlmalloc-style allocator of chunks inside pages that it takes from an hkMemoryBlockServer; it serves an
// hkFreeListAllocator as its hkFreeListAllocatorServer (RTTI). Placement-only allocator: the scalar deleting
// destructor (82D03F30) frees nothing.
// The constructor and the destructor are out of line in the game but keep their fn_ names (fn_82D03DD8, which
// hkFreeListAllocator's constructor 82CF9730 calls; fn_82D028F8, which 82D03F30 and hkFreeListAllocator's
// destructor 82CF93D0 call), so they are defined here, forced inline, and 82D03DD8 and 82D028F8 expand them.
// The constructor clears the bins and the counters, points m_top at the zero chunk (its head is 3) and makes the
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

    HK_FORCE_INLINE hkLargeBlockAllocator(hkMemoryBlockServer *server);
    virtual HK_FORCE_INLINE ~hkLargeBlockAllocator();
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

HK_FORCE_INLINE hkLargeBlockAllocator::hkLargeBlockAllocator(hkMemoryBlockServer *server) : m_server(server)
{
    m_treemap = 0;
    m_sumAllocatedWithMgrOverhead = 0;
    m_sumAllocatedSize = 0;
    m_dvsize = 0;
    m_topsize = 0;
    for (int i = 0; i < 32; ++i)
        m_treebins[i] = 0;
    m_zeroChunk.prevFoot = 0;
    m_pages.m_next = &m_pages;
    m_top = &m_zeroChunk;
    m_zeroChunk.head = 3;
    m_dv = 0;
    m_pages.m_prev = &m_pages;
}

HK_FORCE_INLINE hkLargeBlockAllocator::~hkLargeBlockAllocator()
{
    MemPage *page = m_pages.m_next;
    while (page != &m_pages) {
        MemPage *next = page->m_next;
        m_server->free(page, page->m_size);
        page = next;
    }
}

#endif
