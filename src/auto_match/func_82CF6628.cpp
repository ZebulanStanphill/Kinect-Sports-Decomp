// Havok hkQsTransform::isApproximatelyEqual: translation and scale within epsilon in x, y and z,
// rotation (flipped to the same hemisphere as the other one) within epsilon in all four components.
#include "havok/hkVector4.h"

class hkQuaternion { public:
 hkVector4 m_vec;
};

class hkQsTransform { public:
 hkVector4 m_translation;
 hkQuaternion m_rotation;
 hkVector4 m_scale;
};

extern "C" hkBool fn_82CF6628(const hkQsTransform *self, const hkQsTransform &other, float epsilon)
{
    if (!self->m_translation.equals3(other.m_translation, epsilon)) {
        return false;
    }
    if (!self->m_scale.equals3(other.m_scale, epsilon)) {
        return false;
    }
    hkVector4 rot;
    rot = self->m_rotation.m_vec;
    if (rot.dot4(other.m_rotation.m_vec) < 0.0f) {
        rot.mul4(-1.0f);
    }
    return rot.equals4(other.m_rotation.m_vec, epsilon) != 0;
}
