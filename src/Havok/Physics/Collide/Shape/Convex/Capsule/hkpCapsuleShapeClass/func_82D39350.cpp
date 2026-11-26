// finishLoadedObjecthkpCapsuleShape: the finish function in hkpCapsuleShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpCapsuleShape.h"

void HK_CALL finishLoadedObjecthkpCapsuleShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpCapsuleShape(f);
}
