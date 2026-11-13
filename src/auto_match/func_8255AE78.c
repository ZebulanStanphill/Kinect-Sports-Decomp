typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern void fn_8253FDC8(float angle, float *s, float *c);

__vector4 fn_8255AE78(__vector4 v, float angle)
{
    float c;
    float s;
    __vector4 r;

    fn_8253FDC8(angle, &s, &c);
    r.vector4_f32[2] = v.vector4_f32[2] * c - v.vector4_f32[0] * s;
    r.vector4_f32[0] = v.vector4_f32[0] * c + v.vector4_f32[2] * s;
    r.vector4_f32[1] = v.vector4_f32[1];
    r.vector4_f32[3] = 0.0f;
    return r;
}
