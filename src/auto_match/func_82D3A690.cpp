// cleanupLoadedObjecthkpMeshShape: the cleanup function in hkpMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpMeshShape {
public:
    virtual ~hkpMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpMeshShape(void *p)
{
    static_cast<hkpMeshShape *>(p)->~hkpMeshShape();
}
