// cleanupLoadedObjecthkxVertexBuffer: the cleanup function in hkxVertexBuffer's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxVertexBuffer {
public:
    virtual ~hkxVertexBuffer();
};

void HK_CALL cleanupLoadedObjecthkxVertexBuffer(void *p)
{
    static_cast<hkxVertexBuffer *>(p)->~hkxVertexBuffer();
}
