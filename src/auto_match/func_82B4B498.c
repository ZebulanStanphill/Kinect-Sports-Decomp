typedef struct Ctx_82B4B498 {
    char pad0[0x20];
    unsigned int current;
    unsigned int next;
    char pad28[0x2e8 - 0x28];
    void *tracking;
} Ctx_82B4B498;

__declspec(noreturn) extern void fn_82AA66A8(void *ctx, int code, ...);
extern void fn_82B4AB48(Ctx_82B4B498 *ctx);

void fn_82B4B498(Ctx_82B4B498 *ctx)
{
    if (ctx->next == 0) {
        ctx->next = 1;
    }
    ctx->current = ctx->next++;
    if (ctx->next < ctx->current || ctx->current > 0x7fffe) {
        fn_82AA66A8(ctx, 0xdc9);
    }
    if (ctx->tracking != 0) {
        fn_82B4AB48(ctx);
    }
}
