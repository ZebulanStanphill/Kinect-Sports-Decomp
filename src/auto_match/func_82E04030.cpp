// cleanupLoadedObjecthkxTriangleSelectionChannel: the cleanup function in hkxTriangleSelectionChannel's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxTriangleSelectionChannel {
public:
    virtual ~hkxTriangleSelectionChannel();
};

void HK_CALL cleanupLoadedObjecthkxTriangleSelectionChannel(void *p)
{
    static_cast<hkxTriangleSelectionChannel *>(p)->~hkxTriangleSelectionChannel();
}
