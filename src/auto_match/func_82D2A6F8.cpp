// hkgpMesh::ConvexHullShape::getBoundingBox: the hull's box (fn_82D0BDC0) with no margin.
#include "havok/hkgpMesh.h"

extern "C" hkAabb fn_82D0BDC0(const hkgpConvexHull *hull, int a, hkReal scale, hkReal offset);   // the hull's box

hkAabb hkgpMesh::ConvexHullShape::getBoundingBox() const
{
    return fn_82D0BDC0(m_hull, 0, 1.0f, 0.0f);
}
