typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void fn_8253FDC8(float angle, float *sinOut, float *cosOut);

__vector4 fn_8255ABF8(const float *angles, __vector4 v)
{
    float ax = angles[0];
    float ay = angles[1];
    float az = angles[2];
    float s;
    float c;
    float y;
    float z;
    float x;
    __vector4 r;

    fn_8253FDC8(ax, &s, &c);
    z = v.vector4_f32[1] * s + v.vector4_f32[2] * c;
    y = v.vector4_f32[1] * c - v.vector4_f32[2] * s;
    fn_8253FDC8(ay, &s, &c);
    r.vector4_f32[2] = z * c - v.vector4_f32[0] * s;
    x = v.vector4_f32[0] * c + z * s;
    fn_8253FDC8(az, &s, &c);
    r.vector4_f32[3] = 0.0f;
    r.vector4_f32[0] = x * c - y * s;
    r.vector4_f32[1] = x * s + y * c;
    return r;
}
