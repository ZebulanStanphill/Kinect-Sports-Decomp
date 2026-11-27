// finishLoadedObjecthkpStorageMeshShape: the finish function in hkpStorageMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D4FF88) on the loaded object.
#include "havok/hkpStorageMeshShape.h"

extern "C" void fn_82D3B4B8(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpStorageMeshShape(f);
}
