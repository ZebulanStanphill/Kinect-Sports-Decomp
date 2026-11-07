typedef struct Ctx_826D3B58 {
    int pad0;
    unsigned char *buf4;
    int pad8[4];
    int f18;
    int f1c;
} Ctx_826D3B58;

typedef struct Ref_826D3B58 {
    int pad0;
    int pad4;
    int count;
} Ref_826D3B58;

typedef struct Info_826D3B58 {
    void *ptr;
    int pad[15];
    int status;
    int pad2[3];
} Info_826D3B58;

typedef struct Obj_826D3B58 {
    int *vt;
    int refs;
} Obj_826D3B58;

extern char lbl_831552E0[];
extern char lbl_83155190[];

extern void fn_826959C8(unsigned char *p);
extern void *fn_826C59F8(Ctx_826D3B58 *ctx);
extern int fn_826957D0(Ctx_826D3B58 *ctx, int which);
extern float fn_826972E0(int v, int n);
extern void fn_82681BF8(Info_826D3B58 *info, int *flags, int n, int a, void *s1,
                        int b, void *s2, float f, short s, char c, int i);
extern void fn_82696D38(Ref_826D3B58 **ref, int v, int n, int a, int b);
extern Obj_826D3B58 *fn_826D2B68(void *owner, Info_826D3B58 *info, Ref_826D3B58 **ref,
                                 int a, int b, int c, int d, int e, int f);
extern void fn_826944C8(Ref_826D3B58 *ref);
extern void fn_82696480(unsigned char *p, Obj_826D3B58 *o);
extern void fn_8267C498(void *p);

void fn_826D3B58(Ctx_826D3B58 *ctx)
{
    unsigned char *b;
    void *owner;
    int n;
    int v;
    int flags;
    Ref_826D3B58 *ref;
    Ref_826D3B58 *r;
    Info_826D3B58 info;
    Obj_826D3B58 *o;

    b = ctx->buf4;
    fn_826959C8(b);
    *b = 0;
    owner = fn_826C59F8(ctx);
    if (owner != 0 && ctx->f1c >= 2) {
        n = ctx->f18;
        flags = 0x10001;
        v = fn_826957D0(ctx, 1);
        fn_82681BF8(&info, &flags, (int)fn_826972E0(v, n) + 0x4000, 1, lbl_831552E0,
                    1, lbl_83155190, 0.0f, 0, 0, 0);
        if (info.status >= 0 && info.status <= 0x7EFFFFFD) {
            n = ctx->f18;
            v = fn_826957D0(ctx, 0);
            fn_82696D38(&ref, v, n, -1, 0);
            o = fn_826D2B68(owner, &info, &ref, 0, 0, -1, 1, 0, 0);
            if (o != 0) {
                o->refs = o->refs + 1;
            }
            r = ref;
            if (--r->count == 0) {
                fn_826944C8(r);
            }
            if (o != 0) {
                (*(void (**)(Obj_826D3B58 *, int))((char *)o->vt + 0x14))(o, 0);
                fn_82696480(ctx->buf4,
                            (*((unsigned char *)o + 0x66) & 0x80) ? o : 0);
                fn_8267C498(o);
            }
        }
        if (info.ptr != 0) {
            fn_8267C498(info.ptr);
        }
    }
}
