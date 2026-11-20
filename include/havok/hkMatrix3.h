#ifndef HAVOK_HKMATRIX3_H
#define HAVOK_HKMATRIX3_H

#include "havok/hkVector4.h"

class hkSimdReal;

// Three columns at offsets 0x00, 0x10 and 0x20.
class hkMatrix3 {
public:
    void setTranspose(const hkMatrix3 &s);
    void mul(const hkSimdReal &scale);

    HK_FORCE_INLINE hkVector4 &getColumn(int i) { return m_col[i]; }
    HK_FORCE_INLINE const hkVector4 &getColumn(int i) const { return m_col[i]; }

    HK_FORCE_INLINE hkMatrix3() {}
    HK_FORCE_INLINE hkMatrix3(const hkMatrix3 &m)
    {
        m_col[0] = m.m_col[0];
        m_col[1] = m.m_col[1];
        m_col[2] = m.m_col[2];
    }
    HK_FORCE_INLINE void operator=(const hkMatrix3 &m)
    {
        m_col[0] = m.m_col[0];
        m_col[1] = m.m_col[1];
        m_col[2] = m.m_col[2];
    }

    hkVector4 m_col[3];
};

#endif
