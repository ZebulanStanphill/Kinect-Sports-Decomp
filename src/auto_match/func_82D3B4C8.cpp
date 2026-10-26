// cleanupLoadedObjecthkpStorageMeshShape: the cleanup function in hkpStorageMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStorageMeshShape {
public:
    virtual ~hkpStorageMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpStorageMeshShape(void *p)
{
    static_cast<hkpStorageMeshShape *>(p)->~hkpStorageMeshShape();
}
