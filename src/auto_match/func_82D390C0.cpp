// cleanupLoadedObjecthkpBoxShape: the cleanup function in hkpBoxShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpBoxShape {
public:
    virtual ~hkpBoxShape();
};

void HK_CALL cleanupLoadedObjecthkpBoxShape(void *p)
{
    static_cast<hkpBoxShape *>(p)->~hkpBoxShape();
}
