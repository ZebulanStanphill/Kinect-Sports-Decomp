// hkgpMesh::ExtrudeShape::getSupportingVertex: the planes' supporting vertex (fn_82D1D478).
#include "havok/hkgpMesh.h"

extern "C" void fn_82D1D478(const hkgpMesh::ExtrudeShape::PlaneArray *planes, const hkVector4 &direction,
                            hkVector4 &out);

void hkgpMesh::ExtrudeShape::getSupportingVertex(const hkVector4 &direction, hkVector4 &out) const
{
    fn_82D1D478(&m_planes, direction, out);
}
