// finishLoadedObjecthkpStorageExtendedMeshShape: the finish function in hkpStorageExtendedMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D4E300) on the loaded object.
#include "havok/hkpStorageExtendedMeshShape.h"

extern "C" void fn_82D3B3E8(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpStorageExtendedMeshShape(f);
}
