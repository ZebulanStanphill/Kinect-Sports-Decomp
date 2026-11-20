#include "havok/hkMatrix3.h"
#include "havok/hkSimdReal.h"

static HK_FORCE_INLINE void scaleColumn(hkVector4 &column, const hkSimdReal &scale)
{
    column.m_quad = __vmulfp(column.m_quad, scale.m_real);
}

void hkMatrix3::mul(const hkSimdReal &scale)
{
    scaleColumn(m_col[0], scale);
    scaleColumn(m_col[1], scale);
    scaleColumn(m_col[2], scale);
}
