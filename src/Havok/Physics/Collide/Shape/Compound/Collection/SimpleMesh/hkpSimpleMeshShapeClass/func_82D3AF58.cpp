// cleanupLoadedObjecthkpSimpleMeshShape: the cleanup function in hkpSimpleMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSimpleMeshShape {
public:
    virtual ~hkpSimpleMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpSimpleMeshShape(void *p)
{
    static_cast<hkpSimpleMeshShape *>(p)->~hkpSimpleMeshShape();
}
