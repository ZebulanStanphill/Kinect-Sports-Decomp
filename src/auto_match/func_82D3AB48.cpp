// hkpNullCollisionFilter::hkpNullCollisionFilter(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Filter/Null/hkpNullCollisionFilter.cpp): the interfaces' vtables,
// the class's own, and m_type = HK_FILTER_NULL when finishing. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that runs
// the constructor on the given storage (MSVC's explicit constructor call; placement new would add a null
// check). The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkpCollisionFilter.h"

class hkpNullCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpNullCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag)
    {
        if (flag.m_finishing)
            m_type = 1;   // HK_FILTER_NULL
    }
};

extern "C" hkpNullCollisionFilter *fn_82D3AB48(hkpNullCollisionFilter *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpNullCollisionFilter::hkpNullCollisionFilter(flag);
    return self;
}
