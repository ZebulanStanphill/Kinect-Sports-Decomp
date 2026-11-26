// finishLoadedObjecthkpPlaneShape: the finish function in hkpPlaneShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpPlaneShape.h"

void HK_CALL finishLoadedObjecthkpPlaneShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPlaneShape(f);
}
