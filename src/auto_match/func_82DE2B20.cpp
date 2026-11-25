#include "havok/hkVector4.h"

struct VertexRef_82DE2B20 {
    const hkVector4 *m_vertex;
    int pad[3];
};

struct Triangle_82DE2B20 {
    hkVector4 m_normal;                  // 0x00
    VertexRef_82DE2B20 m_vertices[3];    // 0x10
    float m_distance;                    // 0x40
};

extern "C" void fn_82DE2B20(Triangle_82DE2B20 *self)
{
    const hkVector4 &a = *self->m_vertices[0].m_vertex;
    const hkVector4 &b = *self->m_vertices[1].m_vertex;
    const hkVector4 &c = *self->m_vertices[2].m_vertex;
    hkVector4 e1, e2;

    e1.setSub4(a, b);
    e2.setSub4(b, c);
    self->m_normal.setCross(e1, e2);
    self->m_normal.normalize3();
    self->m_distance = self->m_normal.dot3(a);
}
