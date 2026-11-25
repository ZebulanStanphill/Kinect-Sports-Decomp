#include "havok/hkVector4.h"

struct Vertex_82D0C110 {
    int pad[4];
    hkVector4 m_position;    // 0x10
};

struct Face_82D0C110 {
    int pad[2];
    Vertex_82D0C110 *m_vertices[3];   // 0x08
};

struct Self_82D0C110;

extern "C" void fn_82D0C110(hkVector4 *out, const Self_82D0C110 *self, const Face_82D0C110 *face)
{
    const hkVector4 &a = face->m_vertices[0]->m_position;
    const hkVector4 &b = face->m_vertices[1]->m_position;
    const hkVector4 &c = face->m_vertices[2]->m_position;
    hkVector4 e1, e2;
    hkVector4 plane;

    e1.setSub4(b, a);
    e2.setSub4(c, a);
    plane.setCross(e1, e2);
    plane.normalize3();
    plane(3) = -plane.dot3(a);
    *out = plane;
}
