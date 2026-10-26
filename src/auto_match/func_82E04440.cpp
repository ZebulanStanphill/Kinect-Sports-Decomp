// cleanupLoadedObjecthkxVertexVectorDataChannel: the cleanup function in hkxVertexVectorDataChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxVertexVectorDataChannel {
public:
    virtual ~hkxVertexVectorDataChannel();
};

void HK_CALL cleanupLoadedObjecthkxVertexVectorDataChannel(void *p)
{
    static_cast<hkxVertexVectorDataChannel *>(p)->~hkxVertexVectorDataChannel();
}
