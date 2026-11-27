#include "xdk/vectorintrinsics.h"

extern double sqrt(double value);
extern float fn_82809D40(float y, float x);

typedef struct Body_8261E4B8 {
    char pad0[0x20];
    __vector4 rotation; /* 0x20 */
} Body_8261E4B8;

/* Converts the body's rotation quaternion to Euler angles and returns the Z and Y angles. */
void fn_8261E4B8(Body_8261E4B8 *self, float *outZ, float *outY)
{
    __vector4 q = self->rotation;
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
    float angleX;
    float angleY;
    float angleZ;

    if (cosY > 1.0e-06f) {
        angleX = fn_82809D40(m01, m11);
        angleY = fn_82809D40(-m21, cosY);
        angleZ = fn_82809D40(m20, m22);
    } else {
        angleX = fn_82809D40(-m10, m00);
        angleY = fn_82809D40(-m21, cosY);
        angleZ = 0.0f;
    }
    if (outZ != 0) {
        *outZ = angleZ;
    }
    if (outY != 0) {
        *outY = angleY;
    }
}
