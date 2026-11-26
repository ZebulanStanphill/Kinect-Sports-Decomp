// hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp): the
// hkpExtendedMeshShape part (its finish constructor is out of line, 82D438E0), then the two vtables, then (when
// finishing) each storage object gets its vtable (placement new) and every subpart's pointers are pointed back
// into its storage.
// It keeps its fn_ name because a Matching C unit (fn_82D3B410) calls it; the explicit constructor call (an MSVC
// extension) expands it without placement new's null check (as in func_82D4FF88.cpp).
#include "havok/hkpExtendedMeshShape.h"

class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct MeshSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        MeshSubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_vertices(flag), m_indices8(flag), m_indices16(flag), m_indices32(flag),
              m_materialIndices(flag), m_materials(flag), m_namedMaterials(flag), m_materialIndices16(flag) {}
        virtual ~MeshSubpartStorage();
        hkArray<hkReal> m_vertices;              // +0x8
        hkArray<hkUint8> m_indices8;             // +0x14
        hkArray<hkUint16> m_indices16;           // +0x20
        hkArray<hkUint32> m_indices32;           // +0x2C
        hkArray<hkUint8> m_materialIndices;      // +0x38
        hkArray<hkUint32> m_materials;           // +0x44
        hkArray<hkUint32> m_namedMaterials;      // +0x50
        hkArray<hkUint16> m_materialIndices16;   // +0x5C
    };
    struct ShapeSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        ShapeSubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_materialIndices(flag), m_materials(flag), m_materialIndices16(flag) {}
        virtual ~ShapeSubpartStorage();
        hkArray<hkUint8> m_materialIndices;      // +0x8
        hkArray<hkUint32> m_materials;           // +0x14
        hkArray<hkUint16> m_materialIndices16;   // +0x20
    };
    HK_FORCE_INLINE hkpStorageExtendedMeshShape(hkFinishLoadedObjectFlag flag)
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

    hkArray<MeshSubpartStorage *> m_meshstorage;    // +0xF0
    hkArray<ShapeSubpartStorage *> m_shapestorage;  // +0xFC
};

extern "C" hkpStorageExtendedMeshShape *fn_82D4E300(hkpStorageExtendedMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(flag);
    return self;
}
