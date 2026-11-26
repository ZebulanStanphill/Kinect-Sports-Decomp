#include "havok/hkAabb.h"
#include "havok/hkTransform.h"

// hkVector4::_setTransformedPos with the operands of the last add the other way round: the header's version
// (translation first) changes this function's code.
static __forceinline void SetTransformedPos(hkVector4 &out, const hkTransform &t, const hkVector4 &v)
{
    __vector4 x = __vspltw(v.m_quad, 0);
    __vector4 y = __vspltw(v.m_quad, 1);
    __vector4 z = __vspltw(v.m_quad, 2);
    __vector4 r = __vmulfp(t.getColumn(0).m_quad, x);
    r = __vmaddfp(t.getColumn(1).m_quad, y, r);
    r = __vmaddfp(t.getColumn(2).m_quad, z, r);
    out.m_quad = __vaddfp(r, t.getTranslation().m_quad);
}

struct Shape_82D6F828 {
    char pad00[0x10];
    float m_radius;            // 0x10
    char pad14[4];
    hkVector4 *m_vertices;     // 0x18
    int m_numVertices;         // 0x1c
};

extern "C" void fn_82D6F828(const Shape_82D6F828 *self, const hkTransform &localToWorld, float tolerance, hkAabb &out)
{
    out.m_min.setAll(3.40282e+38f);
    out.m_max.setAll(-3.40282e+38f);
    for (int i = 0; i < self->m_numVertices; i++) {
        hkVector4 v;
        SetTransformedPos(v, localToWorld, self->m_vertices[i]);
        out.m_min.setMin4(out.m_min, v);
        out.m_max.setMax4(out.m_max, v);
    }
    hkVector4 tol;
    tol.setAll(self->m_radius + tolerance);
    out.m_min.sub4(tol);
    out.m_max.add4(tol);
}
