typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 fn_824AAAD8(__vector4 a, __vector4 b)
{
    if (a.vector4_f32[2] > b.vector4_f32[2])
        return a;
    return b;
}
