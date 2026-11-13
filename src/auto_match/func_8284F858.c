extern int fn_8284F7E0();
extern int fn_82859808(void *ctx);

typedef struct Ctx_8284F858 {
    int (*fn)();
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int e;
    unsigned int d;
    unsigned int f;
} Ctx_8284F858;

void fn_8284F858(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4,
                 unsigned int param_5, unsigned int param_6)
{
    Ctx_8284F858 ctx;

    ctx.fn = fn_8284F7E0;
    ctx.a = param_1;
    ctx.b = param_2;
    ctx.e = param_5;
    ctx.f = param_6;
    ctx.c = param_3;
    ctx.d = param_4;
    fn_82859808(&ctx);
}
