// hkgpMesh::PrismPolicy's callback (slot 1 of ??_7PrismPolicy@hkgpMesh@@6B@), keeping its fn_ name: for a pair
// of triangles from a tree-against-tree query, returns 1 when they share a vertex; otherwise tests them as
// prisms through the convex overlap interface and, when they overlap, clears the real at +0x3C of their six
// vertices. It returns a value, where hkAabbTreeQueryUtils.h declares TreeTreeCollector's slot as returning
// nothing.
#include "havok/hkgpMesh.h"

typedef hkgpMesh::TreeQueries::Node Node;

extern "C" int fn_82D2A9B8(hkgpMesh::PrismPolicy *s, const Node *a, const Node *b)
{
    hkgpMesh::Triangle *f = (hkgpMesh::Triangle *)a->m_indices[0];
    hkgpMesh::Triangle *g = (hkgpMesh::Triangle *)b->m_indices[0];
    ++s->m_numPairs;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (f->m_vertices[i] == g->m_vertices[j])
                return 1;
    ++s->m_numTests;
    hkgpMesh::PrismShape<1> p(f), q(g);
    float zero = 0.0f;
    if (s->m_overlap->overlap(p, q, zero)) {
        hkgpMesh::Vertex *v0 = f->m_vertices[0], *v1 = g->m_vertices[0], *v2 = f->m_vertices[1];
        hkgpMesh::Vertex *v3 = g->m_vertices[1], *v4 = f->m_vertices[2], *v5 = g->m_vertices[2];
        v0->m_unknown3C = zero;
        v1->m_unknown3C = zero;
        v2->m_unknown3C = zero;
        v3->m_unknown3C = zero;
        v4->m_unknown3C = zero;
        v5->m_unknown3C = zero;
    }
    return 0;
}
