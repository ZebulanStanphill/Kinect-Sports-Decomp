// finishLoadedObjecthkpConvexPieceMeshShape: the finish function in hkpConvexPieceMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D39BE8) on the loaded object.
#include "havok/hkpConvexPieceMeshShape.h"

extern "C" void fn_82D39B20(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexPieceMeshShape(f);
}
