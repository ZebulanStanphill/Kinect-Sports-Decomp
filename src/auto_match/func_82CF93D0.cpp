// hkFreeListAllocator::~hkFreeListAllocator (Common/Base/Memory/Allocator/
// FreeList/hkFreeListAllocator.cpp). It keeps its fn_ name because a Matching
// C unit (the deleting destructor fn_82CF98B8) calls it: the destructor is
// defined inline (forced) and expanded into an extern "C" definition. Member
// names and the layout between the named members are not confirmed.
#include "havok/hkBaseTypes.h"

class hkMemoryAllocator;
class hkFreeList;
class hkLargeBlockAllocator;
class hkFreeListAllocator;
extern "C" {
void fn_82CE6978(hkMemoryAllocator *self);       // hkMemoryAllocator::~hkMemoryAllocator
void fn_82D015D8(hkFreeList *self);              // hkFreeList::~hkFreeList
void fn_82D028F8(hkLargeBlockAllocator *self);   // hkLargeBlockAllocator::~hkLargeBlockAllocator
void fn_82CF9318(hkFreeListAllocator *self);     // frees every free list (called first by the destructor)
}

// hkMemoryAllocator's destructor is out of line under its fn_ name (a Matching
// C unit calls it) and stores the hkMemoryAllocator vtable itself, so this
// local declaration reaches it through an inline wrapper and declares the
// class novtable: the wrapper must not store the vtable a second time.
class __declspec(novtable) hkMemoryAllocator {
public:
    // HK_DECLARE_PLACEMENT_ALLOCATOR(): deleting does nothing.
    HK_FORCE_INLINE void *HK_CALL operator new(hk_size_t, void *p) { return p; }
    HK_FORCE_INLINE void HK_CALL operator delete(void *, void *) {}
    HK_FORCE_INLINE void HK_CALL operator delete(void *) {}

    HK_FORCE_INLINE virtual ~hkMemoryAllocator() { fn_82CE6978(this); }
    virtual void *blockAlloc(int numBytes) = 0;
    virtual void blockFree(void *p, int numBytes) = 0;
};

// Members whose destructors keep their fn_ names, as opaque wrappers.
class hkLargeBlockAllocator {
public:
    HK_FORCE_INLINE ~hkLargeBlockAllocator() { fn_82D028F8(this); }
    hkUint8 m_data[0x150];
};

class hkFreeList {
public:
    HK_FORCE_INLINE ~hkFreeList() { fn_82D015D8(this); }
    hkUint8 m_data[0x34];
};

class hkFreeListAllocator : public hkMemoryAllocator {
public:
    virtual HK_FORCE_INLINE ~hkFreeListAllocator() { fn_82CF9318(this); }
    virtual void *blockAlloc(int numBytes);
    virtual void blockFree(void *p, int numBytes);

    hkUint8 m_state[0x28];                           // +0x4
    hkLargeBlockAllocator m_largeBlockAllocator;     // +0x2C
    hkFreeList *m_freeLists[34];                     // +0x17C
    hkUint8 m_state2[0x4];                           // +0x204
    int m_numFreeLists;                              // +0x208
    hkFreeList *m_freeListMemoryTop;                 // +0x20C
    hkUint8 m_state3[0x4];                           // +0x210
    hkFreeList m_freeListMemory[34];                 // +0x214
};

extern "C" void fn_82CF93D0(hkFreeListAllocator *self)
{
    self->hkFreeListAllocator::~hkFreeListAllocator();
}
