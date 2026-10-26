typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
extern void fn_825D4818(char **cursor, float a, float b, int c, int d, __vector4 x, __vector4 y, __vector4 z);
extern void fn_825D4E20(void *dst, char *buf);
void fn_825D4A10(void *dst, float a, float b, int c, int d, __vector4 x, __vector4 y, __vector4 z)
{
    char *cur;
    char buf[112];
    cur = buf;
    fn_825D4818(&cur, a, b, c, d, x, y, z);
    fn_825D4E20(dst, buf);
}
