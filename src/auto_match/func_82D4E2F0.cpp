// hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp). Its
// finish function and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name
// and is written as an extern "C" function that runs the constructor on the given storage (MSVC's explicit
// constructor call; placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpStorageExtendedMeshShape.h"

struct hkpNamedMeshMaterial : public hkpMeshMaterial {
    hkStringPtr m_name;   // +0x4
};

// The header declares the constructor; it is defined here, HK_FORCE_INLINE (it needs hkpNamedMeshMaterial).
HK_FORCE_INLINE hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_vertices(flag), m_indices8(flag), m_indices16(flag), m_indices32(flag),
      m_materialIndices(flag), m_materials(flag), m_namedMaterials(flag), m_materialIndices16(flag)
{
}

extern "C" hkpStorageExtendedMeshShape::MeshSubpartStorage *fn_82D4E2F0(
    hkpStorageExtendedMeshShape::MeshSubpartStorage *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(flag);
    return self;
}
