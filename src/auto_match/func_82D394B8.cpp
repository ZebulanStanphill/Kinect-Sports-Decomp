// hkpCollisionFilterList scalar deleting destructor; it calls ~hkpCollisionFilterList (out of line, already
// named) and frees through the class allocator. The finish constructor at the end only makes the compiler
// emit the vtables.
#include "havok/hkpCollisionFilter.h"

class hkpCollisionFilterList : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionFilterList(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag), m_collisionFilters(flag)
    {
        if (flag.m_finishing)
            m_type = 3;   // HK_FILTER_LIST
    }
    virtual ~hkpCollisionFilterList();

    hkArray<hkpCollisionFilter *> m_collisionFilters;   // +0x30
};

void emitVtable_82D394B8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCollisionFilterList(f); }
