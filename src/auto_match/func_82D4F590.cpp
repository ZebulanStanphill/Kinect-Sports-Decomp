// hkpStorageExtendedMeshShape::MeshSubpartStorage scalar deleting destructor: calls the user-written
// destructor (fn_82D4F308) out of line, then frees through the class allocator. The function at the end only
// makes the compiler emit the vtable.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


struct hkpMeshMaterial {
    hkUint32 m_filterInfo;
};

struct hkpNamedMeshMaterial : public hkpMeshMaterial {
    hkStringPtr m_name;   // +0x4
};

class hkpStorageExtendedMeshShape {
public:
    struct Material : public hkpMeshMaterial {
        hkUint32 m_restitutionAndFriction;
        hkUlong m_userData;
    };

    struct MeshSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        MeshSubpartStorage(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
        virtual ~MeshSubpartStorage();

        hkArray<hkVector4> m_vertices;                  // +0x8
        hkArray<hkUint8> m_indices8;                    // +0x14
        hkArray<hkUint16> m_indices16;                  // +0x20
        hkArray<hkUint32> m_indices32;                  // +0x2C
        hkArray<hkUint8> m_materialIndices;             // +0x38
        hkArray<Material> m_materials;                  // +0x44
        hkArray<hkpNamedMeshMaterial> m_namedMaterials; // +0x50
        hkArray<hkUint16> m_materialIndices16;          // +0x5C
    };
};

void emitVtable_82D4F590(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageExtendedMeshShape::MeshSubpartStorage(f); }
