#include "havok/hkVector4.h"

class hkMatrix3
{
  public:
    __forceinline void setZero()
    {
        hkVector4 zero;
        zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
    }

    __forceinline void setDiagonal(float m00, float m11, float m22)
    {
        setZero();
        m_col0(0) = m00;
        m_col1(1) = m11;
        m_col2(2) = m22;
    }

    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
};

class hkTransform
{
  public:
    hkMatrix3 m_rotation;
    hkVector4 m_translation;
};

class hkQsTransform
{
  public:
    hkVector4 m_translation;
    hkVector4 m_rotation;
    hkVector4 m_scale;
};

extern "C" void fn_82CE6010(hkMatrix3 *self, const hkVector4 *quaternion);
extern "C" void fn_82CEC6E0(hkMatrix3 *self, const hkMatrix3 *a, const hkMatrix3 *b);
extern "C" void fn_82CE6528(const hkTransform *self, float *out);

extern "C" void fn_82CF6738(const hkQsTransform *self, float *out)
{
    hkMatrix3 rotation;
    hkMatrix3 scale;
    hkMatrix3 rotationScale;
    hkTransform transform;

    fn_82CE6010(&rotation, &self->m_rotation);
    scale.setDiagonal(self->m_scale(0), self->m_scale(1), self->m_scale(2));
    fn_82CEC6E0(&rotationScale, &rotation, &scale);
    transform.m_translation = self->m_translation;
    transform.m_rotation.m_col0 = rotationScale.m_col0;
    transform.m_rotation.m_col1 = rotationScale.m_col1;
    transform.m_rotation.m_col2 = rotationScale.m_col2;
    fn_82CE6528(&transform, out);
}
