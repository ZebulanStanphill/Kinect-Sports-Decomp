// hkgpMesh (hkgpMesh.cpp): appends to `out` the triangles of the mesh that a convex shape touches. The leaves
// of the triangle tree whose boxes overlap the shape's are collected first; the mesh's convex overlap
// interface gives the distance of the shape and each triangle.
#include "havok/hkgpMesh.h"

typedef hkgpMesh::TreeQueries Query;
typedef hkgpMesh::IConvexOverlap::IConvexShape Shape;

extern "C" void fn_82D38870(void *tree, const hkAabb &aabb, Query::Collector *collector);

// hkArrayUtil::constructWithCopy for POD elements: a loop over n copies.
template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i)
        t[i] = tcopy;
}

// hkArrayBase<T>::_pushBack: reserve through hkArrayUtil::_reserveMore, then construct in place.
class Output : public hkArrayBase<hkgpMesh::Triangle *> {
public:
    HK_FORCE_INLINE void push(hkgpMesh::Triangle *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity())
            hkArrayUtil::_reserveMore(alloc, this, sizeof(void *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

extern "C" void fn_82D22B50(hkgpMesh *self, const Shape *shape, hkArrayBase<hkgpMesh::Triangle *> *out)
{
    hkArray<const Query::Node *> hits;
    {
        Query::AllHitsNodeCollector collector(hits);
        fn_82D38870(&self->m_trianglesTree, shape->getBoundingBox(), &collector);
    }
    for (int i = 0; i < hits.getSize(); i++) {
        hkgpMesh::TriangleShape triangle((hkgpMesh::Triangle *)hits[i]->m_indices[0]);
        if (self->m_convexOverlap->distance(shape, &triangle, true) <= 0.0f)
            ((Output *)out)->push(triangle.m_triangle);
    }
}
