// cleanupLoadedObjecthkpConvexPieceMeshShape: the cleanup function in hkpConvexPieceMeshShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpConvexPieceMeshShape {
public:
    virtual ~hkpConvexPieceMeshShape();
};

void HK_CALL cleanupLoadedObjecthkpConvexPieceMeshShape(void *p)
{
    static_cast<hkpConvexPieceMeshShape *>(p)->~hkpConvexPieceMeshShape();
}
