// cleanupLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage: the cleanup function in hkpStorageExtendedMeshShape::ShapeSubpartStorage's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStorageExtendedMeshShape {
public:
    class ShapeSubpartStorage {
    public:
        virtual ~ShapeSubpartStorage();
    };
};

void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage(void *p)
{
    static_cast<hkpStorageExtendedMeshShape::ShapeSubpartStorage *>(p)->~ShapeSubpartStorage();
}
