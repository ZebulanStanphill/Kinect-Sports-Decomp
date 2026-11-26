// hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the hkpMeshShape part (its finish
// constructor is out of line, 82D4B0F8), then the two vtables, then (when finishing) every subpart's pointers
// are pointed back into its SubpartStorage.
// It keeps its fn_ name because a Matching C unit (the getVtable function, fn_82D3B4E0) calls it; the explicit
// constructor call (an MSVC extension) expands it without placement new's null check.
#include "havok/hkpStorageMeshShape.h"

// The header declares the constructor; it is defined here, HK_FORCE_INLINE.
HK_FORCE_INLINE hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag flag)
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

extern "C" hkpStorageMeshShape *fn_82D4FF88(hkpStorageMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageMeshShape::hkpStorageMeshShape(flag);
    return self;
}
