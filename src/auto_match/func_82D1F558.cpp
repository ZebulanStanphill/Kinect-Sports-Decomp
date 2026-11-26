// hkgpMesh (hkgpMesh.cpp): collides a convex shape with every triangle of the mesh whose box overlaps the
// shape's and returns the negated sum of the distances below zero (see hkgpMesh::CollideShapeTriangle).
#include "havok/hkgpMesh.h"

typedef hkgpMesh::IConvexOverlap::IConvexShape Shape;

extern "C" void fn_82D38870(void *tree, const hkAabb &aabb, hkgpMesh::TreeQueries::Collector *collector);

extern "C" float fn_82D1F558(hkgpMesh *self, const Shape *shape, bool extrude)
{
    hkgpMesh::CollideShapeTriangle c(self->m_convexOverlap, shape, 0.0f, true, true, extrude);
    fn_82D38870(&self->m_trianglesTree, shape->getBoundingBox(), &c);
    return -c.m_sum;
}
