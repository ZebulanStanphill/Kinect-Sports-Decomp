// hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp): the
// hkpExtendedMeshShape part, then the two vtables, then (when finishing) each storage object gets its vtable
// (placement new) and every subpart's pointers are pointed back into its storage.
// It keeps its fn_ name because a Matching C unit (fn_82D3B410) calls it. hkpExtendedMeshShape's finish
// constructor is out of line (fn_82D438E0) and also keeps its fn_ name (a Matching C unit calls it), so it is
// called by name and the classes below have empty inline finish constructors; the explicit constructor call
// (an MSVC extension) expands the rest without placement new's null check (as in func_82D4FF88.cpp).
#include "havok/hkBase.h"

// hkpShape, hkpShapeContainer and hkpShapeCollection with empty finish constructors: the real ones run
// inside fn_82D438E0, and hkpShapeContainer is __declspec(novtable) because its vtable store belongs there.
class hkpShape : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}

    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

class __declspec(novtable) hkpShapeContainer {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpShapeContainer() {}
    virtual int getNumChildShapes() const;
};

class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpShapeCollection(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}

    hkBool m_disableWelding;    // +0x14
    hkUint8 m_collectionType;   // +0x15
};

// hkpExtendedMeshShape (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.h).
class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum IndexStridingType { INDICES_INVALID, INDICES_INT8, INDICES_INT16, INDICES_INT32 };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16 };
    struct Subpart {
        hkInt8 m_type;                          // +0x0
        hkUint8 m_materialIndexStridingType;    // +0x1
        hkInt16 m_materialStriding;             // +0x2
        const void *m_materialIndexBase;        // +0x4
        hkUint16 m_materialIndexStriding;       // +0x8
        hkUint16 m_numMaterials;                // +0xA
        const void *m_materialBase;             // +0xC
        hkUlong m_userData;                     // +0x10
    };
    struct TrianglesSubpart : public Subpart {
        int m_numTriangleShapes;                // +0x14
        const void *m_vertexBase;               // +0x18
        int m_numVertices;                      // +0x1C
        hkUint8 m_pad20[0x40 - 0x20];
        const void *m_indexBase;                // +0x40
        int m_vertexStriding;                   // +0x44
        hkInt8 m_stridingType;                  // +0x48
        hkUint8 m_pad49[0x60 - 0x49];
    };
    struct ShapesSubpart : public Subpart {
        hkUint8 m_pad14[0x40 - 0x14];
    };
    hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_trianglesSubparts(flag), m_shapesSubparts(flag) {}

    hkUint8 m_pad18[0xB4 - 0x18];
    hkArray<TrianglesSubpart> m_trianglesSubparts;   // +0xB4
    hkArray<ShapesSubpart> m_shapesSubparts;         // +0xC0
    hkUint8 m_padCC[0xF0 - 0xCC];
};

extern "C" void fn_82D438E0(hkpExtendedMeshShape *self, hkFinishLoadedObjectFlag flag);   // hkpExtendedMeshShape(flag)

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
    fn_82D438E0(self, flag);
    self->hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(flag);
    return self;
}
