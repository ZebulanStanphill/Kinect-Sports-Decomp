// hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp). Its
// finish function and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name
// and is written as an extern "C" function that runs the constructor on the given storage (MSVC's explicit
// constructor call; placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpStorageExtendedMeshShape.h"

extern "C" hkpStorageExtendedMeshShape::ShapeSubpartStorage *fn_82D4DC70(hkpStorageExtendedMeshShape::ShapeSubpartStorage *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage(flag);
    return self;
}
