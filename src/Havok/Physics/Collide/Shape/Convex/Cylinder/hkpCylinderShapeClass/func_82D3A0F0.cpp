// cleanupLoadedObjecthkpCylinderShape: the cleanup function in hkpCylinderShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpCylinderShape {
public:
    virtual ~hkpCylinderShape();
};

void HK_CALL cleanupLoadedObjecthkpCylinderShape(void *p)
{
    static_cast<hkpCylinderShape *>(p)->~hkpCylinderShape();
}
