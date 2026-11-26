// Havok hkMatrix3::isApproximatelyEqual: every column within epsilon in x, y and z.
#include "havok/hkRotation.h"

extern "C" hkBool fn_82CEBF80(const hkRotation *self, const hkRotation &other, float epsilon)
{
    return self->m_col0.equals3(other.m_col0, epsilon)
        && self->m_col1.equals3(other.m_col1, epsilon)
        && self->m_col2.equals3(other.m_col2, epsilon);
}
