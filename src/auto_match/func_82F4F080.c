typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 fn_82F534D8(float x, float y, float z, float w);

__vector4 *fn_82F4F080(__vector4 *out)
{
    *out = fn_82F534D8(-1.0f, 1.0f, -1.0f, 0.0f);
    return out;
}
