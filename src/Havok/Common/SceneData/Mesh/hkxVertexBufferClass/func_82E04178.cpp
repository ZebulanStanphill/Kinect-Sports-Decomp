// cleanupLoadedObjecthkxVertexBuffer: the cleanup function in hkxVertexBuffer's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkSceneData.h"

void HK_CALL cleanupLoadedObjecthkxVertexBuffer(void *p)
{
    static_cast<hkxVertexBuffer *>(p)->~hkxVertexBuffer();
}
