// cleanupLoadedObjecthkxAnimatedFloat: the cleanup function in hkxAnimatedFloat's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxAnimatedFloat {
public:
    virtual ~hkxAnimatedFloat();
};

void HK_CALL cleanupLoadedObjecthkxAnimatedFloat(void *p)
{
    static_cast<hkxAnimatedFloat *>(p)->~hkxAnimatedFloat();
}
