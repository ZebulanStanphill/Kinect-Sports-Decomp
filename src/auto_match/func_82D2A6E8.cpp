// hkgpMesh::ConvexHullShape::getMaxIndex: the hull's number of vertices (fn_82D0B438).
#include "havok/hkgpMesh.h"

extern "C" int fn_82D0B438(const hkgpConvexHull *hull);   // the hull's number of vertices

int hkgpMesh::ConvexHullShape::getMaxIndex() const
{
    return fn_82D0B438(m_hull);
}
