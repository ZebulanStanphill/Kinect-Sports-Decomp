// Havok hkMatrix3::isSymmetric: the matrix equals its transpose within epsilon.
#include "havok/hkBaseTypes.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

class hkVector4
{
  public:
    __forceinline void set(float x, float y, float z, float w = 0.0f)
    {
        q.f[0] = x;
        q.f[1] = y;
        q.f[2] = z;
        q.f[3] = w;
    }

    __vector4 q;
};

class hkRotation
{
  public:
    __forceinline float operator()(int row, int column) const
    {
        return col[column].q.f[row];
    }

    __forceinline void setTranspose(const hkRotation &s)
    {
        col[0].q.f[0] = s(0, 0);
        col[1].q.f[1] = s(1, 1);
        col[2].q.f[2] = s(2, 2);
        col[0].q.f[3] = 0.0f;
        col[1].q.f[3] = 0.0f;
        col[2].q.f[3] = 0.0f;
        col[0].q.f[1] = s(0, 1);
        col[1].q.f[0] = s(1, 0);
        col[0].q.f[2] = s(0, 2);
        col[2].q.f[0] = s(2, 0);
        col[1].q.f[2] = s(1, 2);
        col[2].q.f[1] = s(2, 1);
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
