extern __declspec(noreturn) void fn_82AA66A8(void *, int, ...);
extern unsigned int fn_82ACA4F0();
extern unsigned int fn_82AE58D8();
extern int fn_82AE4D28(void *);

typedef struct Ctx_82AE5D30 {
    char pad0[0x324];
    void *f324;
} Ctx_82AE5D30;

unsigned int fn_82AE5D30(Ctx_82AE5D30 **param_1, int param_2, unsigned char param_3)
{
    unsigned int r;
    unsigned int v;
    unsigned int i;

    r = fn_82AE58D8(param_1, 0, param_2, 1);
    if (r == 0xffffffff) {
        if (param_3 != 0) {
            Ctx_82AE5D30 *ctx = *param_1;
            if (ctx->f324 != 0) {
                fn_82AA66A8(ctx, 0xdef, fn_82AE4D28(ctx));
            }
            fn_82AA66A8(ctx, 0xdf0, fn_82AE4D28(ctx));
        }
        return 0xffffffff;
    }
    v = fn_82ACA4F0(r & 0xf, param_2);
    i = (r >> 9) + 1;
    ((unsigned int *)param_1)[i] = v << ((r >> 4) & 0x1f) | ((unsigned int *)param_1)[i];
    return r & 0xfffffff0 | v & 0xf;
}
