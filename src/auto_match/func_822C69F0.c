typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Angles_822C69F0 {
    float x;
    float y;
    float z;
} Angles_822C69F0;

extern double sqrt(double value);
extern float fn_82809D40(float y, float x);
extern void fn_822C6B30(void *motion, void *position, void *previous, Angles_822C69F0 angles);

/* Converts the rotation quaternion to Euler angles and passes them on. */
void fn_822C69F0(void *motion, void *position, void *previous, __vector4 rotation)
{
    __vector4 q = rotation;
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
    Angles_822C69F0 angles;

    if (cosY > 1.0e-06f) {
        angles.z = fn_82809D40(m01, m11);
        angles.x = fn_82809D40(-m21, cosY);
        angles.y = fn_82809D40(m20, m22);
    } else {
        angles.z = fn_82809D40(-m10, m00);
        angles.x = fn_82809D40(-m21, cosY);
        angles.y = 0.0f;
    }
    fn_822C6B30(motion, position, previous, angles);
}
