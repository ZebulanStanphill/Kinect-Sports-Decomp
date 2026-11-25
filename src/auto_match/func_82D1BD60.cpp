// Havok: cross product of two vertices of a vertex list, flipped to point away from a third vertex.
#include "havok/hkVector4.h"

struct VertexList_82D1BD60 {
    const hkVector4 *m_vertices; // 0x00
};

static HK_FORCE_INLINE hkReal dot3(const hkVector4 &a, const hkVector4 &b)
{
    hkReal r;
    __stvewx(__vmsum3fp(a.m_quad, b.m_quad), &r, 0);
    return r;
}

extern "C" void fn_82D1BD60(const VertexList_82D1BD60 *self, int a, int b, int c, hkVector4 &normal)
{
    normal.setCross(self->m_vertices[a], self->m_vertices[b]);
    if (dot3(normal, self->m_vertices[c]) > 0.0f) {
        normal.setNeg4(normal);
    }
}
