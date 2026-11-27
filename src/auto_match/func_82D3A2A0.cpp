// finishLoadedObjecthkpFastMeshShape: the finish function in hkpFastMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3A3A0) on the loaded object.
#include "havok/hkpFastMeshShape.h"

extern "C" void fn_82D3A2A0(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpFastMeshShape(f);
}
