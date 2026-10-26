// cleanupLoadedObjecthkxAnimatedQuaternion: the cleanup function in hkxAnimatedQuaternion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxAnimatedQuaternion {
public:
    virtual ~hkxAnimatedQuaternion();
};

void HK_CALL cleanupLoadedObjecthkxAnimatedQuaternion(void *p)
{
    static_cast<hkxAnimatedQuaternion *>(p)->~hkxAnimatedQuaternion();
}
