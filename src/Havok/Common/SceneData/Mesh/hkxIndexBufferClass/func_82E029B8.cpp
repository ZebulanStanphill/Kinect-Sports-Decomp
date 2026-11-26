// finishLoadedObjecthkxIndexBuffer: the finish function in hkxIndexBuffer's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxIndexBuffer -> hkReferencedObject -> hkBaseObject.
#include "havok/hkSceneData.h"

void HK_CALL finishLoadedObjecthkxIndexBuffer(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxIndexBuffer(f);
}
