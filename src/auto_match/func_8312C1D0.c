typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const __vector4 lbl_820D2760;
extern __vector4 lbl_8323B1C0;

void fn_8312C1D0(void)
{
    lbl_8323B1C0 = lbl_820D2760;
}
