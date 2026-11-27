#include "xdk/vectorintrinsics.h"

typedef struct Euler_8252A068 {
    float x;
    float y;
    float z;
} Euler_8252A068;

typedef struct Object_8252A068 {
    char pad0[0xc0];
    __vector4 rotation; /* 0xc0 */
} Object_8252A068;

extern double sqrt(double value);
extern float fn_82809D40(float y, float x);

/* Converts a rotation quaternion to Euler angles. */
static __forceinline Euler_8252A068 QuaternionToEuler(__vector4 q)
{
    Euler_8252A068 angles;
    float x2 = q.vector4_f32[0] * 2.0f;
    float y2 = q.vector4_f32[1] * 2.0f;
    float z2 = q.vector4_f32[2] * 2.0f;
    float wz = q.vector4_f32[3] * z2;
    float xx = q.vector4_f32[0] * x2;
    float xy = q.vector4_f32[0] * y2;
    float xz = q.vector4_f32[0] * z2;
    float yy = q.vector4_f32[1] * y2;
    float yz = q.vector4_f32[1] * z2;
    float zz = q.vector4_f32[2] * z2;
    float wx = q.vector4_f32[3] * x2;
    float wy = q.vector4_f32[3] * y2;
    float m00 = 1.0f - (yy + zz);
    float m01 = xy + wz;
    float m10 = xy - wz;
    float m11 = 1.0f - (xx + zz);
    float m20 = xz + wy;
    float m21 = yz - wx;
    float m22 = 1.0f - (xx + yy);
    float cosY = (float)sqrt(m22 * m22 + m20 * m20);

    if (cosY > 1.0e-06f) {
        angles.z = fn_82809D40(m01, m11);
        angles.x = fn_82809D40(-m21, cosY);
        angles.y = fn_82809D40(m20, m22);
    } else {
        angles.z = fn_82809D40(-m10, m00);
        angles.x = fn_82809D40(-m21, cosY);
        angles.y = 0.0f;
    }
    return angles;
}

void fn_8252A068(Object_8252A068 *self, Euler_8252A068 *angles)
{
    *angles = QuaternionToEuler(self->rotation);
}
