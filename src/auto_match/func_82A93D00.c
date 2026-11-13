extern void fn_82A93A10(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f, int g, int h,
                        int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16);

void fn_82A93D00(unsigned int a, unsigned int b, int c, int d, int e, unsigned int flags, int g, int h,
                 int p9, int p10, int p11)
{
    fn_82A93A10(a, 1, 1, b, c, d, 0, (flags >> 1) & 1, e, g, h, 0, 0x14, p9, p10, p11);
}
