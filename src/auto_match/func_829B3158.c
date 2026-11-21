extern int lbl_8315A390;
extern unsigned int fn_829B3000(unsigned int *a, float *b, int c);
extern unsigned int fn_829B29C8(unsigned int *a, float *b, int c);

unsigned int fn_829B3158(unsigned int *a, float *b, int c)
{
    if (lbl_8315A390 != 0) {
        return fn_829B3000(a, b, c);
    }
    return fn_829B29C8(a, b, c);
}
