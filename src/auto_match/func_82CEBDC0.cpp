#include "havok/hkMatrix3.h"

void hkMatrix3::setTranspose(const hkMatrix3 &r)
{
    m_col[0](0) = r.m_col[0](0);
    m_col[1](1) = r.m_col[1](1);
    m_col[2](2) = r.m_col[2](2);
    m_col[0](3) = 0.0f;
    m_col[1](3) = 0.0f;
    m_col[2](3) = 0.0f;
    m_col[0](1) = r.m_col[1](0);
    m_col[1](0) = r.m_col[0](1);
    m_col[0](2) = r.m_col[2](0);
    m_col[2](0) = r.m_col[0](2);
    m_col[1](2) = r.m_col[2](1);
    m_col[2](1) = r.m_col[1](2);
}
