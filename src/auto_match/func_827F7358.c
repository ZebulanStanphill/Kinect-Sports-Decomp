typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void fn_827F7358(char *base, int offset, __vector4 value)
{
    *(__vector4 *)(base + offset) = value;
}
