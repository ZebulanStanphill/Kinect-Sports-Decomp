// finishLoadedObjecthkpGroupFilter: the finish function in hkpGroupFilter's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish constructor over a loaded object.
#include "havok/hkpGroupFilter.h"

void HK_CALL finishLoadedObjecthkpGroupFilter(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpGroupFilter(f);
}
