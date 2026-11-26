// finishLoadedObjecthkpConstrainedSystemFilter: the finish function in hkpConstrainedSystemFilter's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpCollisionFilter (its four filter interfaces at
// +0x8..+0x14), then hkpConstraintListener at +0x30.
#include "havok/hkpConstrainedSystemFilter.h"

void HK_CALL finishLoadedObjecthkpConstrainedSystemFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConstrainedSystemFilter(f);
}
