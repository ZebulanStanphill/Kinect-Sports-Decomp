// hkpGroupFilter::hkpGroupFilter(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Filter/Group/hkpGroupFilter.cpp): the interfaces' vtables,
// the class's own, and m_type = HK_FILTER_GROUP when finishing. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that runs
// the constructor on the given storage (MSVC's explicit constructor call; placement new would add a null
// check). The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkpCollisionFilter.h"

class hkpGroupFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpGroupFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag)
    {
        if (flag.m_finishing)
            m_type = 2;   // HK_FILTER_GROUP
    }

    int m_nextFreeSystemGroup;              // +0x30
    hkUint32 m_collisionLookupTable[32];    // +0x34
};

extern "C" hkpGroupFilter *fn_82D3A4E0(hkpGroupFilter *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpGroupFilter::hkpGroupFilter(flag);
    return self;
}
