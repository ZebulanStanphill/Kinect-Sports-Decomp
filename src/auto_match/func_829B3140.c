extern int lbl_8315A390;
extern unsigned int fn_829B2F80(unsigned int *a, int b, int c);
extern unsigned int fn_829B2858(unsigned int *a, int b, int c);

unsigned int fn_829B3140(unsigned int *a, int b, int c)
{
    if (lbl_8315A390 != 0) {
        return fn_829B2F80(a, b, c);
    }
    return fn_829B2858(a, b, c);
}
