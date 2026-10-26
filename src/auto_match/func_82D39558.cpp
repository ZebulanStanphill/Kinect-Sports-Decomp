// cleanupLoadedObjecthkpCompressedMeshShape: the cleanup function in hkpCompressedMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpCompressedMeshShape {
public:
    virtual ~hkpCompressedMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpCompressedMeshShape(void *p)
{
    static_cast<hkpCompressedMeshShape *>(p)->~hkpCompressedMeshShape();
}
