typedef unsigned int undefined4;

extern int fn_8284F7E0();
extern int fn_82859808(void *ctx);

typedef struct Ctx_8284F858 {
    int (*fn)();
    undefined4 a;
    undefined4 b;
    undefined4 c;
    undefined4 e;
    undefined4 d;
    undefined4 f;
} Ctx_8284F858;

void fn_8284F858(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                 undefined4 param_5, undefined4 param_6)
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
