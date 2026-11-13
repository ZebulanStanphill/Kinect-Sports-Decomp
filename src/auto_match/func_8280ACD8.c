static __forceinline void setMatrix44_8280ACD8(float *m, float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23, float m30, float m31, float m32, float m33)
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

void fn_8280ACD8(float *m)
{
    setMatrix44_8280ACD8(m, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
