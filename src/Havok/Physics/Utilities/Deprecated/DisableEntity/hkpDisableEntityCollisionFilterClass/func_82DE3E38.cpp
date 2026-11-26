// finishLoadedObjecthkpDisableEntityCollisionFilter: the finish function in hkpDisableEntityCollisionFilter's
// hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter (its four filter interfaces
// at +0x8..+0x14), then hkpEntityListener at +0x30.
#include "havok/hkpDisableEntityCollisionFilter.h"

void HK_CALL finishLoadedObjecthkpDisableEntityCollisionFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDisableEntityCollisionFilter(f);
}
