typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltish(int value);

extern __vector4 lbl_83218C10;

void fn_83129BE8(void)
{
    lbl_83218C10 = __vspltish(3);
}
