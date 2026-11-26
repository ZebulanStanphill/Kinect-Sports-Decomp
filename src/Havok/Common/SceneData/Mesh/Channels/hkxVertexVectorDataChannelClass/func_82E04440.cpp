// cleanupLoadedObjecthkxVertexVectorDataChannel: the cleanup function in hkxVertexVectorDataChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkxVertexVectorDataChannel.h"

void HK_CALL cleanupLoadedObjecthkxVertexVectorDataChannel(void *p)
{
    static_cast<hkxVertexVectorDataChannel *>(p)->~hkxVertexVectorDataChannel();
}
