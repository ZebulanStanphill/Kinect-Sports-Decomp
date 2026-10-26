// cleanupLoadedObjecthkxMesh: the cleanup function in hkxMesh's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkxMesh {
public:
    virtual ~hkxMesh();
};

void HK_CALL cleanupLoadedObjecthkxMesh(void *p)
{
    static_cast<hkxMesh *>(p)->~hkxMesh();
}
