// cleanupLoadedObjecthkpMaxSizeMotion: the cleanup function in hkpMaxSizeMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMaxSizeMotion {
public:
    virtual ~hkpMaxSizeMotion();
};

void HK_CALL cleanupLoadedObjecthkpMaxSizeMotion(void *p)
{
    static_cast<hkpMaxSizeMotion *>(p)->~hkpMaxSizeMotion();
}
