// Kinect Sports retail 4D5308C9, function 0x8281D780 (56 bytes).
// Sets a 3x3 float matrix to the identity.
static __forceinline void setMatrix33_8281D780(float *m, float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
{
    m[0] = m00;
    m[3] = m01;
    m[6] = m02;
    m[1] = m10;
    m[4] = m11;
    m[7] = m12;
    m[2] = m20;
    m[5] = m21;
    m[8] = m22;
}

void fn_8281D780(float *m)
{
    setMatrix33_8281D780(m, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
