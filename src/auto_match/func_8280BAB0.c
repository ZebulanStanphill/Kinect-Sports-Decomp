static __forceinline void setMatrix44_8280BAB0(float *m, float m00, float m01, float m02, float m03,
                                               float m10, float m11, float m12, float m13, float m20,
                                               float m21, float m22, float m23, float m30, float m31,
                                               float m32, float m33)
{
    m[0] = m00;
    m[4] = m01;
    m[8] = m02;
    m[12] = m03;
    m[1] = m10;
    m[5] = m11;
    m[9] = m12;
    m[13] = m13;
    m[2] = m20;
    m[6] = m21;
    m[10] = m22;
    m[14] = m23;
    m[3] = m30;
    m[7] = m31;
    m[11] = m32;
    m[15] = m33;
}

void fn_8280BAB0(const float *src, float *dst, float x, float y, float z)
{
    float m00 = src[0] + src[3] * x;
    float m10 = src[4] + src[7] * x;
    float m20 = src[8] + src[11] * x;
    float m30 = src[12] + src[15] * x;
    float m01 = src[1] + src[3] * y;
    float m11 = src[5] + src[7] * y;
    float m21 = src[9] + src[11] * y;
    float m31 = src[13] + src[15] * y;
    float m02 = src[2] + src[3] * z;
    float m12 = src[6] + src[7] * z;
    float m22 = src[10] + src[11] * z;
    float m32 = src[14] + src[15] * z;
    float m03 = src[3];
    float m13 = src[7];
    float m23 = src[11];
    float m33 = src[15];

    setMatrix44_8280BAB0(dst, m00, m10, m20, m30, m01, m11, m21, m31, m02, m12, m22, m32, m03, m13, m23, m33);
}
