typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

extern int fn_8223B610(void *src, void *buf, int n, int a, int b);

void fn_822377F0(int param_1, void *param_2, __vector4 *out)
{
    __vector4 buf;
    fn_8223B610(param_2, &buf, 0x10, 0, 0);
    if (out != 0) {
        *out = buf;
    }
}
