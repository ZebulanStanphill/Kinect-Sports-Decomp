// cleanupLoadedObjecthkxMeshUserChannelInfo: the cleanup function in hkxMeshUserChannelInfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor. "hkxMeshUserChannelInfo" is the reflection name of hkxMesh::UserChannelInfo.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxMeshUserChannelInfo(void *p)
{
    static_cast<hkxMesh::UserChannelInfo *>(p)->~UserChannelInfo();
}
