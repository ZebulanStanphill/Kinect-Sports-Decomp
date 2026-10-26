// cleanupLoadedObjecthkLocalFrameGroup: the cleanup function in hkLocalFrameGroup's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkLocalFrameGroup {
public:
    virtual ~hkLocalFrameGroup();
};

void HK_CALL cleanupLoadedObjecthkLocalFrameGroup(void *p)
{
    static_cast<hkLocalFrameGroup *>(p)->~hkLocalFrameGroup();
}
