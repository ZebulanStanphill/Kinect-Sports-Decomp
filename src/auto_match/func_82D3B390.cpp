// cleanupLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage: the cleanup function in hkpStorageExtendedMeshShape::ShapeSubpartStorage's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpStorageExtendedMeshShape.h"

void HK_CALL cleanupLoadedObjecthkpStorageExtendedMeshShapeShapeSubpartStorage(void *p)
{
    static_cast<hkpStorageExtendedMeshShape::ShapeSubpartStorage *>(p)->~ShapeSubpartStorage();
}
