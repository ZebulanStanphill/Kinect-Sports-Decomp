// cleanupLoadedObjecthkpFastMeshShape: the cleanup function in hkpFastMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpFastMeshShape {
public:
    virtual ~hkpFastMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpFastMeshShape(void *p)
{
    static_cast<hkpFastMeshShape *>(p)->~hkpFastMeshShape();
}
