// finishLoadedObjecthkpGroupCollisionFilter: the finish function in hkpGroupCollisionFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter, with its four filter interfaces at
// +0x8..+0x14.
#include "havok/hkpCollisionFilter.h"

class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGroupCollisionFilter(hkFinishLoadedObjectFlag flag) : hkpCollisionFilter(flag) {}

    hkBool m_noGroupCollisionEnabled;     // +0x30
    hkUint32 m_collisionGroups[32];       // +0x34
};

void HK_CALL finishLoadedObjecthkpGroupCollisionFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpGroupCollisionFilter(f);
}
