typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

void fn_8259EE78(void *self, __vector4 *out)
{
    *out = __VMXGetReg(77);
}
