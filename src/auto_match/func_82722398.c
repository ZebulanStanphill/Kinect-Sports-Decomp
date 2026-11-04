typedef struct Ctx_82722398 Ctx_82722398;
typedef struct Args_82722398 { Ctx_82722398 *ctx; unsigned char kind; } Args_82722398;
typedef struct Res_82722398 { void *p; int q; unsigned char b; } Res_82722398;
typedef struct Obj_82722398 { int pad[2]; unsigned rc; } Obj_82722398;
typedef struct Tmp_82722398 { char data[16]; } Tmp_82722398;
typedef struct Vt_82722398 {
    char pad[0x28];
    void (*f28)(void *, Args_82722398 *, void *, Tmp_82722398 *, unsigned char *);
} Vt_82722398;
typedef struct Sub_82722398 { int pad[4]; Vt_82722398 *vt; } Sub_82722398;
struct Ctx_82722398 {
    char pad[0x74];
    char f50[0x278 - 0x74];
    char f278[0x284 - 0x278];
    int f284;
    void *heap;
    char pad2[0x2a0 - 0x28c];
    Sub_82722398 *f2a0;
};

extern void *fn_8267B890(void *, int, int);
extern void fn_826824B0(void *);
extern Tmp_82722398 *fn_82695750(Tmp_82722398 *, Res_82722398 *);
extern void fn_82696330(Tmp_82722398 *);
extern void fn_826A5E30(void *, int *, Obj_82722398 **);
extern int fn_826B14D8(Ctx_82722398 *, int);
extern void *fn_82721AE0(void *, Args_82722398 *, int);
extern Obj_82722398 *fn_82721A58(void *, Args_82722398 *, int, Res_82722398 *);

Res_82722398 *fn_82722398(Res_82722398 *res, Ctx_82722398 *ctx)
{
    Args_82722398 a;
    void *m;
    void *m2;
    Obj_82722398 *o;
    Obj_82722398 *tp;
    int tk;
    unsigned char flag;
    Tmp_82722398 buf;
    a.ctx = ctx;
    a.kind = 8;
    m = fn_8267B890(ctx->heap, 0x58, 0);
    res->p = m != 0 ? fn_82721AE0(m, &a, ctx->f284) : 0;
    res->b = 0;
    res->q = 0;
    m2 = fn_8267B890(ctx->heap, 0x50, 0);
    o = m2 != 0 ? fn_82721A58(m2, &a, fn_826B14D8(ctx, 1), res) : 0;
    if (o != 0)
        o->rc = o->rc + 1 & 0x8fffffff;
    tp = o;
    tk = 0x1b;
    fn_826A5E30(ctx->f278, &tk, &tp);
    if (tp != 0)
        fn_826824B0(tp);
    flag = 0;
    {
        Sub_82722398 *s = ctx->f2a0;
        Vt_82722398 *vt = s->vt;
        vt->f28((char *)s + 0x10, &a, ctx->f50, fn_82695750(&buf, res), &flag);
    }
    fn_82696330(&buf);
    if (o != 0)
        fn_826824B0(o);
    return res;
}
