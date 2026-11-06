extern void *fn_82AD18C0(void *ctx, void *v, int index);
extern void fn_82B47660(void *src, unsigned int count);
extern void *fn_82B479B0(void *ctx, void *a, void *b);
extern void *fn_82B47AA0(void *ctx, unsigned int *a, void *b);
extern void *fn_82B49CC0(void *ctx, void *a, void *b);
extern void *fn_82B4BC48(void *ctx, void *src, unsigned int count, int a, int b);

static __forceinline int nz(unsigned int n) { if (n) return 1; return 0; }
void *fn_82B4E898(void *ctx, void *src1, void *src2, unsigned int count)
{
    void *result;
    unsigned int n;
    unsigned int *desc;
    void *v;
    void *acc;

    result = 0;
    while (nz(count)) {
        n = count < 4 ? count : 4;
        desc = (unsigned int *)fn_82B4BC48(ctx, src1, n, 1, 1);
        v = fn_82B47AA0(ctx, desc, fn_82B4BC48(ctx, src2, n, 0, 1));
        if ((*desc & 0xe000000) == 0x2000000) {
            acc = v;
        } else {
            acc = fn_82B479B0(ctx, fn_82AD18C0(ctx, v, 0), fn_82AD18C0(ctx, v, 1));
            if ((*desc & 0xe000000) > 0x4000000) {
                acc = fn_82B479B0(ctx, fn_82AD18C0(ctx, acc, 0), fn_82AD18C0(ctx, v, 2));
            }
            if ((*desc & 0xe000000) > 0x6000000) {
                acc = fn_82B479B0(ctx, fn_82AD18C0(ctx, acc, 0), fn_82AD18C0(ctx, v, 3));
            }
        }
        if (result == 0) {
            result = acc;
        } else {
            result = fn_82B49CC0(ctx, result, acc);
        }
        count -= n;
        fn_82B47660(src1, n);
    }
    return result;
}
