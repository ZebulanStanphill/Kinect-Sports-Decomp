typedef struct Compiler_82B1DCD8 {
    char pad0[0x30];
    unsigned int version;
} Compiler_82B1DCD8;

extern void *fn_82B8A3A0(Compiler_82B1DCD8 *ctx, int flag, float x, float y, float z, float w);
extern void *fn_82B8A1E8(Compiler_82B1DCD8 *ctx);
extern void *fn_82AD1918(Compiler_82B1DCD8 *ctx, void *v, int index, int count);
extern void *fn_82AD18C0(Compiler_82B1DCD8 *ctx, void *v, int index);
extern void *fn_82B1A610(Compiler_82B1DCD8 *ctx, void *dst, void *a, void *b);
extern void *fn_82B1ACA0(Compiler_82B1DCD8 *ctx, void *dst, void *a, void *b, void *c);
extern void *fn_82B1AB88(Compiler_82B1DCD8 *ctx, void *dst, void *a, void *b, void *c);

void fn_82B1DCD8(Compiler_82B1DCD8 *ctx, void *dst, void *src)
{
    void *constant;
    void *temp;
    void *s;

    constant = fn_82B8A3A0(ctx, 2, 0.0f, 1.0f, 0.0f, 0.0f);
    if ((ctx->version & 0xffff0000) == 0xffff0000) {
        temp = fn_82B8A1E8(ctx);
        src = fn_82B1A610(ctx, dst, fn_82AD18C0(ctx, src, 0), fn_82AD1918(ctx, temp, 0, 4));
        src = fn_82B1ACA0(ctx, dst, fn_82AD18C0(ctx, src, 0), fn_82AD18C0(ctx, src, 0),
                          fn_82AD18C0(ctx, temp, 2));
        src = fn_82B1A610(ctx, dst, fn_82AD18C0(ctx, src, 0), fn_82AD18C0(ctx, temp, 1));
        s = fn_82B1A610(ctx, dst, fn_82AD18C0(ctx, src, 0), fn_82AD1918(ctx, temp, 2, 4));
        fn_82B1AB88(ctx, dst, fn_82AD18C0(ctx, s, 0), fn_82AD18C0(ctx, constant, 0),
                    fn_82AD18C0(ctx, src, 0));
    } else {
        fn_82B1A610(ctx, dst, fn_82AD18C0(ctx, src, 0), fn_82AD18C0(ctx, constant, 1));
    }
}
