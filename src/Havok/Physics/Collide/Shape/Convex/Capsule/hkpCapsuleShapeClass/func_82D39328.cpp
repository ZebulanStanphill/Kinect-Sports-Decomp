// cleanupLoadedObjecthkpCapsuleShape: the cleanup function in hkpCapsuleShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpCapsuleShape {
public:
    virtual ~hkpCapsuleShape();
};

void HK_CALL cleanupLoadedObjecthkpCapsuleShape(void *p)
{
    static_cast<hkpCapsuleShape *>(p)->~hkpCapsuleShape();
}
