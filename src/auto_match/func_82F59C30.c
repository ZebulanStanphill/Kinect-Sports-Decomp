typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec3_82F59C30 {
    float x;
    float y;
    float z;
} Vec3_82F59C30;

extern double sqrt(double value);
extern void fn_82BA02A8(void);
extern float fn_82F59450(float y, float x);

/* Converts a rotation quaternion to Euler angles. */
Vec3_82F59C30 fn_82F59C30(__vector4 q)
{
    Vec3_82F59C30 angles;
    float x2;
    float y2;
    float z2;
    float wz;
    float xx;
    float xy;
    float xz;
    float yy;
    float yz;
    float zz;
    float wx;
    float wy;
    float m00;
    float m01;
    float m10;
    float m11;
    float m20;
    float m21;
    float m22;
    float cosY;

    fn_82BA02A8();
    x2 = q.vector4_f32[0] * 2.0f;
    y2 = q.vector4_f32[1] * 2.0f;
    z2 = q.vector4_f32[2] * 2.0f;
    wz = q.vector4_f32[3] * z2;
    xx = q.vector4_f32[0] * x2;
    xy = q.vector4_f32[0] * y2;
    xz = q.vector4_f32[0] * z2;
    yy = q.vector4_f32[1] * y2;
    yz = q.vector4_f32[1] * z2;
    zz = q.vector4_f32[2] * z2;
    wx = q.vector4_f32[3] * x2;
    wy = q.vector4_f32[3] * y2;
    m00 = 1.0f - (yy + zz);
    m01 = xy + wz;
    m10 = xy - wz;
    m11 = 1.0f - (xx + zz);
    m20 = xz + wy;
    m21 = yz - wx;
    m22 = 1.0f - (xx + yy);
    cosY = (float)sqrt(m22 * m22 + m20 * m20);
    if (cosY > 1.0e-06f) {
        angles.z = fn_82F59450(m01, m11);
        angles.x = fn_82F59450(-m21, cosY);
        angles.y = fn_82F59450(m20, m22);
    } else {
        angles.z = fn_82F59450(-m10, m00);
        angles.x = fn_82F59450(-m21, cosY);
        angles.y = 0.0f;
    }
    return angles;
}
