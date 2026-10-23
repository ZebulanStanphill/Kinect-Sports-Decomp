// hkFreeListAllocator::hkFreeListAllocator(hkMemoryAllocator *allocator) (Common/Base/Memory/Allocator/
// FreeList/hkFreeListAllocator.cpp). Members whose constructors are out of line keep their fn_ names
// (hkCriticalSection fn_82CEFBD0, hkLargeBlockAllocator fn_82D03DD8, hkFreeList fn_82D01430,
// _newFreeList fn_82CF9428) and are reached through inline wrappers. The constructor keeps its fn_
// name too and is expanded into an extern "C" definition. Member names follow Havok 2010 and are
// not confirmed.
#include "havok/hkBase.h"

class hkFreeList;
class hkLargeBlockAllocator;
class hkFreeListAllocator;
struct _RTL_CRITICAL_SECTION;
extern "C" {
void RtlEnterCriticalSection(_RTL_CRITICAL_SECTION *cs);
void RtlLeaveCriticalSection(_RTL_CRITICAL_SECTION *cs);
void fn_82CEFBD0(void *self, int spinCount);                                  // hkCriticalSection::hkCriticalSection(int)
void fn_82D03DD8(hkLargeBlockAllocator *self, hkMemoryAllocator *server);     // hkLargeBlockAllocator::hkLargeBlockAllocator
void fn_82D01430(hkFreeList *self);                                           // hkFreeList::hkFreeList
hkFreeList *fn_82CF9428(hkFreeListAllocator *self, int elementSize, int align, int blockSize);   // _newFreeList
}

class hkCriticalSection {
public:
    HK_FORCE_INLINE hkCriticalSection(int spinCount = 0) { fn_82CEFBD0(this, spinCount); }
    HK_FORCE_INLINE void enter() { RtlEnterCriticalSection((_RTL_CRITICAL_SECTION *)this); }
    HK_FORCE_INLINE void leave() { RtlLeaveCriticalSection((_RTL_CRITICAL_SECTION *)this); }
    hkUint8 m_section[0x1c];
};

class hkCriticalSectionLock {
public:
    HK_FORCE_INLINE hkCriticalSectionLock(hkCriticalSection *section) : m_section(section) { m_section->enter(); }
    HK_FORCE_INLINE ~hkCriticalSectionLock() { m_section->leave(); }
    hkCriticalSection *m_section;
};

class hkLargeBlockAllocator {
public:
    HK_FORCE_INLINE hkLargeBlockAllocator(hkMemoryAllocator *server) { fn_82D03DD8(this, server); }
    hkUint8 m_data[0xc4];
};

class hkFreeList {
public:
    HK_FORCE_INLINE hkFreeList() { fn_82D01430(this); }
    hkUint8 m_data[0x34];
};

class hkFreeListAllocator : public hkMemoryAllocator {
public:
    enum { MAX_FREELISTS = 34, FREELIST_ALIGNMENT = 16, FREELIST_SHIFT = 4, MAX_SIZE = 0x220 };

    hkFreeListAllocator(hkMemoryAllocator *allocator);
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);

    HK_FORCE_INLINE hkFreeList *_newFreeList(int elementSize, int align, int blockSize)
    {
        return fn_82CF9428(this, elementSize, align, blockSize);
    }
    HK_FORCE_INLINE void setMemorySoftLimit(int maxMemory)
    {
        hkCriticalSectionLock lock(&m_criticalSection);
        m_softLimit = maxMemory;
    }

    hkCriticalSection m_criticalSection;                         // +0x4
    int m_totalBytesInFreeLists;                                 // +0x20
    int m_totalBytesInLargeBlocks;                               // +0x24
    hkMemoryAllocator *m_allocator;                              // +0x28
    hkLargeBlockAllocator m_largeBlockAllocator;                 // +0x2c
    hkFreeList *m_sizeToFreeList[MAX_SIZE / FREELIST_ALIGNMENT + 1];   // +0xf0
    hkFreeList *m_freeLists[MAX_FREELISTS + 1];                  // +0x17c
    int m_numFreeLists;                                          // +0x208
    hkFreeList *m_freeListMemoryNext;                            // +0x20c
    hkFreeList *m_freeListMemoryEnd;                             // +0x210
    hkFreeList m_freeListMemory[MAX_FREELISTS];                  // +0x214
    int m_softLimit;                                             // +0x8fc
    int m_incrementalFreeIter;                                   // +0x900
};

HK_FORCE_INLINE hkFreeListAllocator::hkFreeListAllocator(hkMemoryAllocator *allocator)
    : m_criticalSection(4000), m_allocator(allocator), m_largeBlockAllocator(allocator), m_numFreeLists(0),
      m_incrementalFreeIter(0)
{
    m_totalBytesInFreeLists = 0;
    m_totalBytesInLargeBlocks = 0;
    setMemorySoftLimit(0x7fffffff);

    m_freeListMemoryNext = m_freeListMemory;
    m_freeListMemoryEnd = m_freeListMemoryNext + MAX_FREELISTS;

    for (int i = 0; i < MAX_SIZE / FREELIST_ALIGNMENT + 1; i++) {
        m_sizeToFreeList[i] = HK_NULL;
    }

    m_sizeToFreeList[0x200 >> FREELIST_SHIFT] = _newFreeList(0x200, 0x80, 0x10000);
    m_sizeToFreeList[0x100 >> FREELIST_SHIFT] = _newFreeList(0x100, 0x20, 0x8000);
    m_sizeToFreeList[0] = _newFreeList(0, 4, 0x100);
    hkFreeList *largest = _newFreeList(MAX_SIZE, 0x80, 0x4400);
    m_sizeToFreeList[MAX_SIZE >> FREELIST_SHIFT] = largest;
    m_sizeToFreeList[(MAX_SIZE >> FREELIST_SHIFT) - 1] = largest;

    for (int size = MAX_SIZE; size >= FREELIST_ALIGNMENT; size -= FREELIST_ALIGNMENT) {
        int index = size >> FREELIST_SHIFT;
        if (m_sizeToFreeList[index] == HK_NULL) {
            int align = FREELIST_ALIGNMENT;
            unsigned int blockSize;
            if (size <= 0 || (blockSize = size * 16) < 4096) {
                blockSize = 4096;
            }
            if (size >= 64) {
                align = 32;
            }
            m_sizeToFreeList[index] = _newFreeList(size, align, blockSize);
        }
    }
}

extern "C" hkFreeListAllocator *fn_82CF9730(hkFreeListAllocator *self, hkMemoryAllocator *allocator)
{
    self->hkFreeListAllocator::hkFreeListAllocator(allocator);
    return self;
}
