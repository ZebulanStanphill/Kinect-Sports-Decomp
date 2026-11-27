// hkgpMesh::ConvexHullShape::getSupportingVertex: the hull's (fn_82D0C930).
#include "havok/hkgpMesh.h"

extern "C" void fn_82D0C930(const hkgpConvexHull *hull, const hkVector4 &direction, hkVector4 &out);

void hkgpMesh::ConvexHullShape::getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const
{
    fn_82D0C930(m_hull, direction, out);
}
