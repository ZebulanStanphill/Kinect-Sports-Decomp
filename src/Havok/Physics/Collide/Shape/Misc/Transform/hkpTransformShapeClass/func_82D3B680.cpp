// cleanupLoadedObjecthkpTransformShape: the cleanup function in hkpTransformShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpTransformShape {
public:
    virtual ~hkpTransformShape();
};

void HK_CALL cleanupLoadedObjecthkpTransformShape(void *p)
{
    static_cast<hkpTransformShape *>(p)->~hkpTransformShape();
}
