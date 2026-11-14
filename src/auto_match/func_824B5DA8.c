typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void fn_824B5DA8(__vector4 *out, __vector4 a, __vector4 b)
{
    const __vector4 *p = &a;
    if (a.vector4_f32[1] <= b.vector4_f32[1])
        p = &b;
    *out = *p;
}
