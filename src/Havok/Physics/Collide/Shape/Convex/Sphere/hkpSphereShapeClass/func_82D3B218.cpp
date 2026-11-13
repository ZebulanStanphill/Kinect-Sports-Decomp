// cleanupLoadedObjecthkpSphereShape: the cleanup function in hkpSphereShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSphereShape {
public:
    virtual ~hkpSphereShape();
};

void HK_CALL cleanupLoadedObjecthkpSphereShape(void *p)
{
    static_cast<hkpSphereShape *>(p)->~hkpSphereShape();
}
