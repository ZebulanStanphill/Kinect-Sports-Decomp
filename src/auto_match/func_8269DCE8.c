extern int fn_826F29B8(void *, int);
extern int fn_826F2AD8(void *, int);
extern int fn_8269DA90(void *, int);
extern int fn_826F1A90(void *);
extern int fn_826F2588(void *);

typedef struct Ctx_8269DCE8 {
    int a[3];
    int result;
    char pad[0x2f0];
} Ctx_8269DCE8;

int fn_8269DCE8(int a, int b, int c)
{
    Ctx_8269DCE8 ctx;
    int r;
    fn_826F29B8(&ctx, a);
    fn_826F2AD8(&ctx, b);
    fn_8269DA90(&ctx, c);
    fn_826F1A90(&ctx);
    r = ctx.result;
    fn_826F2588(&ctx);
    return r;
}
