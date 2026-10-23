// hkMemoryRouter (Common/Base/Memory/System/hkMemoryRouter.h): the per-thread
// set of allocators. getInstancePtr() reads a TLS slot and is not inlined in
// the game: it is fn_82CE5410 (KeTlsGetValue(lbl_8323B1B0)), which keeps its
// fn_ name because Matching C units call it. Likewise the out-of-line helpers
// below keep their fn_ names and are reached through inline wrappers.
//
// Layout, from the offsets the game reads after fn_82CE5410:
//   +0x00 m_stack   (a small LIFO allocator; the game bumps a pointer at +0)
//   +0x0C m_temp    +0x10 m_heap    +0x14 m_debug    +0x18 m_solver
// heap() (+0x10) is the one hkReferencedObject's class allocator uses; the
// other names follow Havok's member order.
#ifndef HAVOK_HKMEMORYROUTER_H
#define HAVOK_HKMEMORYROUTER_H
#include "havok/hkMemoryAllocator.h"

class hkMemoryRouter;
extern "C" {
hkMemoryRouter *fn_82CE5410(void);                                     // hkMemoryRouter::getInstancePtr()
void *fn_82CE5250(hkMemoryAllocator *b, int nbytes, int align);        // hkMemoryRouter::alignedAlloc
void fn_82CE52A8(hkMemoryAllocator *b, void *p);                       // hkMemoryRouter::alignedFree
void *fn_82CE52E0(hkMemoryAllocator *b, int nbytes);                   // hkMemoryRouter::easyAlloc
void fn_82CE5338(hkMemoryAllocator *b, void *p);                       // hkMemoryRouter::easyFree
}

// Memory classes are only used by Havok's memory tracking; the values are
// arbitrary and never reach the generated code.
enum HK_MEMORY_CLASS {
    HK_MEMORY_CLASS_BASE,
    HK_MEMORY_CLASS_BASE_CLASS,
    HK_MEMORY_CLASS_ARRAY,
    HK_MEMORY_CLASS_STRING,
    HK_MEMORY_CLASS_STREAM,
    HK_MEMORY_CLASS_SERIALIZE,
    HK_MEMORY_CLASS_SCENE_DATA,
    HK_MEMORY_CLASS_SHAPE,
    HK_MEMORY_CLASS_COLLIDE,
    HK_MEMORY_CLASS_DYNAMICS,
    HK_MEMORY_CLASS_CONSTRAINT,
    HK_MEMORY_CLASS_UTILITIES
};

class hkMemoryRouter {
public:
    static HK_FORCE_INLINE hkMemoryRouter *HK_CALL getInstancePtr() { return fn_82CE5410(); }
    static HK_FORCE_INLINE hkMemoryRouter &HK_CALL getInstance() { return *fn_82CE5410(); }

    HK_FORCE_INLINE hkMemoryAllocator &temp() { return *m_temp; }
    HK_FORCE_INLINE hkMemoryAllocator &heap() { return *m_heap; }
    HK_FORCE_INLINE hkMemoryAllocator &debug() { return *m_debug; }
    HK_FORCE_INLINE hkMemoryAllocator &solver() { return *m_solver; }

    static HK_FORCE_INLINE void *HK_CALL alignedAlloc(hkMemoryAllocator &b, int nbytes, int align)
    { return fn_82CE5250(&b, nbytes, align); }
    static HK_FORCE_INLINE void HK_CALL alignedFree(hkMemoryAllocator &b, void *p)
    { fn_82CE52A8(&b, p); }
    static HK_FORCE_INLINE void *HK_CALL easyAlloc(hkMemoryAllocator &b, int nbytes)
    { return fn_82CE52E0(&b, nbytes); }
    static HK_FORCE_INLINE void HK_CALL easyFree(hkMemoryAllocator &b, void *p)
    { fn_82CE5338(&b, p); }

    char m_stack[0xC];
    hkMemoryAllocator *m_temp;
    hkMemoryAllocator *m_heap;
    hkMemoryAllocator *m_debug;
    hkMemoryAllocator *m_solver;
};

// Havok's typed helpers. The pointer argument is evaluated before
// getInstance() is called, as in the game's code (for example
// ~hkBufferedStreamReader loads m_buf.begin before calling fn_82CE5410).
template <typename TYPE>
HK_FORCE_INLINE TYPE *HK_CALL hkAlignedAllocate(int alignment, int numberOfObjects, HK_MEMORY_CLASS cl)
{
    return static_cast<TYPE *>(hkMemoryRouter::alignedAlloc(hkMemoryRouter::getInstance().heap(),
                                                            numberOfObjects * int(sizeof(TYPE)), alignment));
}
template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkAlignedDeallocate(TYPE *ptr)
{
    hkMemoryRouter::alignedFree(hkMemoryRouter::getInstance().heap(), static_cast<void *>(ptr));
}
template <typename TYPE>
HK_FORCE_INLINE TYPE *HK_CALL hkAllocate(int numberOfObjects, HK_MEMORY_CLASS cl)
{
    return static_cast<TYPE *>(hkMemoryRouter::easyAlloc(hkMemoryRouter::getInstance().heap(),
                                                         numberOfObjects * int(sizeof(TYPE))));
}
template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkDeallocate(TYPE *ptr)
{
    hkMemoryRouter::easyFree(hkMemoryRouter::getInstance().heap(), static_cast<void *>(ptr));
}

#endif
