// Havok: writes a translation/rotation/scale transform as a 4x4 column-major matrix: the rotation
// times a diagonal scale matrix, with the translation. The diagonal stores keep their order only
// through hkVector4's reference-returning operator().
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

class hkVector4
{
  public:
    __forceinline void operator=(const hkVector4 &v)
    {
        m_quad = v.m_quad;
    }

    __forceinline void setZero4()
    {
        m_quad = __vxor(m_quad, m_quad);
    }

    __forceinline float &operator()(int i)
    {
        return m_quad.vector4_f32[i];
    }

    __forceinline const float &operator()(int i) const
    {
        return m_quad.vector4_f32[i];
    }

    __vector4 m_quad;
};

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
