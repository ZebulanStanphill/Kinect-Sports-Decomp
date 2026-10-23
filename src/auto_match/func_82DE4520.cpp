// hkpGroupCollisionFilter's scalar deleting destructor (Physics/Collide/Filter/Group/hkpGroupCollisionFilter.h),
// generated from the implicit destructor (only the filter interfaces' and hkBaseObject's vtable stores remain);
// identical code also serves hkpCollisionFilter's copy of the vtable at 0x821D4E98 (folded). The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkpCollisionFilter.h"

class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGroupCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}

    hkBool m_noGroupCollisionEnabled;     // +0x30
    hkUint32 m_collisionGroups[32];       // +0x34
};

void emitVtable_82DE4520(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpGroupCollisionFilter(f); }
