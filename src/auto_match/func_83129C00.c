typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);

extern __vector4 lbl_83218C20;

void fn_83129C00(void)
{
    lbl_83218C20 = __vspltish(7);
}
