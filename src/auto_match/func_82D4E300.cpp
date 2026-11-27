// hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish
// constructor (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp): the
// hkpExtendedMeshShape part (its finish constructor is out of line, 82D438E0), then the two vtables, then (when
// finishing) each storage object gets its vtable (placement new) and every subpart's pointers are pointed back
// into its storage. MeshSubpartStorage's finish constructor (out of line in 82D4E2F0) is inlined here, so this
// unit defines it HK_FORCE_INLINE.
#include "havok/hkpStorageExtendedMeshShape.h"

HK_FORCE_INLINE hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_vertices(flag), m_indices8(flag), m_indices16(flag), m_indices32(flag),
      m_materialIndices(flag), m_materials(flag), m_namedMaterials(flag), m_materialIndices16(flag)
{
}

hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpExtendedMeshShape(flag), m_meshstorage(flag), m_shapestorage(flag)
{
    if (flag.m_finishing) {
        for (int i = 0; i < m_trianglesSubparts.getSize(); ++i) {
            TrianglesSubpart &part = m_trianglesSubparts[i];
            new (m_meshstorage[i]) MeshSubpartStorage(flag);
            MeshSubpartStorage *storage = m_meshstorage[i];
            part.m_vertexBase = storage->m_vertices.begin();
            if (part.m_stridingType == INDICES_INT8)
                part.m_indexBase = storage->m_indices8.begin();
            else if (part.m_stridingType == INDICES_INT16)
                part.m_indexBase = storage->m_indices16.begin();
            else
                part.m_indexBase = storage->m_indices32.begin();
            if (part.m_materialIndexStridingType == MATERIAL_INDICES_INT8)
                part.m_materialIndexBase = storage->m_materialIndices.begin();
            else
                part.m_materialIndexBase = storage->m_materialIndices16.begin();
            if (storage->m_namedMaterials.getSize() != 0)
                part.m_materialBase = storage->m_namedMaterials.begin();
            else
                part.m_materialBase = storage->m_materials.begin();
        }
        for (int i = 0; i < m_shapesSubparts.getSize(); ++i) {
            ShapesSubpart &part = m_shapesSubparts[i];
            new (m_shapestorage[i]) ShapeSubpartStorage(flag);
            ShapeSubpartStorage *storage = m_shapestorage[i];
            if (part.m_materialIndexStridingType == MATERIAL_INDICES_INT8)
                part.m_materialIndexBase = storage->m_materialIndices.begin();
            else
                part.m_materialIndexBase = storage->m_materialIndices16.begin();
            part.m_materialBase = storage->m_materials.begin();
        }
    }
}
