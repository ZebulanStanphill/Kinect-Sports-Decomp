#include "havok/hkTransform.h"

extern "C" {
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);

extern const __vector4 lbl_82132D00;
}

// Transpose the rotation after subtracting the translation from the point.
void hkVector4::setTransformedInversePos(const hkTransform &t, const hkVector4 &p)
{
    __vector4 d = __vsubfp(p.m_quad, t.m_translation.m_quad);
    __vector4 d0, d1, d2, xz, yw;
    d1 = __vmsum3fp(t.m_rotation.m_col[1].m_quad, d);
    d2 = __vmsum3fp(t.m_rotation.m_col[2].m_quad, d);
    d0 = __vmsum3fp(t.m_rotation.m_col[0].m_quad, d);
    yw = __vmrghw(d1, lbl_82132D00);
    xz = __vmrghw(d0, d2);
    m_quad = __vmrghw(xz, yw);
}
