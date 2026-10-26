// cleanupLoadedObjecthkpConvexVerticesShape: the cleanup function in hkpConvexVerticesShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConvexVerticesShape {
public:
    virtual ~hkpConvexVerticesShape();
};

void HK_CALL cleanupLoadedObjecthkpConvexVerticesShape(void *p)
{
    static_cast<hkpConvexVerticesShape *>(p)->~hkpConvexVerticesShape();
}
