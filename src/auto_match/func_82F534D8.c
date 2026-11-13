typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 fn_82F534D8(float x, float y, float z, float w)
{
    __vector4 v;
    v.vector4_f32[0] = x;
    v.vector4_f32[1] = y;
    v.vector4_f32[2] = z;
    v.vector4_f32[3] = w;
    return v;
}
