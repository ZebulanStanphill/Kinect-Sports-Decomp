void fn_8281DD08(const float *m, float *out)
{
    float m00 = m[0], m10 = m[3], m20 = m[6];
    float m01 = m[1], m11 = m[4], m21 = m[7];
    float m02 = m[2], m12 = m[5], m22 = m[8];
    out[0] = m00;
    out[1] = m10;
    out[2] = m20;
    out[3] = m01;
    out[4] = m11;
    out[5] = m21;
    out[6] = m02;
    out[7] = m12;
    out[8] = m22;
}
