// hkpStorageMeshShape::hkpStorageMeshShape(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the hkpMeshShape part, then the two
// vtables, then (when finishing) every subpart's pointers are pointed back into its SubpartStorage.
// It keeps its fn_ name because a Matching C unit (the getVtable function, fn_82D3B4E0) calls it. hkpMeshShape's
// finish constructor is out of line (fn_82D4B0F8) and also keeps its fn_ name (a Matching C unit calls it), so
// it is called by name and the class below gives hkpMeshShape an empty inline finish constructor; the explicit
// constructor call (an MSVC extension) then expands the rest without placement new's null check.
#include "havok/hkBase.h"

class hkpShapeContainer;
class hkpShapeBuffer;
typedef hkUint32 hkpShapeKey;

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};

// hkpShape, hkpShapeContainer and hkpShapeCollection as in havok/hkpShape.h, but with empty finish
// constructors: the real ones (hkpShape's clears m_type) run inside fn_82D4B0F8. For the same reason
// hkpShapeContainer (a pure interface in Havok) is declared __declspec(novtable): its vtable store at +0x10
// belongs to fn_82D4B0F8 too, and MSVC never removes that store as dead (the game's inlined hkpShapeCollection
// constructors keep it, e.g. fn_82D3AFC0).
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

// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h), 0x60 bytes.
class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum IndexStridingType { INDICES_INVALID, INDICES_INT16, INDICES_INT32 };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16 };
    struct Subpart {
        const hkReal *m_vertexBase;           // +0x0
        int m_vertexStriding;                 // +0x4
        int m_numVertices;                    // +0x8
        const void *m_indexBase;              // +0xC
        hkUint8 m_stridingType;               // +0x10 hkEnum<IndexStridingType, hkInt8>
        hkUint8 m_materialIndexStridingType;  // +0x11 hkEnum<MaterialIndexStridingType, hkInt8>
        int m_indexStriding;                  // +0x14
        int m_flipAlternateTriangles;         // +0x18
        int m_numTriangles;                   // +0x1C
        const void *m_materialIndexBase;      // +0x20
        int m_materialIndexStriding;          // +0x24
        const void *m_materialBase;           // +0x28
        int m_materialStriding;               // +0x2C
        int m_numMaterials;                   // +0x30
        int m_triangleOffset;                 // +0x34
    };
    hkpMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_subparts(flag), m_weldingInfo(flag) {}

    hkVector4 m_scaling;                 // +0x20
    hkInt32 m_numBitsForSubpartIndex;    // +0x30
    hkArray<Subpart> m_subparts;         // +0x34
    hkArray<hkUint16> m_weldingInfo;     // +0x40
    hkUint8 m_weldingType;               // +0x4C
    hkReal m_radius;                     // +0x50
    int m_pad[3];                        // +0x54
};

extern "C" void fn_82D4B0F8(hkpMeshShape *self, hkFinishLoadedObjectFlag flag);   // hkpMeshShape(flag)

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
    fn_82D4B0F8(self, flag);
    self->hkpStorageMeshShape::hkpStorageMeshShape(flag);
    return self;
}
