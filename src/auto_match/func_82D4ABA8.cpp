// hkpMeshShape::getChildShape(hkpShapeKey, hkpShapeBuffer &) const
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp), slot 5 of the hkpShapeContainer
// vtable (VFTABLE_for_hkpMeshShape@@_821D5FCC; hkpStorageMeshShape inherits it). Builds an
// hkpTriangleShape in the buffer (placement new, hence the null check) from the subpart's
// 16- or 32-bit indices, scaling the vertices by m_scaling.
// As an override of an hkpShapeContainer virtual it receives the container subobject (+0x10)
// as this, so the members are 0x10 lower than in the class. Built with /O2 /QVMXReserve
// (flag file). The flip term (triangleIndex & m_flipAlternateTriangles) must be computed once
// before the index-type branch; repeating it in each branch leaves the first index load as
// lhzx base+offset instead of lhz 0(triangle).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

union hkQuadRealUnion {
    hkReal r[4];
    hkQuadReal q;
};

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void set(hkReal a, hkReal b, hkReal c, hkReal d)
    {
        hkQuadRealUnion u;
        u.r[0] = a;
        u.r[1] = b;
        u.r[2] = c;
        u.r[3] = d;
        m_quad = u.q;
    }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return ((hkReal *)&m_quad)[i]; }
    HK_FORCE_INLINE const hkReal &operator()(int i) const { return ((const hkReal *)&m_quad)[i]; }
    hkQuadReal m_quad;
};

class hkpTriangleShape : public hkpConvexShape {
public:
    HK_FORCE_INLINE hkpTriangleShape(hkReal radius, hkUint16 weldingInfo, hkUint8 type)
        : hkpConvexShape(HK_SHAPE_TRIANGLE, radius)
    {
        m_weldingInfo = weldingInfo;
        m_weldingType = type;
        m_extrusion.setZero4();
        m_isExtruded = 0;
    }
    HK_FORCE_INLINE void setVertex(int i, const hkVector4 &v) { (&m_vertexA)[i] = v; }

    hkUint16 m_weldingInfo;   // +0x14
    hkUint8 m_weldingType;    // +0x16
    hkUint8 m_isExtruded;     // +0x17
    hkVector4 m_vertexA;      // +0x20
    hkVector4 m_vertexB;      // +0x30
    hkVector4 m_vertexC;      // +0x40
    hkVector4 m_extrusion;    // +0x50
};

template <typename T>
HK_FORCE_INLINE const T *hkAddByteOffsetConst(const T *base, hkUlong offset)
{
    return reinterpret_cast<const T *>(reinterpret_cast<const char *>(base) + offset);
}

class hkpMeshShape : public hkpShapeCollection {
public:
    enum IndexStridingType { INDICES_INVALID, INDICES_INT16, INDICES_INT32, INDICES_MAX_ID };

    struct Subpart {
        const float *m_vertexBase;           // +0x00
        int m_vertexStriding;                // +0x04
        int m_numVertices;                   // +0x08
        const void *m_indexBase;             // +0x0c
        hkInt8 m_stridingType;               // +0x10
        hkInt8 m_materialIndexStridingType;  // +0x11
        int m_indexStriding;                 // +0x14
        int m_flipAlternateTriangles;        // +0x18
        int m_numTriangles;                  // +0x1c
        const void *m_materialIndexBase;     // +0x20
        int m_materialIndexStriding;         // +0x24
        const void *m_materialBase;          // +0x28
        int m_materialStriding;              // +0x2c
        int m_numMaterials;                  // +0x30
        int m_triangleOffset;                // +0x34
    };

    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkVector4 m_scaling;                 // +0x20
    hkInt32 m_numBitsForSubpartIndex;    // +0x30
    hkArray<Subpart> m_subparts;         // +0x34
    hkArray<hkUint16> m_weldingInfo;     // +0x40
    hkUint8 m_weldingType;               // +0x4c
    hkReal m_radius;                     // +0x50
    int m_pad[3];
};

const hkpShape *hkpMeshShape::getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const
{
    const hkUint32 triangleIndex = (key & (~0U >> m_numBitsForSubpartIndex));
    const hkUint32 subPartIndex = key >> (32 - m_numBitsForSubpartIndex);

    const Subpart &part = m_subparts[subPartIndex];

    const hkReal *vf0 = HK_NULL;
    const hkReal *vf1 = HK_NULL;
    const hkReal *vf2 = HK_NULL;
    const int flip = triangleIndex & part.m_flipAlternateTriangles;
    if (part.m_stridingType == INDICES_INT16)
    {
        const hkUint16 *triangle = hkAddByteOffsetConst<hkUint16>((const hkUint16 *)part.m_indexBase, part.m_indexStriding * triangleIndex);
        vf0 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[0]);
        vf1 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + flip]);
        vf2 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + (1 ^ flip)]);
    }
    else
    {
        const hkUint32 *triangle = hkAddByteOffsetConst<hkUint32>((const hkUint32 *)part.m_indexBase, part.m_indexStriding * triangleIndex);
        vf0 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[0]);
        vf1 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + flip]);
        vf2 = hkAddByteOffsetConst<hkReal>(part.m_vertexBase, part.m_vertexStriding * triangle[1 + (1 ^ flip)]);
    }

    hkVector4 vertex0; vertex0.set(vf0[0] * m_scaling(0), vf0[1] * m_scaling(1), vf0[2] * m_scaling(2), 0.0f);
    hkVector4 vertex1; vertex1.set(vf1[0] * m_scaling(0), vf1[1] * m_scaling(1), vf1[2] * m_scaling(2), 0.0f);
    hkVector4 vertex2; vertex2.set(vf2[0] * m_scaling(0), vf2[1] * m_scaling(1), vf2[2] * m_scaling(2), 0.0f);

    hkUint16 weldingInfo = (m_weldingInfo.getSize() == 0) ? 0 : m_weldingInfo[part.m_triangleOffset + triangleIndex];

    hkpTriangleShape *triangleShape = new (&buffer) hkpTriangleShape(m_radius, weldingInfo, m_weldingType);
    triangleShape->setVertex(0, vertex0);
    triangleShape->setVertex(1, vertex1);
    triangleShape->setVertex(2, vertex2);

    return triangleShape;
}
