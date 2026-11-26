// finishLoadedObjecthkxMeshSection: the finish function in hkxMeshSection's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxMeshSection -> hkReferencedObject -> hkBaseObject.
#include "havok/hkBase.h"
#include "havok/hkSceneData.h"

void HK_CALL finishLoadedObjecthkxMeshSection(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxMeshSection(f);
}
