extern void fn_82A93A10(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f, int g, int h,
                        int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16);

void fn_82A93EA8(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f, int unused,
                 int p8, int p9, int p10, int p11, int p12)
{
    fn_82A93A10(a, b, c, d, e, f, 2, 0, 0, p8, p9, 0, 0x11, p10, p11, p12);
}
