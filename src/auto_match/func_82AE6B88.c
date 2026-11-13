extern __declspec(noreturn) void fn_82AA66A8(void *, int, ...);
extern int fn_82AE6018(void *, int, int);
extern int fn_82AE4D28(void *);
extern void fn_82AE5550(void *, int, int);

typedef struct Ctx_82AE6B88 {
    char pad0[0x324];
    void *f324;
} Ctx_82AE6B88;

typedef struct Obj_82AE6B88 {
    Ctx_82AE6B88 *ctx;
    char f4[1];
} Obj_82AE6B88;

int fn_82AE6B88(Obj_82AE6B88 *self, int count)
{
    int r = fn_82AE6018(self, 0, count);
    if (r == -1) {
        Ctx_82AE6B88 *ctx = self->ctx;
        if (ctx->f324 != 0) {
            fn_82AA66A8(ctx, 0xdef, fn_82AE4D28(ctx));
        }
        fn_82AA66A8(ctx, 0xdf0, fn_82AE4D28(ctx));
    }
    fn_82AE5550(self->f4, r, r + count - 1);
    return r;
}
