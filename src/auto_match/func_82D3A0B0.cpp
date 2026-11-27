// finishLoadedObjecthkpConvexVerticesShape: the finish function in hkpConvexVerticesShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3F338) on the loaded object.
#include "havok/hkpConvexVerticesShape.h"

extern "C" void fn_82D3A0B0(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexVerticesShape(f);
}
