// hkpSimpleMeshShape::getChildShape(hkpShapeKey, hkpShapeBuffer &) const
// (Physics/Collide/Shape/Deprecated/Mesh/hkpSimpleMeshShape.cpp), slot 5 of the hkpShapeContainer
// vtable (VFTABLE_for_hkpSimpleMeshShape@@_821D5A8C): builds an hkpTriangleShape in the buffer
// (placement new, hence the null check) from the triangle's welding info and the mesh's radius and
// welding type, then copies the three vertices. As an override of an hkpShapeContainer virtual it
// receives the container subobject (+0x10) as this, so the members are 0x10 lower than in the class.
// Written as a member function: an extern "C" function with self first adds base + index where the
// original adds index + base. Built with /O2 /QVMXReserve (flag file).
#include "havok/hkpTriangleShape.h"

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
