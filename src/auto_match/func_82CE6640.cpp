// Havok hkTransform::isApproximatelyEqual: the rotations compare equal (fn_82CEBF80,
// hkMatrix3::isApproximatelyEqual) and the translations are within epsilon in x, y and z.
#include "havok/hkTransform.h"

extern "C" hkBool fn_82CEBF80(const hkRotation *self, const hkRotation &other, float epsilon);

extern "C" hkBool fn_82CE6640(const hkTransform *self, const hkTransform &other, float epsilon)
{
    return fn_82CEBF80(&self->m_rotation, other.m_rotation, epsilon)
        && self->m_translation.equals3(other.m_translation, epsilon);
}
