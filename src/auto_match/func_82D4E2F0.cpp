// hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp). Its
// finish function and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name
// and is written as an extern "C" function that runs the constructor on the given storage (MSVC's explicit
// constructor call; placement new would add a null check).
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
        MeshSubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_vertices(flag), m_indices8(flag), m_indices16(flag), m_indices32(flag),
              m_materialIndices(flag), m_materials(flag), m_namedMaterials(flag), m_materialIndices16(flag) {}

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

extern "C" hkpStorageExtendedMeshShape::MeshSubpartStorage *fn_82D4E2F0(hkpStorageExtendedMeshShape::MeshSubpartStorage *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(flag);
    return self;
}
