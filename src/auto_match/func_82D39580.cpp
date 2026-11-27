// finishLoadedObjecthkpCompressedMeshShape: the finish function in hkpCompressedMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D45F58) on the loaded object.
#include "havok/hkpCompressedMeshShape.h"

extern "C" void fn_82D39580(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpCompressedMeshShape(f);
}
