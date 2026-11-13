extern int fn_829F5E70(unsigned ctx, unsigned a, int b, int c, int d, int e, int f, int g);
extern unsigned lbl_83218C30;

int fn_829F4E60(unsigned a, int b, int c, int d, int e, int f, int g)
{
    int z = 0;
    if (!a) {
        z = 0x57;
    } else if (!lbl_83218C30) {
        z = 0x57;
    } else {
        fn_829F5E70(lbl_83218C30, a, b, c, d, e, f, g);
    }
    return z;
}
