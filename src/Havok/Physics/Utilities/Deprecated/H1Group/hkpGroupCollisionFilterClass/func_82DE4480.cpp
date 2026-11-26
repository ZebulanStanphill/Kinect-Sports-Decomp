// finishLoadedObjecthkpGroupCollisionFilter: the finish function in hkpGroupCollisionFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter, with its four filter interfaces at
// +0x8..+0x14.
#include "havok/hkpGroupCollisionFilter.h"

void HK_CALL finishLoadedObjecthkpGroupCollisionFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpGroupCollisionFilter(f);
}
