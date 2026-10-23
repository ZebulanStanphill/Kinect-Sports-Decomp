// hkpSimpleMeshShape::~hkpSimpleMeshShape, the implicit destructor (Physics/Collide/Shape/Deprecated/SimpleMesh/
// hkpSimpleMeshShape.h), emitted out of line: the deleting destructor (fn_82D3B160) calls it. It destroys the
// material index, triangle and vertex hkArrays, then the bases (hkpShapeContainer at +0x10). The function at
// the end only makes the compiler emit the vtable.
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


class hkpSimpleMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Triangle {
        int m_a;
        int m_b;
        int m_c;
        hkUint16 m_weldingInfo;
    };
    hkpSimpleMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_vertices(flag), m_triangles(flag), m_materialIndices(flag) {}
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkArray<hkVector4> m_vertices;        // +0x18
    hkArray<Triangle> m_triangles;        // +0x24
    hkArray<hkUint8> m_materialIndices;   // +0x30
    hkReal m_radius;                      // +0x3C
    hkUint8 m_weldingType;                // +0x40
};

void emitVtable_82D3B058(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSimpleMeshShape(f); }
