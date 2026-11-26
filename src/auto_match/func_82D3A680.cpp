// finishLoadedObjecthkpMeshShape: the finish function in hkpMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D4B0F8) on the loaded object.
#include "havok/hkpMeshShape.h"

extern "C" void fn_82D3A680(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMeshShape(f);
}
