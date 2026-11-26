// Builds an hkTransform from an hkQsTransform (rotation * scale, and the translation) and passes it on to
// fn_82CE6528 with the output pointer.
#include "havok/hkTransform.h"
#include "havok/hkQsTransform.h"

extern "C" void fn_82CE6528(const hkTransform *self, float *out);

extern "C" void fn_82CF6738(const hkQsTransform *self, float *out)
{
    hkRotation rotation;
    hkMatrix3 scale;
    hkMatrix3 rotationScale;
    hkTransform transform;

    rotation.set(self->m_rotation);
    scale.setDiagonal(self->m_scale(0), self->m_scale(1), self->m_scale(2));
    rotationScale.setMul(rotation, scale);
    transform.m_translation = self->m_translation;
    transform.m_rotation.m_col0 = rotationScale.m_col0;
    transform.m_rotation.m_col1 = rotationScale.m_col1;
    transform.m_rotation.m_col2 = rotationScale.m_col2;
    fn_82CE6528(&transform, out);
}
