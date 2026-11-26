#include "havok/hkMatrix3.h"

// hkVector4::_setRotatedInverseDir (this = r^T * b) and hkMatrix3::setTransposeMul, both inline in Havok;
// the headers do not have them yet.
static HK_FORCE_INLINE void setRotatedInverseDir(hkVector4 &out, const hkMatrix3 &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    out.m_quad = __vmrghw(xz, y0);
}

static HK_FORCE_INLINE void setTransposeMul(hkMatrix3 &out, const hkMatrix3 &a, const hkMatrix3 &b)
{
    hkMatrix3 aa = a;
    int i = 2;
    do {
        setRotatedInverseDir(out.getColumn(i), aa, b.getColumn(i));
    } while (--i >= 0);
}

struct Atoms_82DA21D8 {
    char pad0[0x20];
    hkMatrix3 m_rotationA;    // 0x20
    hkMatrix3 m_rotationB;    // 0x50
};

extern "C" void fn_82DA21D8(Atoms_82DA21D8 *self, const hkMatrix3 &bodyA, const hkMatrix3 &bodyB,
                            const hkVector4 &axis, const hkVector4 &perp)
{
    hkMatrix3 m;
    m.m_col0 = axis;
    m.m_col0.normalize3();
    m.m_col1 = perp;
    m.m_col1.normalize3();
    m.m_col2.setCross(m.m_col0, m.m_col1);
    setTransposeMul(self->m_rotationA, bodyA, m);
    setTransposeMul(self->m_rotationB, bodyB, m);
}
