// cleanupLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage: the cleanup function in hkpStorageExtendedMeshShape::MeshSubpartStorage's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpStorageExtendedMeshShape.h"

void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeMeshSubpartStorage(void *p)
{
    static_cast<hkpStorageExtendedMeshShape::MeshSubpartStorage *>(p)->~MeshSubpartStorage();
}
