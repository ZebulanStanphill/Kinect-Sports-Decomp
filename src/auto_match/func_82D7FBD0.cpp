// finishLoadedObjecthkpSimpleShapePhantom: the finish function in hkpSimpleShapePhantom's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, Common/Base/Reflection/hkTypeInfo.h; static in Havok). Runs the finish
// constructor over a loaded object.
#include "havok/hkpSimpleShapePhantom.h"

void HK_CALL finishLoadedObjecthkpSimpleShapePhantom(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSimpleShapePhantom(f);
}
