#include "havok/hkMatrix4.h"

extern "C" hkBool *fn_82D063E8(hkBool *result, const hkMatrix4 *self, const hkMatrix4 &m, float epsilon)
{
    *result = hkBool(self->m_col0.equals4(m.m_col0, epsilon) && self->m_col1.equals4(m.m_col1, epsilon) &&
                     self->m_col2.equals4(m.m_col2, epsilon) && self->m_col3.equals4(m.m_col3, epsilon));
    return result;
}
