// hkpStorageMeshShape::SubpartStorage::SubpartStorage(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp). Its
// finish function and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name
// and is written as an extern "C" function that runs the constructor on the given storage (MSVC's explicit
// constructor call; placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpStorageMeshShape.h"

extern "C" hkpStorageMeshShape::SubpartStorage *fn_82D4F628(hkpStorageMeshShape::SubpartStorage *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageMeshShape::SubpartStorage::SubpartStorage(flag);
    return self;
}
