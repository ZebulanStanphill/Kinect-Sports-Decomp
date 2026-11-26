// hkpStorageExtendedMeshShape (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/
// hkpStorageExtendedMeshShape.h), 0x110 bytes: an hkpExtendedMeshShape that owns the data of its subparts, one
// storage object per subpart. The sizes and members of the class, of Material (0xC bytes), MeshSubpartStorage
// (0x68 bytes) and ShapeSubpartStorage (0x2C bytes) are the game's hkClass (initialisers 8312E8D8, 8312E698,
// 8312E718 and 8312E7F8).
//
// - The constructors are out of line: ??0hkpStorageExtendedMeshShape@@QAA@MH@Z (82D4DC80) and the one that copies
//   an hkpExtendedMeshShape (82D4EF78); so is the destructor (82D4DCE8).
// - The finish constructor exists in the game only as fn_82D4E300 (its unit defines it): when finishing it runs
//   the storages' finish constructors and points each subpart at its storage.
// - The storages' destructors are out of line (82D4F308 and 82D4F128; deleting destructors 82D4F590 and
//   82D4F230); ShapeSubpartStorage's finish constructor is inline.
// - MeshSubpartStorage's finish constructor exists in the game as fn_82D4E2F0, and inlined in fn_82D4E300; its
//   units define it (HK_FORCE_INLINE, after their own copy of hkpNamedMeshMaterial).
// The element type of MeshSubpartStorage::m_namedMaterials, hkpNamedMeshMaterial, has no header yet and is only
// declared here; a unit that destroys or constructs a MeshSubpartStorage needs a definition of it.
#ifndef HAVOK_HKPSTORAGEEXTENDEDMESHSHAPE_H
#define HAVOK_HKPSTORAGEEXTENDEDMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkHalf.h"
#include "havok/hkVector4.h"
#include "havok/hkpExtendedMeshShape.h"
#include "havok/hkpMeshMaterial.h"

struct hkpNamedMeshMaterial;

class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);

    // 0xC bytes.
    struct Material : public hkpMeshMaterial {
        hkHalf m_restitution;   // +0x4
        hkHalf m_friction;      // +0x6
        hkUlong m_userData;     // +0x8
    };

    // 0x68 bytes.
    struct MeshSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        MeshSubpartStorage(hkFinishLoadedObjectFlag flag);   // fn_82D4E2F0
        virtual ~MeshSubpartStorage();   // out of line (82D4F308)

        hkArray<hkVector4> m_vertices;                    // +0x8
        hkArray<hkUint8> m_indices8;                      // +0x14
        hkArray<hkUint16> m_indices16;                    // +0x20
        hkArray<hkUint32> m_indices32;                    // +0x2C
        hkArray<hkUint8> m_materialIndices;               // +0x38
        hkArray<Material> m_materials;                    // +0x44
        hkArray<hkpNamedMeshMaterial> m_namedMaterials;   // +0x50
        hkArray<hkUint16> m_materialIndices16;            // +0x5C
    };

    // 0x2C bytes.
    struct ShapeSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        ShapeSubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_materialIndices(flag), m_materials(flag), m_materialIndices16(flag) {}
        virtual ~ShapeSubpartStorage();   // out of line (82D4F128)

        hkArray<hkUint8> m_materialIndices;      // +0x8
        hkArray<Material> m_materials;           // +0x14
        hkArray<hkUint16> m_materialIndices16;   // +0x20
    };

    hkpStorageExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex);   // out of line (82D4DC80)
    hkpStorageExtendedMeshShape(const hkpExtendedMeshShape &mesh);            // out of line (82D4EF78)
    hkpStorageExtendedMeshShape(hkFinishLoadedObjectFlag flag);               // fn_82D4E300
    virtual ~hkpStorageExtendedMeshShape();                                   // out of line (82D4DCE8)

    hkArray<MeshSubpartStorage *> m_meshstorage;     // +0xF0
    hkArray<ShapeSubpartStorage *> m_shapestorage;   // +0xFC
};

#endif
