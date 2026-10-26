// cleanupLoadedObjecthkpBvShape: the cleanup function in hkpBvShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpBvShape {
public:
    virtual ~hkpBvShape();
};

void HK_CALL cleanupLoadedObjecthkpBvShape(void *p)
{
    static_cast<hkpBvShape *>(p)->~hkpBvShape();
}
