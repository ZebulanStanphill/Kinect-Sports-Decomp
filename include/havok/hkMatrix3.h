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

    // Inline in the game (82CF6738 builds an hkQsTransform's scale matrix with it).
    HK_FORCE_INLINE void setDiagonal(hkReal m00, hkReal m11, hkReal m22)
    {
        setZero();
        m_col0(0) = m00;
        m_col1(1) = m11;
        m_col2(2) = m22;
    }

    void setTranspose(const hkMatrix3 &s);
    // The inline transpose, in the element order of the game's code (hkMatrix3::isSymmetric,
    // 82CEC048, and 82CEC730): the diagonal, the w lanes, then the pairs.
    HK_FORCE_INLINE void _setTranspose(const hkMatrix3 &s)
    {
        hkMatrix3 &d = *this;
        d(0, 0) = s(0, 0);
        d(1, 1) = s(1, 1);
        d(2, 2) = s(2, 2);
        d(3, 0) = 0.0f;
        d(3, 1) = 0.0f;
        d(3, 2) = 0.0f;
        d(1, 0) = s(0, 1);
        d(0, 1) = s(1, 0);
        d(2, 0) = s(0, 2);
        d(0, 2) = s(2, 0);
        d(2, 1) = s(1, 2);
        d(1, 2) = s(2, 1);
    }
    // this = a * b. Out of line at 82CEC6E0; 82CEC730, from the same source file, has it inline and
    // defines it so itself.
    void setMul(const hkMatrix3 &a, const hkMatrix3 &b);
    void mul(const hkSimdReal &scale);
    // this = transpose(a) * b, inline in the game (82DA21D8 has it twice).
    HK_FORCE_INLINE void setTransposeMul(const hkMatrix3 &a, const hkMatrix3 &b)
    {
        hkMatrix3 aa = a;
        int i = 2;
        do {
            getColumn(i)._setRotatedInverseDir(aa, b.getColumn(i));
        } while (--i >= 0);
    }

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

// this = transpose(r) * b: a dot product with each column (the code of 82DA21D8).
HK_FORCE_INLINE void hkVector4::_setRotatedInverseDir(const hkMatrix3 &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    m_quad = __vmrghw(xz, y0);
}

#endif
