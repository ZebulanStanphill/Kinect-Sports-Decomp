// hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the hkpMeshShape part (its finish
// constructor is out of line, 82D4B0F8), then the two vtables, then (when finishing) every subpart's pointers
// are pointed back into its SubpartStorage.
#include "havok/hkpStorageMeshShape.h"

hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpMeshShape(flag), m_storage(flag)
{
    if (flag.m_finishing) {
        for (int i = 0; i < m_subparts.getSize(); ++i) {
            Subpart &part = m_subparts[i];
            SubpartStorage *storage = m_storage[i];
            part.m_vertexBase = storage->m_vertices.begin();
            if (part.m_stridingType == INDICES_INT16)
                part.m_indexBase = storage->m_indices16.begin();
            else
                part.m_indexBase = storage->m_indices32.begin();
            if (part.m_materialIndexStridingType == MATERIAL_INDICES_INT8)
                part.m_materialIndexBase = storage->m_materialIndices.begin();
            else
                part.m_materialIndexBase = storage->m_materialIndices16.begin();
            part.m_materialBase = storage->m_materials.begin();
        }
    }
}
