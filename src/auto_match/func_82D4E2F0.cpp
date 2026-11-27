// hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(hkFinishLoadedObjectFlag), the out-of-line
// finish constructor (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/
// hkpStorageExtendedMeshShape.cpp). Its finish function and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpStorageExtendedMeshShape.h"

hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_vertices(flag), m_indices8(flag), m_indices16(flag), m_indices32(flag),
      m_materialIndices(flag), m_materials(flag), m_namedMaterials(flag), m_materialIndices16(flag)
{
}
