// cleanupLoadedObjecthkpPlaneShape: the cleanup function in hkpPlaneShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpPlaneShape {
public:
    virtual ~hkpPlaneShape();
};

void HK_CALL cleanupLoadedObjecthkpPlaneShape(void *p)
{
    static_cast<hkpPlaneShape *>(p)->~hkpPlaneShape();
}
