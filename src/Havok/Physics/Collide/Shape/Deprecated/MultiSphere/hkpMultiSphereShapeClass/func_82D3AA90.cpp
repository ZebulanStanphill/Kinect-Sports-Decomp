// finishLoadedObjecthkpMultiSphereShape: the finish function in hkpMultiSphereShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpMultiSphereShape.h"

void HK_CALL finishLoadedObjecthkpMultiSphereShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMultiSphereShape(f);
}
