// hkpCompressedMeshShape::~hkpCompressedMeshShape, the implicit destructor (Physics/Collide/Shape/Compound/
// Collection/CompressedMesh/hkpCompressedMeshShape.h), emitted out of line: the deleting destructor
// (fn_82D46320) calls it. The hkArrays are destroyed in reverse order; the elements of the named material,
// convex piece and chunk arrays are destroyed first to last. The convex piece and chunk destructors are out
// of line (fn_82D39710 keeps its fn_ name because a Matching unit calls it; fn_82D395E0 likewise stays).
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


extern "C" {
void fn_82D395E0(void *self);   // hkpCompressedMeshShape::Chunk::~Chunk
void fn_82D39710(void *self);   // hkpCompressedMeshShape::ConvexPiece::~ConvexPiece
}

struct hkpMeshMaterial {
    hkUint32 m_filterInfo;
};

struct hkpNamedMeshMaterial : public hkpMeshMaterial {
    hkStringPtr m_name;   // +0x4
};

class hkpCompressedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct BigTriangle {
        hkUint16 m_a, m_b, m_c;
        hkUint8 m_material;
        hkUint8 m_pad;
        hkUint16 m_weldingInfo;
        hkUint16 m_transformIndex;
        hkUint32 m_pad2;
    };
    struct Chunk {   // 0x50 bytes
        ~Chunk() { fn_82D395E0(this); }
        hkUint32 m_data[0x14];
    };
    struct ConvexPiece {   // 0x40 bytes
        ~ConvexPiece() { fn_82D39710(this); }
        hkUint32 m_data[0x10];
    };
    struct Transform {   // 0x40 bytes
        hkVector4 m_v[4];
    };
    hkpCompressedMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_materials(flag), m_materials16(flag), m_materials8(flag),
          m_transforms(flag), m_bigVertices(flag), m_bigTriangles(flag), m_chunks(flag), m_convexPieces(flag),
          m_namedMaterials(flag) {}
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkUint8 m_data18[0x30 - 0x18];                    // +0x18
    hkArray<hkUint32> m_materials;                    // +0x30
    hkArray<hkUint16> m_materials16;                  // +0x3C
    hkArray<hkUint8> m_materials8;                    // +0x48
    hkArray<Transform> m_transforms;                  // +0x54
    hkArray<hkVector4> m_bigVertices;                 // +0x60
    hkArray<BigTriangle> m_bigTriangles;              // +0x6C
    hkArray<Chunk> m_chunks;                          // +0x78
    hkArray<ConvexPiece> m_convexPieces;              // +0x84
    hkUint8 m_data90[0xC8 - 0x90];                    // +0x90 (error, bounds, ...)
    hkArray<hkpNamedMeshMaterial> m_namedMaterials;   // +0xC8
};

void emitVtable_82D46000(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCompressedMeshShape(f); }
