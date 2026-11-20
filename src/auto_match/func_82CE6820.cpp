#include "havok/hkTransform.h"

extern "C" {
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

extern const __vector4 lbl_82132D00;
}

/* this = inverse(a) * b */
void hkTransform::setMulInverseMul(const hkTransform &a, const hkTransform &b)
{
    int i = 2;

    {
        __vector4 c0 = a.m_rotation.m_col[0].m_quad;
        __vector4 c1 = a.m_rotation.m_col[1].m_quad;
        __vector4 c2 = a.m_rotation.m_col[2].m_quad;

        do {
            __vector4 d0, d1, d2, xz, yw, r;
            d1 = __vmsum3fp(c1, b.m_rotation.m_col[i].m_quad);
            d2 = __vmsum3fp(c2, b.m_rotation.m_col[i].m_quad);
            d0 = __vmsum3fp(c0, b.m_rotation.m_col[i].m_quad);
            yw = __vmrghw(d1, lbl_82132D00);
            xz = __vmrghw(d0, d2);
            r = __vmrghw(xz, yw);
            m_rotation.m_col[i].m_quad = r;
            i--;
        } while (i >= 0);
    }
    {
        __vector4 d = __vsubfp(b.m_translation.m_quad, a.m_translation.m_quad);
        __vector4 d0, d1, d2, xz, yw, r;
        d1 = __vmsum3fp(a.m_rotation.m_col[1].m_quad, d);
        d2 = __vmsum3fp(a.m_rotation.m_col[2].m_quad, d);
        d0 = __vmsum3fp(a.m_rotation.m_col[0].m_quad, d);
        yw = __vmrghw(d1, lbl_82132D00);
        xz = __vmrghw(d0, d2);
        r = __vmrghw(xz, yw);
        m_translation.m_quad = r;
    }
}
