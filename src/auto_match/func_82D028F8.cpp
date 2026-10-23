// hkLargeBlockAllocator::~hkLargeBlockAllocator (Common/Base/Memory/Allocator/
// LargeBlock/hkLargeBlockAllocator.cpp): returns every page to the block
// server. It keeps its fn_ name because a Matching C unit (the deleting
// destructor fn_82D03F30) calls it: the destructor is defined inline (forced)
// and expanded into an extern "C" definition.
#include "havok/hkBase.h"

// hkMemoryBlockServer: a root class (RTTI); only the slot used here is named.
class hkMemoryBlockServer {
public:
    virtual ~hkMemoryBlockServer();
    virtual void vfn1();
    virtual void vfn2();
    virtual void vfn3();
    virtual void free(void *data, hk_size_t size);   // +0x10
};

class hkFreeListAllocatorServer {
public:
    virtual ~hkFreeListAllocatorServer() {}
};

class hkLargeBlockAllocator : public hkFreeListAllocatorServer {
public:
    struct MemPage {
        MemPage *m_prev;     // +0x0
        MemPage *m_next;     // +0x4
        int m_numAllocs;     // +0x8
        hk_size_t m_size;    // +0xC
    };
    virtual HK_FORCE_INLINE ~hkLargeBlockAllocator()
    {
        MemPage *page = m_pages.m_next;
        while (page != &m_pages) {
            MemPage *next = page->m_next;
            m_server->free(page, page->m_size);
            page = next;
        }
    }

    hkUint8 m_state[0x94];            // +0x4 (not needed here)
    hkMemoryBlockServer *m_server;    // +0x98
    hkUint8 m_state2[0x8];            // +0x9C
    MemPage m_pages;                  // +0xA4
};

extern "C" void fn_82D028F8(hkLargeBlockAllocator *self)
{
    self->hkLargeBlockAllocator::~hkLargeBlockAllocator();
}
