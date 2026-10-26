// cleanupLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage: the cleanup function in hkpStorageExtendedMeshShape::MeshSubpartStorage's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpStorageExtendedMeshShape {
public:
    class MeshSubpartStorage {
    public:
        virtual ~MeshSubpartStorage();
    };
};

void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage(void *p)
{
    static_cast<hkpStorageExtendedMeshShape::MeshSubpartStorage *>(p)->~MeshSubpartStorage();
}
