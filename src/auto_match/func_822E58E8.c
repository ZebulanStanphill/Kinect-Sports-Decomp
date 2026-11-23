typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern double sqrt(double value);
extern float fn_82809D40(float y, float x);
extern int fn_8255A780(float a, float b, float tolerance);

extern float lbl_831D9208;

typedef struct Body_822E58E8 {
    char pad0[0x90];
    __vector4 rotation; /* 0x90 */
    char padA0[0x200];
    float targetAngle; /* 0x2a0 */
} Body_822E58E8;

/* Converts a rotation quaternion to Euler angles (the X and Y angles are computed and dropped)
   and returns the Z angle. */
static __forceinline float EulerAngleZ(__vector4 q)
{
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
    return angleZ;
}

/* Is the Z angle of the body's rotation within the tolerance of its target angle? */
int fn_822E58E8(Body_822E58E8 *self)
{
    return fn_8255A780(EulerAngleZ(self->rotation), self->targetAngle, lbl_831D9208);
}
