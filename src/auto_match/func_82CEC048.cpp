// Havok hkMatrix3::isSymmetric: the matrix equals its transpose within epsilon.
#include "havok/hkVector4.h"

class hkRotation
{
  public:
    __forceinline float operator()(int row, int column) const
    {
        return col[column].m_quad.vector4_f32[row];
    }

    __forceinline void setTranspose(const hkRotation &s)
    {
        col[0].m_quad.vector4_f32[0] = s(0, 0);
        col[1].m_quad.vector4_f32[1] = s(1, 1);
        col[2].m_quad.vector4_f32[2] = s(2, 2);
        col[0].m_quad.vector4_f32[3] = 0.0f;
        col[1].m_quad.vector4_f32[3] = 0.0f;
        col[2].m_quad.vector4_f32[3] = 0.0f;
        col[0].m_quad.vector4_f32[1] = s(0, 1);
        col[1].m_quad.vector4_f32[0] = s(1, 0);
        col[0].m_quad.vector4_f32[2] = s(0, 2);
        col[2].m_quad.vector4_f32[0] = s(2, 0);
        col[1].m_quad.vector4_f32[2] = s(1, 2);
        col[2].m_quad.vector4_f32[1] = s(2, 1);
    }

    hkVector4 col[3];
};

extern "C" hkBool fn_82CEBF80(const hkRotation *self, const hkRotation &other, float epsilon);

extern "C" bool fn_82CEC048(const hkRotation *self, float epsilon)
{
    hkRotation transposed;

    transposed.setTranspose(*self);
    return fn_82CEBF80(self, transposed, epsilon);
}
