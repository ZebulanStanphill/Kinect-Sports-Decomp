// cleanupLoadedObjecthkxIndexBuffer: the cleanup function in hkxIndexBuffer's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxIndexBuffer {
public:
    virtual ~hkxIndexBuffer();
};

void HK_CALL cleanupLoadedObjecthkxIndexBuffer(void *p)
{
    static_cast<hkxIndexBuffer *>(p)->~hkxIndexBuffer();
}
