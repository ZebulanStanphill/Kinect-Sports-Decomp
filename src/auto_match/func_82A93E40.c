extern void fn_82A93A10(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f, int g, int h,
                        int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16);

void fn_82A93E40(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int f, int p7,
                 unsigned int flags, int p9, int p10, int p11, int p12, int p13, int p14)
{
    fn_82A93A10(a, b, c, d, e, f, (flags & 1) == 0, (flags >> 1) & 1, p7, p9, p10, p11, 0x13, p12, p13, p14);
}
