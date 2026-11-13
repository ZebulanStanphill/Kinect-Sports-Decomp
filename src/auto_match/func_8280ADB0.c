void fn_8280ADB0(float *m, float *v, float *o)
{
    float x = m[0] * v[0] + m[4] * v[1] + m[8] * v[2] + m[12];
    float y = m[1] * v[0] + m[5] * v[1] + m[9] * v[2] + m[13];
    float z = m[2] * v[0] + m[6] * v[1] + m[10] * v[2] + m[14];
    float w = m[3] * v[0] + m[7] * v[1] + m[11] * v[2] + m[15];
    float inv = 1.0f / w;
    o[0] = x * inv;
    o[1] = inv * y;
    o[2] = inv * z;
}
