// hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the hkpMeshShape part (its finish
// constructor is out of line, 82D4B0F8), then the two vtables, then (when finishing) every subpart's pointers
// are pointed back into its SubpartStorage.
// It keeps its fn_ name because a Matching C unit (the getVtable function, fn_82D3B4E0) calls it; the explicit
// constructor call (an MSVC extension) expands it without placement new's null check.
#include "havok/hkpMeshShape.h"

class hkpStorageMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct SubpartStorage : public hkReferencedObject {
        hkArray<hkReal> m_vertices;              // +0x8
        hkArray<hkUint16> m_indices16;           // +0x14
        hkArray<hkUint32> m_indices32;           // +0x20
        hkArray<hkUint8> m_materialIndices;      // +0x2C
        hkArray<hkUint32> m_materials;           // +0x38
        hkArray<hkUint16> m_materialIndices16;   // +0x44
    };
    HK_FORCE_INLINE hkpStorageMeshShape(hkFinishLoadedObjectFlag flag) : hkpMeshShape(flag), m_storage(flag)
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

    hkArray<SubpartStorage *> m_storage;   // +0x60
};

extern "C" hkpStorageMeshShape *fn_82D4FF88(hkpStorageMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageMeshShape::hkpStorageMeshShape(flag);
    return self;
}
