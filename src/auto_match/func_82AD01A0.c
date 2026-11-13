extern __declspec(noreturn) void fn_82AA66A8(void *, int, ...);
extern unsigned int fn_82ACA4F0();
extern unsigned int fn_82AD00E0();

typedef struct Ctx_82AD01A0 {
    char pad0[0x318];
    void *f318;
} Ctx_82AD01A0;

unsigned int fn_82AD01A0(Ctx_82AD01A0 **param_1, int param_2, unsigned char param_3)
{
    unsigned int r;
    unsigned int v;
    unsigned int i;
    unsigned int sh;

    r = fn_82AD00E0(param_1, 0, param_2, 4);
    if (r == 0xffffffff) {
        if (param_3 != 0) {
            Ctx_82AD01A0 *ctx = *param_1;
            if (ctx->f318 != 0) {
                fn_82AA66A8(ctx, 0xdbe);
            }
            fn_82AA66A8(ctx, 0xded);
        }
        return 0xffffffff;
    }
    sh = (r >> 4) * 4;
    v = fn_82ACA4F0(r & 0xf, param_2);
    i = (sh >> 6) + 1;
    ((unsigned __int64 *)param_1)[i] = (unsigned __int64)v << (sh & 0x3f) | ((unsigned __int64 *)param_1)[i];
    return r & 0xfffffff0 | v & 0xf;
}
