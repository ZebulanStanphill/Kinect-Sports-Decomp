// cleanupLoadedObjecthkpListShape: the cleanup function in hkpListShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpListShape {
public:
    virtual ~hkpListShape();
};

void HK_CALL cleanupLoadedObjecthkpListShape(void *p)
{
    static_cast<hkpListShape *>(p)->~hkpListShape();
}
