#include "havok/hkMatrix3.h"

static HK_FORCE_INLINE void scaleColumn(hkVector4 &column, const hkSimdReal &scale)
{
    column.m_quad = __vmulfp(column.m_quad, scale.m_real);
}

void hkMatrix3::mul(const hkSimdReal &scale)
{
    scaleColumn(m_col0, scale);
    scaleColumn(m_col1, scale);
    scaleColumn(m_col2, scale);
}
