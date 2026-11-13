extern void *lbl_8327F844;
extern void fn_8252EE78(void *a, void *b, void *c, float f1, float f2, float f3, float f4, float f5,
                        float f6, void *p10, int p11, int p12, int p13, int p14, int p15);

void fn_8252DCF8(void *a, void *b, void *c, float f1, float f2, float f3, float f4, float f5,
                 float f6, void *p10, int p11, int p12, int p13, int p14, int p15)
{
    if (lbl_8327F844 != 0) {
        fn_8252EE78(a, b, c, f1, f2, f3, f4, f5, f6, p10, p11, p12, p13, p14, p15);
    }
}
