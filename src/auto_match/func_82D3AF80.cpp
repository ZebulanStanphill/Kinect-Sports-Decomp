// finishLoadedObjecthkpSimpleMeshShape: the finish function in hkpSimpleMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL,
// static in Havok), /O1: runs the out-of-line finish constructor (82D3AFC0) on the loaded object.
#include "havok/hkpSimpleMeshShape.h"

extern "C" void fn_82D3AF80(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSimpleMeshShape(f);
}
