// hkpCollisionFilterList::hkpCollisionFilterList(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Filter/List/hkpCollisionFilterList.cpp): the interfaces' vtables, the class's own, and
// m_type = HK_FILTER_LIST when finishing. Its finish function and getVtable function call it; because a
// Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that runs the
// constructor on the given storage (MSVC's explicit constructor call; placement new would add a null check).
// The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkpCollisionFilterList.h"

extern "C" hkpCollisionFilterList *fn_82D39418(hkpCollisionFilterList *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpCollisionFilterList::hkpCollisionFilterList(flag);
    return self;
}
