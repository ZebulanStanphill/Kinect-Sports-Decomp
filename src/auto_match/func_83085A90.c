typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void fn_83085A90(void *self, __vector4 *base, int i, const __vector4 *v)
{
    base[i] = *v;
}
