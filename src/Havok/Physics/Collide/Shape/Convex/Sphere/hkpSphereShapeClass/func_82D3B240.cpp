// finishLoadedObjecthkpSphereShape: the finish function in hkpSphereShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpSphereShape.h"

void HK_CALL finishLoadedObjecthkpSphereShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSphereShape(f);
}
