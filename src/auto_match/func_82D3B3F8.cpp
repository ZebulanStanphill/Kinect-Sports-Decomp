// cleanupLoadedObjecthkpStorageExtendedMeshShape: the cleanup function in hkpStorageExtendedMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStorageExtendedMeshShape {
public:
    virtual ~hkpStorageExtendedMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShape(void *p)
{
    static_cast<hkpStorageExtendedMeshShape *>(p)->~hkpStorageExtendedMeshShape();
}
