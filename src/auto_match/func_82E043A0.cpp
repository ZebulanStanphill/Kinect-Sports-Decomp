// cleanupLoadedObjecthkxVertexIntDataChannel: the cleanup function in hkxVertexIntDataChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxVertexIntDataChannel {
public:
    virtual ~hkxVertexIntDataChannel();
};

void HK_CALL cleanupLoadedObjecthkxVertexIntDataChannel(void *p)
{
    static_cast<hkxVertexIntDataChannel *>(p)->~hkxVertexIntDataChannel();
}
