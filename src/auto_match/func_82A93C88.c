extern void fn_82A93A10(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f, int g, int h,
                        int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16);

void fn_82A93C88(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f,
                 unsigned int flags, int p8, int p9, int p10, int p11, int p12, int p13)
{
    fn_82A93A10(a, b, 1, c, d, e, (flags & 1) == 0, (flags >> 1) & 1, f, p8, p9, p10, 3, p11, p12, p13);
}
