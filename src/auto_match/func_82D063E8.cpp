#include "havok/hkVector4.h"

class hkMatrix4 {
public:
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
    hkVector4 m_col3;
};

extern "C" hkBool *fn_82D063E8(hkBool *result, const hkMatrix4 *self, const hkMatrix4 &m, float epsilon)
{
    *result = hkBool(self->m_col0.equals4(m.m_col0, epsilon) && self->m_col1.equals4(m.m_col1, epsilon) &&
                     self->m_col2.equals4(m.m_col2, epsilon) && self->m_col3.equals4(m.m_col3, epsilon));
    return result;
}
