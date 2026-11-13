// cleanupLoadedObjecthkxAnimatedVector: the cleanup function in hkxAnimatedVector's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxAnimatedVector {
public:
    virtual ~hkxAnimatedVector();
};

void HK_CALL cleanupLoadedObjecthkxAnimatedVector(void *p)
{
    static_cast<hkxAnimatedVector *>(p)->~hkxAnimatedVector();
}
