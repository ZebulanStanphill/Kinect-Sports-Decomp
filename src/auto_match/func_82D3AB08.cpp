// finishLoadedObjecthkpNullCollisionFilter: the finish function in hkpNullCollisionFilter's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpNullCollisionFilter.h"

void HK_CALL finishLoadedObjecthkpNullCollisionFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpNullCollisionFilter(f);
}
