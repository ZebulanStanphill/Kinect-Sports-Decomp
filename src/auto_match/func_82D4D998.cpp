// hkpSimpleMeshShape::getChildShape(hkpShapeKey, hkpShapeBuffer &) const
// (Physics/Collide/Shape/Deprecated/Mesh/hkpSimpleMeshShape.cpp), slot 5 of the hkpShapeContainer
// vtable (VFTABLE_for_hkpSimpleMeshShape@@_821D5A8C): builds an hkpTriangleShape in the buffer
// (placement new, hence the null check) from the triangle's welding info and the mesh's radius and
// welding type, then copies the three vertices. As an override of an hkpShapeContainer virtual it
// receives the container subobject (+0x10) as this, so the members are 0x10 lower than in the class.
// Written as a member function: an extern "C" function with self first adds base + index where the
// original adds index + base. Built with /O2 /QVMXReserve (flag file).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
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

class hkpSimpleMeshShape : public hkpShapeCollection {
public:
    struct Triangle {
        int m_a;
        int m_b;
        int m_c;
        hkUint16 m_weldingInfo;
    };
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkArray<hkVector4> m_vertices;      // +0x18
    hkArray<Triangle> m_triangles;      // +0x24
    hkArray<hkUint8> m_materialIndices; // +0x30
    hkReal m_radius;                    // +0x3c
    hkUint8 m_weldingType;              // +0x40
};

const hkpShape *hkpSimpleMeshShape::getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const
{
    hkpTriangleShape *ts = new (&buffer) hkpTriangleShape(m_radius, m_triangles[key].m_weldingInfo, m_weldingType);
    ts->setVertex(0, m_vertices[m_triangles[key].m_a]);
    ts->setVertex(1, m_vertices[m_triangles[key].m_b]);
    ts->setVertex(2, m_vertices[m_triangles[key].m_c]);
    return ts;
}
