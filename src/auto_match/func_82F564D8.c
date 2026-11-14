typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void fn_82F564D8(__vector4 *out, const __vector4 *rows, int index)
{
    *out = rows[index + 3];
}
