typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 fn_824AA0C8(__vector4 a, __vector4 b)
{
    if (a.vector4_f32[1] < b.vector4_f32[1])
        return a;
    return b;
}
