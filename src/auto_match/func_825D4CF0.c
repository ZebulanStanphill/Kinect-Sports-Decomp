typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
extern void fn_825D4A58(char **cursor, float a, float b, int c, int d, __vector4 x, __vector4 y);
extern void fn_825D4E20(void *dst, char *buf);
void fn_825D4CF0(void *dst, float a, float b, int c, int d, __vector4 x, __vector4 y)
{
    char *cur;
    char buf[112];
    cur = buf;
    fn_825D4A58(&cur, a, b, c, d, x, y);
    fn_825D4E20(dst, buf);
}
