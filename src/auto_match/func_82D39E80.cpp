// cleanupLoadedObjecthkpConvexTranslateShape: the cleanup function in hkpConvexTranslateShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConvexTranslateShape {
public:
    virtual ~hkpConvexTranslateShape();
};

void HK_CALL cleanupLoadedObjecthkpConvexTranslateShape(void *p)
{
    static_cast<hkpConvexTranslateShape *>(p)->~hkpConvexTranslateShape();
}
