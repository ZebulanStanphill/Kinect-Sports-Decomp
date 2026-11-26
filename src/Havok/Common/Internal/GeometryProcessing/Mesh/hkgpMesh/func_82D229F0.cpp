// hkgpMesh (hkgpMesh.cpp): whether a convex shape comes within `tolerance` of any of the convex shapes that
// are the leaves of `tree`. The leaves whose boxes overlap the shape's are collected first; the mesh's convex
// overlap interface gives the distances.
#include "havok/hkgpMesh.h"

typedef hkgpMesh::TreeQueries Query;
typedef hkgpMesh::IConvexOverlap::IConvexShape Shape;

extern "C" void fn_82D38870(void *tree, const hkAabb &aabb, Query::Collector *collector);

static HK_FORCE_INLINE void push(hkArrayBase<void *> &a, void *v)
{
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (a.m_size == a.getCapacity())
        hkArrayUtil::_reserveMore(alloc, &a, 4);
    a.m_data[a.m_size++] = v;
}

extern "C" unsigned char fn_82D229F0(hkgpMesh *self, const Shape *shape, void *tree, float tolerance)
{
    hkArray<const Query::Node *> hits;
    {
        Query::AllHitsNodeCollector collector(hits);
        fn_82D38870(tree, shape->getBoundingBox(), &collector);
    }
    for (int i = 0; i < hits.getSize(); i++) {
        if (self->m_convexOverlap->distance(shape, (Shape *)hits[i]->m_indices[0], true) < tolerance)
            return 1;
    }
    return 0;
}
