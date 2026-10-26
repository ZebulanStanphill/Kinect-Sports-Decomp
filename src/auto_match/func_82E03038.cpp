// cleanupLoadedObjecthkxMeshUserChannelInfo: the cleanup function in hkxMeshUserChannelInfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMeshUserChannelInfo {
public:
    virtual ~hkxMeshUserChannelInfo();
};

void HK_CALL cleanupLoadedObjecthkxMeshUserChannelInfo(void *p)
{
    static_cast<hkxMeshUserChannelInfo *>(p)->~hkxMeshUserChannelInfo();
}
