// cleanupLoadedObjecthkpBoxMotion: the cleanup function in hkpBoxMotion's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpBoxMotion {
public:
    virtual ~hkpBoxMotion();
};

void HK_CALL cleanupLoadedObjecthkpBoxMotion(void *p)
{
    static_cast<hkpBoxMotion *>(p)->~hkpBoxMotion();
}
