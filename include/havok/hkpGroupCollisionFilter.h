// hkpGroupCollisionFilter
// (Physics/Utilities/Deprecated/H1Group/hkpGroupCollisionFilter.h), 0xB4 bytes.
#ifndef HAVOK_HKPGROUPCOLLISIONFILTER_H
#define HAVOK_HKPGROUPCOLLISIONFILTER_H

#include "havok/hkpCollisionFilter.h"

class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGroupCollisionFilter();   // out of line (82DF1780): enables group collisions, clears the 32 groups
    hkpGroupCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}

    hkBool m_noGroupCollisionEnabled;     // +0x30
    hkUint32 m_collisionGroups[32];       // +0x34
};

#endif
