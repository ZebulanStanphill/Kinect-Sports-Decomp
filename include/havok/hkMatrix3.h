#ifndef HAVOK_HKMATRIX3_H
#define HAVOK_HKMATRIX3_H

#include "havok/hkVector4.h"

class hkMatrix3;
extern "C" const hkMatrix3 *fn_82CEBD78(void);   // hkMatrix3::getIdentity()

// Three columns, at offsets 0x00, 0x10 and 0x20.
class hkMatrix3 {
public:
    HK_FORCE_INLINE hkMatrix3() {}
    HK_FORCE_INLINE hkMatrix3(const hkMatrix3 &m)
    {
        m_col0 = m.m_col0;
        m_col1 = m.m_col1;
        m_col2 = m.m_col2;
    }
    HK_FORCE_INLINE void operator=(const hkMatrix3 &m)
    {
        m_col0 = m.m_col0;
        m_col1 = m.m_col1;
        m_col2 = m.m_col2;
    }

    HK_FORCE_INLINE hkVector4 &getColumn(int i) { return (&m_col0)[i]; }
    HK_FORCE_INLINE const hkVector4 &getColumn(int i) const { return (&m_col0)[i]; }
    HK_FORCE_INLINE hkReal &operator()(int row, int col) { return getColumn(col)(row); }
    HK_FORCE_INLINE const hkReal &operator()(int row, int col) const { return getColumn(col)(row); }

    static HK_FORCE_INLINE const hkMatrix3 &HK_CALL getIdentity() { return *fn_82CEBD78(); }
    HK_FORCE_INLINE void setZero()
    {
        hkVector4 zero;
        zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
    }
    HK_FORCE_INLINE void setIdentity()
    {
        setZero();
        m_col0(0) = 1.0f;
        m_col1(1) = 1.0f;
        m_col2(2) = 1.0f;
    }

    void setTranspose(const hkMatrix3 &s);
    void mul(const hkSimdReal &scale);

    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

// this = r * b, for the upper 3x3 of r.
HK_FORCE_INLINE void hkVector4::_setMul3(const hkMatrix3 &r, const hkVector4 &b)
{
    const hkQuadReal b0 = __vspltw(b.m_quad, 0);
    const hkQuadReal b1 = __vspltw(b.m_quad, 1);
    const hkQuadReal b2 = __vspltw(b.m_quad, 2);
    const hkQuadReal r0 = __vmulfp(r.getColumn(0).m_quad, b0);
    const hkQuadReal r1 = __vmaddfp(r.getColumn(1).m_quad, b1, r0);
    m_quad = __vmaddfp(r.getColumn(2).m_quad, b2, r1);
}

#endif
