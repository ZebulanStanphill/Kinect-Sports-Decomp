// cleanupLoadedObjecthkpExtendedMeshShape: the cleanup function in hkpExtendedMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpExtendedMeshShape {
public:
    virtual ~hkpExtendedMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpExtendedMeshShape(void *p)
{
    static_cast<hkpExtendedMeshShape *>(p)->~hkpExtendedMeshShape();
}
