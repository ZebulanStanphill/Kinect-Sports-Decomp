typedef struct Ctx_8271E2F8 Ctx_8271E2F8;
typedef struct Args_8271E2F8 { Ctx_8271E2F8 *ctx; unsigned char kind; } Args_8271E2F8;
typedef struct Res_8271E2F8 { void *p; int q; unsigned char b; } Res_8271E2F8;
typedef struct Obj_8271E2F8 { int pad[2]; unsigned rc; } Obj_8271E2F8;
typedef struct Tmp_8271E2F8 { char data[16]; } Tmp_8271E2F8;
typedef struct Vt_8271E2F8 {
    char pad[0x28];
    void (*f28)(void *, Args_8271E2F8 *, void *, Tmp_8271E2F8 *, unsigned char *);
} Vt_8271E2F8;
typedef struct Sub_8271E2F8 { int pad[4]; Vt_8271E2F8 *vt; } Sub_8271E2F8;
struct Ctx_8271E2F8 {
    char pad[0x50];
    char f50[0x278 - 0x50];
    char f278[0x284 - 0x278];
    int f284;
    void *heap;
    char pad2[0x2a0 - 0x28c];
    Sub_8271E2F8 *f2a0;
};

extern void *fn_8267B890(void *, int, int);
extern void fn_826824B0(void *);
extern Tmp_8271E2F8 *fn_82695750(Tmp_8271E2F8 *, Res_8271E2F8 *);
extern void fn_82696330(Tmp_8271E2F8 *);
extern void fn_826A5E30(void *, int *, Obj_8271E2F8 **);
extern int fn_826B14D8(Ctx_8271E2F8 *, int);
extern void *fn_8271D4A8(void *, Args_8271E2F8 *, int);
extern Obj_8271E2F8 *fn_8271DC30(void *, Args_8271E2F8 *, int, Res_8271E2F8 *);

Res_8271E2F8 *fn_8271E2F8(Res_8271E2F8 *res, Ctx_8271E2F8 *ctx)
{
    Args_8271E2F8 a;
    void *m;
    void *m2;
    Obj_8271E2F8 *o;
    Obj_8271E2F8 *tp;
    int tk;
    unsigned char flag;
    Tmp_8271E2F8 buf;
    a.ctx = ctx;
    a.kind = 8;
    m = fn_8267B890(ctx->heap, 0x38, 0);
    res->p = m != 0 ? fn_8271D4A8(m, &a, ctx->f284) : 0;
    res->b = 0;
    res->q = 0;
    m2 = fn_8267B890(ctx->heap, 0x50, 0);
    o = m2 != 0 ? fn_8271DC30(m2, &a, fn_826B14D8(ctx, 1), res) : 0;
    if (o != 0)
        o->rc = o->rc + 1 & 0x8fffffff;
    tp = o;
    tk = 0x12;
    fn_826A5E30(ctx->f278, &tk, &tp);
    if (tp != 0)
        fn_826824B0(tp);
    flag = 0;
    {
        Sub_8271E2F8 *s = ctx->f2a0;
        Vt_8271E2F8 *vt = s->vt;
        vt->f28((char *)s + 0x10, &a, ctx->f50, fn_82695750(&buf, res), &flag);
    }
    fn_82696330(&buf);
    if (o != 0)
        fn_826824B0(o);
    return res;
}
