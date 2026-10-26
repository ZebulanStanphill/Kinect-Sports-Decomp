// cleanupLoadedObjecthkpStorageMeshShapeSubpartStorage: the cleanup function in hkpStorageMeshShape::SubpartStorage's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStorageMeshShape {
public:
    class SubpartStorage {
    public:
        virtual ~SubpartStorage();
    };
};

void HK_CALL cleanupLoadedObjecthkpStorageMeshShapeSubpartStorage(void *p)
{
    static_cast<hkpStorageMeshShape::SubpartStorage *>(p)->~SubpartStorage();
}
