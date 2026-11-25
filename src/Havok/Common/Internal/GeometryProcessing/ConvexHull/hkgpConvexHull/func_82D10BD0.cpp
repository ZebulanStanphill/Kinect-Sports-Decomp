#include "havok/hkVector4.h"

class hkTransform {
public:
    hkVector4 m_col0, m_col1, m_col2, m_translation;
};

__forceinline void setTransformedPos(hkVector4 &out, const hkTransform &t, const hkVector4 &b)
{
    __vector4 xb = __vspltw(b.m_quad, 0);
    __vector4 yb = __vspltw(b.m_quad, 1);
    __vector4 zb = __vspltw(b.m_quad, 2);
    __vector4 t0 = __vmulfp(xb, t.m_col0.m_quad);
    t0 = __vmaddfp(yb, t.m_col1.m_quad, t0);
    t0 = __vmaddfp(zb, t.m_col2.m_quad, t0);
    out.m_quad = __vaddfp(t0, t.m_translation.m_quad);
}

struct Vertex_82D10BD0 {
    Vertex_82D10BD0 *m_next;
    int pad4[3];
    hkVector4 m_position;   // 0x10
};

struct Shape_82D10BD0 {
    char pad0[0x24];
    Vertex_82D10BD0 *m_vertices;   // 0x24
};

extern "C" void fn_82D10BD0(const Shape_82D10BD0 *self, const hkTransform &t, const hkVector4 &dir, hkVector4 &out)
{
    Vertex_82D10BD0 *best = 0;
    float bestDot = 0.0f;
    for (Vertex_82D10BD0 *v = self->m_vertices; v != 0; v = v->m_next) {
        hkVector4 p;
        setTransformedPos(p, t, v->m_position);
        float d = dir.dot3(p);
        if (best == 0 || d > bestDot) {
            out = p;
            best = v;
            bestDot = d;
        }
    }
}
