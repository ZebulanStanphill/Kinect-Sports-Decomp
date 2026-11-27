// hkLargeBlockAllocator::~hkLargeBlockAllocator (Common/Base/Memory/Allocator/LargeBlock/
// hkLargeBlockAllocator.cpp): returns every page to the block server.
#include "havok/hkLargeBlockAllocator.h"

hkLargeBlockAllocator::~hkLargeBlockAllocator()
{
    MemPage *page = m_pages.m_next;
    while (page != &m_pages) {
        MemPage *next = page->m_next;
        m_server->free(page, page->m_size);
        page = next;
    }
}
