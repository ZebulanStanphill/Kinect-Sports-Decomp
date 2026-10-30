extern int fn_826F29B8(void *, int);
extern int fn_826F2AD8(void *, int);
extern int fn_82792690(void *, int);
extern int fn_826F1A90(void *);
extern int fn_826F2588(void *);

typedef struct Ctx_82793130 {
    int a[3];
    int result;
    char pad[0x2f0];
} Ctx_82793130;

int fn_82793130(int a, int b, int c)
{
    Ctx_82793130 ctx;
    int r;
    fn_826F29B8(&ctx, a);
    fn_826F2AD8(&ctx, b);
    fn_82792690(&ctx, c);
    fn_826F1A90(&ctx);
    r = ctx.result;
    fn_826F2588(&ctx);
    return r;
}
