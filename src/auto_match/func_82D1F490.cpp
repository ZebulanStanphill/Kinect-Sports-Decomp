// hkgpMesh (hkgpMesh.cpp): whether a convex shape comes within `tolerance` of a triangle of the mesh. With
// `out` the query visits every triangle whose box overlaps the shape's and writes the least distance there;
// without it the query stops at the first hit (see hkgpMesh::CollideShapeTriangle).
#include "havok/hkgpMesh.h"

typedef hkgpMesh::IConvexOverlap::IConvexShape Shape;

extern "C" void fn_82D38870(void *tree, const hkAabb &aabb, hkgpMesh::TreeQueries::Collector *collector);

extern "C" bool fn_82D1F490(hkgpMesh *self, const Shape *shape, float tolerance, float *out, bool flag)
{
    hkgpMesh::CollideShapeTriangle c(self->m_convexOverlap, shape, tolerance, flag, out != 0, false);
    fn_82D38870(&self->m_trianglesTree, shape->getBoundingBox(), &c);
    if (out)
        *out = c.m_minDistance;
    return c.m_hit;
}
