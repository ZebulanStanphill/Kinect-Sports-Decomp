// hkgpMesh::TriangleShape::getBoundingBox (Common/Internal/GeometryProcessing/Mesh/hkgpMesh.inl): the box of the
// triangle's three vertices (fn_8307EBA0 computes the box of a point array).
#include "havok/hkgpMesh.h"

extern "C" void fn_8307EBA0(const hkVector4 *points, int numPoints, hkAabb &aabbOut);   // the box of points

hkAabb hkgpMesh::TriangleShape::getBoundingBox() const
{
    hkVector4 points[3];
    points[0] = m_triangle->m_vertices[0]->m_position;
    points[1] = m_triangle->m_vertices[1]->m_position;
    points[2] = m_triangle->m_vertices[2]->m_position;
    hkAabb box;
    fn_8307EBA0(points, 3, box);
    return box;
}
