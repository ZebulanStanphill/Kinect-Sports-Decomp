// cleanupLoadedObjecthkpShapeInfo: the cleanup function in hkpShapeInfo's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpShapeInfo {
public:
    virtual ~hkpShapeInfo();
};

void HK_CALL cleanupLoadedObjecthkpShapeInfo(void *p)
{
    static_cast<hkpShapeInfo *>(p)->~hkpShapeInfo();
}
