// Static initializer: sets a global vector to (1, 1, 1, 1) (integer splat converted to float).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);

extern __vector4 lbl_83218830;

void fn_831296E8(void)
{
    lbl_83218830 = __vcfsx(__vspltisw(1), 0);
}
