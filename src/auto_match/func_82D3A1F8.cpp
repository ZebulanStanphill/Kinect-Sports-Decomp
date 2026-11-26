// finishLoadedObjecthkpExtendedMeshShape: the finish function in hkpExtendedMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D438E0) on the loaded object.
#include "havok/hkpExtendedMeshShape.h"

extern "C" void fn_82D3A1F8(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpExtendedMeshShape(f);
}
