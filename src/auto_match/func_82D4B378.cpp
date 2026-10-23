// hkpFastMeshShape::hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/FastMesh/hkpFastMeshShape.cpp): only the
// base constructor, then the vtables.
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

// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h): hkpShapeCollection (hkpShapeContainer at
// +0x10), 16-byte aligned.
class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Subpart {
        hkUint32 m_data[14];   // 0x38 bytes
    };
    hkpMeshShape(hkReal radius, int numBitsForSubpartIndex);   // fn_82D4B040
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkVector4 m_scaling;                 // +0x20
    hkInt32 m_numBitsForSubpartIndex;    // +0x30
    hkArray<Subpart> m_subparts;         // +0x34
    hkArray<hkUint16> m_weldingInfo;     // +0x40
    hkUint8 m_weldingType;               // +0x4C
    hkReal m_radius;                     // +0x50
    int m_pad[3];                        // +0x54
};

class hkpFastMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex);
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

hkpFastMeshShape::hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpMeshShape(radius, numBitsForSubpartIndex)
{
}
