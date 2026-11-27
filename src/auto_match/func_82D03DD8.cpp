// hkLargeBlockAllocator::hkLargeBlockAllocator(hkMemoryBlockServer *) (Common/Base/Memory/Allocator/LargeBlock/
// hkLargeBlockAllocator.cpp): clears the bins and the counters, points m_top at the zero chunk (its head is 3)
// and makes the page list empty.
#include "havok/hkLargeBlockAllocator.h"

hkLargeBlockAllocator::hkLargeBlockAllocator(hkMemoryBlockServer *server) : m_server(server)
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
