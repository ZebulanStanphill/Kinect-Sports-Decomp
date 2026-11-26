// finishLoadedObjecthkpCachingShapePhantom: the finish function in hkpCachingShapePhantom's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish
// constructor over a loaded object.
#include "havok/hkpCachingShapePhantom.h"

void HK_CALL finishLoadedObjecthkpCachingShapePhantom(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpCachingShapePhantom(f);
}
