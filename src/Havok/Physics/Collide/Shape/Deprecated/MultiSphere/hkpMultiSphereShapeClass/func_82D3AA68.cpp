// cleanupLoadedObjecthkpMultiSphereShape: the cleanup function in hkpMultiSphereShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMultiSphereShape {
public:
    virtual ~hkpMultiSphereShape();
};

void HK_CALL cleanupLoadedObjecthkpMultiSphereShape(void *p)
{
    static_cast<hkpMultiSphereShape *>(p)->~hkpMultiSphereShape();
}
