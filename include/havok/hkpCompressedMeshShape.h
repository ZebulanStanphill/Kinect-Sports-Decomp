// hkpCompressedMeshShape (Physics/Collide/Shape/Compound/Collection/CompressedMesh/hkpCompressedMeshShape.h),
// 0xE0 bytes: a shape collection over quantised triangle chunks, big triangles and convex pieces. The members,
// offsets and element types are the game's hkClass (initialiser 8312D090, 21 members), and so are the nested
// structs Chunk (0x50, 8312CF00), BigTriangle (0x10, 8312CF78) and ConvexPiece (0x40, 8312CFF0) and the
// MaterialType enumerators (its hkClassEnum, lbl_82135098). RTTI ??_R3hkpCompressedMeshShape@@8; vtables
// ??_7hkpCompressedMeshShape@@6BhkpShape@@@ (13 slots) and ??_7hkpCompressedMeshShape@@6BhkpShapeContainer@@@.
//
// - The constructor is out of line (82D45E48): 17 and 18 index bits with their masks, the radius, empty arrays,
//   no materials, and WELDING_TYPE_NONE stored in the body (last).
// - The finish constructor is out of line (82D45F58): when finishing it sets HK_SHAPE_COMPRESSED_MESH and
//   COLLECTION_COMPRESSED_MESH and points m_meshMaterials at the named materials.
// - The destructor is the implicit one, emitted out of line (??1hkpCompressedMeshShape@@UAA@XZ, 82D46000); the
//   deleting destructor is 82D46320. The destructors of Chunk and ConvexPiece are implicit in Havok; the game
//   has them out of line (82D395E0, 82D39710, which the class's destructor calls), so they are declared here
//   and defined in those units (an empty body gives the same code and the same symbol).
#ifndef HAVOK_HKPCOMPRESSEDMESHSHAPE_H
#define HAVOK_HKPCOMPRESSEDMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkTransform.h"
#include "havok/hkAabb.h"
#include "havok/hkEnum.h"
#include "havok/hkpNamedMeshMaterial.h"
#include "havok/hkpShape.h"
#include "havok/hkpWeldingUtility.h"


class hkpCompressedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum MaterialType {
        MATERIAL_NONE,
        MATERIAL_SINGLE_VALUE_PER_CHUNK,
        MATERIAL_ONE_BYTE_PER_TRIANGLE,
        MATERIAL_TWO_BYTES_PER_TRIANGLE,
        MATERIAL_FOUR_BYTES_PER_TRIANGLE
    };

    // 0x50 bytes.
    struct Chunk {
        ~Chunk();   // out of line (82D395E0)

        hkVector4 m_offset;                 // +0x0
        hkArray<hkUint16> m_vertices;       // +0x10
        hkArray<hkUint16> m_indices;        // +0x1C
        hkArray<hkUint16> m_stripLengths;   // +0x28
        hkArray<hkUint16> m_weldingInfo;    // +0x34
        hkUint32 m_materialInfo;            // +0x40
        hkUint16 m_reference;               // +0x44
        hkUint16 m_transformIndex;          // +0x46
    };

    // 0x10 bytes.
    struct BigTriangle {
        hkUint16 m_a;             // +0x0
        hkUint16 m_b;             // +0x2
        hkUint16 m_c;             // +0x4
        hkUint32 m_material;      // +0x8
        hkUint16 m_weldingInfo;   // +0xC
    };

    // 0x40 bytes.
    struct ConvexPiece {
        ~ConvexPiece();   // out of line (82D39710)

        hkVector4 m_offset;                // +0x0
        hkArray<hkUint16> m_vertices;      // +0x10
        hkArray<hkUint8> m_faceVertices;   // +0x1C
        hkArray<hkUint16> m_faceOffsets;   // +0x28
        hkUint16 m_reference;              // +0x34
        hkUint16 m_transformIndex;         // +0x36
    };

    hkpCompressedMeshShape(hkReal radius);                 // out of line (82D45E48)
    hkpCompressedMeshShape(hkFinishLoadedObjectFlag flag);   // out of line (82D45F58)

    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    int m_bitsPerIndex;                                         // +0x18
    int m_bitsPerWIndex;                                        // +0x1C
    int m_wIndexMask;                                           // +0x20
    int m_indexMask;                                            // +0x24
    hkReal m_radius;                                            // +0x28
    hkEnum<hkpWeldingUtility::WeldingType, hkUint8> m_weldingType;   // +0x2C
    hkEnum<MaterialType, hkUint8> m_materialType;              // +0x2D
    hkArray<hkUint32> m_materials;                              // +0x30
    hkArray<hkUint16> m_materials16;                            // +0x3C
    hkArray<hkUint8> m_materials8;                              // +0x48
    hkArray<hkTransform> m_transforms;                          // +0x54
    hkArray<hkVector4> m_bigVertices;                           // +0x60
    hkArray<BigTriangle> m_bigTriangles;                        // +0x6C
    hkArray<Chunk> m_chunks;                                    // +0x78
    hkArray<ConvexPiece> m_convexPieces;                        // +0x84
    hkReal m_error;                                             // +0x90
    hkAabb m_bounds;                                            // +0xA0
    const hkpMeshMaterial *m_meshMaterials;                     // +0xC0 (not serialised)
    hkUint16 m_materialStriding;                                // +0xC4
    hkUint16 m_numMaterials;                                    // +0xC6
    hkArray<hkpNamedMeshMaterial> m_namedMaterials;             // +0xC8
};

#endif
