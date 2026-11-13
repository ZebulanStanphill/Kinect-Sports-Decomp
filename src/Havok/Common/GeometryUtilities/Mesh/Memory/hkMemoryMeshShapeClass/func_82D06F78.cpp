// cleanupLoadedObjecthkMemoryMeshShape: the cleanup function in hkMemoryMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkMemoryMeshShape {
public:
    virtual ~hkMemoryMeshShape();
};

void HK_CALL cleanupLoadedObjecthkMemoryMeshShape(void *p)
{
    static_cast<hkMemoryMeshShape *>(p)->~hkMemoryMeshShape();
}
