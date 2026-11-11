typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 lbl_83297070;

void fn_831259F0(void)
{
    const __vector4 v = {{0.0f, 1.0f, 0.0f, 0.0f}};
    lbl_83297070 = v;
}
