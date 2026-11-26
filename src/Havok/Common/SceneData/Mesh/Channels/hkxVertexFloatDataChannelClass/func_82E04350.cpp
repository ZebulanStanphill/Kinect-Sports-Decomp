// cleanupLoadedObjecthkxVertexFloatDataChannel: the cleanup function in hkxVertexFloatDataChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkxVertexFloatDataChannel.h"

void HK_CALL cleanupLoadedObjecthkxVertexFloatDataChannel(void *p)
{
    static_cast<hkxVertexFloatDataChannel *>(p)->~hkxVertexFloatDataChannel();
}
