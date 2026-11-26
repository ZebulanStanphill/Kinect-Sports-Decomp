// hkgpMesh (hkgpMesh.cpp): whether a convex shape comes within `threshold` of any of the convex hulls of an
// array; the mesh's convex overlap interface gives the distances.
#include "havok/hkgpMesh.h"

typedef hkgpMesh::IConvexOverlap::IConvexShape Shape;

extern "C" int fn_82D1F608(hkgpMesh *self, const Shape *shape, hkArrayBase<const hkgpConvexHull *> *hulls,
                           float threshold)
{
    for (int i = 0; i < hulls->m_size; i++) {
        hkgpMesh::ConvexHullShape hull(hulls->m_data[i]);
        if (self->m_convexOverlap->distance(shape, &hull, true) < threshold)
            return 1;
    }
    return 0;
}
