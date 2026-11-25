// finishLoadedObjecthkxMeshUserChannelInfo: the finish function in hkxMeshUserChannelInfo's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok); it runs the finish constructor on an object loaded in place. The hkStringPtr members' finish constructors are out of line (fn_82CED308).
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

void HK_CALL finishLoadedObjecthkxMeshUserChannelInfo(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxMesh::UserChannelInfo(f);
}
