// hkgpMesh::TriangleShape::getSupportingVertex (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.inl): the vertex
// of the triangle furthest along the direction, with the vertex's index or'ed with 0.5f in w.
// Havok code: /O2 /QVMXReserve (flag file).
#include "havok/hkgpMesh.h"

void hkgpMesh::TriangleShape::getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const
{
    out = m_triangle->m_vertices[0]->m_position;
    out.setInt24W(0);
    hkReal maximum = direction.dot3(out);
    for (int i = 1; i < 3; i++) {
        hkVector4 position;
        position = m_triangle->m_vertices[i]->m_position;
        const hkReal distance = direction.dot3(position);
        if (distance > maximum) {
            out = position;
            maximum = distance;
            out.setInt24W(i);
        }
    }
}
