typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern char *lbl_83218C30;

__vector4 fn_829F4D00(void)
{
    return *(__vector4 *)(lbl_83218C30 + 0x10650);
}
