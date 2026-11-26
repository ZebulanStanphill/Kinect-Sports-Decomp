// cleanupLoadedObjecthkxVertexSelectionChannel: the cleanup function in hkxVertexSelectionChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkxVertexSelectionChannel.h"

void HK_CALL cleanupLoadedObjecthkxVertexSelectionChannel(void *p)
{
    static_cast<hkxVertexSelectionChannel *>(p)->~hkxVertexSelectionChannel();
}
