#include "havok/hkMatrix3.h"

void hkMatrix3::setTranspose(const hkMatrix3 &r)
{
    m_col0(0) = r.m_col0(0);
    m_col1(1) = r.m_col1(1);
    m_col2(2) = r.m_col2(2);
    m_col0(3) = 0.0f;
    m_col1(3) = 0.0f;
    m_col2(3) = 0.0f;
    m_col0(1) = r.m_col1(0);
    m_col1(0) = r.m_col0(1);
    m_col0(2) = r.m_col2(0);
    m_col2(0) = r.m_col0(2);
    m_col1(2) = r.m_col2(1);
    m_col2(1) = r.m_col1(2);
}
