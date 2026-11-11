typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_82132D00;
extern __vector4 lbl_8323B1A0;

void fn_8312C178(void)
{
    lbl_8323B1A0 = lbl_82132D00;
}
