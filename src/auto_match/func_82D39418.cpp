// hkpCollisionFilterList::hkpCollisionFilterList(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Filter/List/hkpCollisionFilterList.cpp): the interfaces' vtables, the class's own, and
// m_type = HK_FILTER_LIST when finishing. Its finish function and getVtable function call it; because a
// Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that runs the
// constructor on the given storage (MSVC's explicit constructor call; placement new would add a null check).
// The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkpCollisionFilter.h"

class hkpCollisionFilterList : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpCollisionFilterList(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_collisionFilters(flag)
    {
        if (flag.m_finishing)
            m_type = 3;   // HK_FILTER_LIST
    }

    hkArray<hkpCollisionFilter *> m_collisionFilters;   // +0x30
};

extern "C" hkpCollisionFilterList *fn_82D39418(hkpCollisionFilterList *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpCollisionFilterList::hkpCollisionFilterList(flag);
    return self;
}
