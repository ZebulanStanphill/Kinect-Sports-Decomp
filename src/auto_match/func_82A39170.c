typedef struct Vtbl_82A39170 {
    void *slot0;
    unsigned int (*fallback)(unsigned int id);
} Vtbl_82A39170;

typedef struct Entry_82A39170 {
    int f0;
    unsigned int a;
    int f8;
    int fc;
    unsigned int b;
} Entry_82A39170;

typedef struct Ctx_82A39170 {
    Vtbl_82A39170 *vt;
    char pad04[0x38];
    int (*begin)(const char *, unsigned int, int, int, int, int, int, unsigned int *);
    void (*end)(unsigned int, unsigned int);
    char pad44[0xc];
    char cache[0x3c];
    char b[0x38];
    char a[1];
} Ctx_82A39170;

extern Ctx_82A39170 *lbl_83219598;
extern Entry_82A39170 *fn_82A381F0(void *cache, unsigned int id, int flag);
extern void fn_82A37888(void *p, unsigned int v);
extern void fn_82A37BC8(void *p, unsigned int v);
extern unsigned int fn_82A383C0(void *cache, unsigned int id);

unsigned int fn_82A39170(unsigned int id)
{
    Ctx_82A39170 *ctx;
    Entry_82A39170 *e;
    int hr;
    unsigned int result;
    unsigned int token;

    ctx = lbl_83219598;
    e = fn_82A381F0(ctx->cache, id, 0);
    if (e != 0) {
        hr = 0xc0000001;
        if (ctx->begin != 0)
            hr = ctx->begin("XctdDecompression", id, 5, 0, 0, 0, 0, &token);
        fn_82A37888(ctx->a, e->a);
        fn_82A37BC8(ctx->b, e->b);
        result = fn_82A383C0(ctx->cache, id);
        if (ctx->end != 0 && hr >= 0)
            ctx->end(result, token);
        return result;
    }
    return ctx->vt->fallback(id);
}
