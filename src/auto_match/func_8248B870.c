typedef struct Obj_8248B870 {
    struct {
        char pad[0x14];
        int (*f14)(struct Obj_8248B870 *, int *, int *);
    } *vt;
} Obj_8248B870;
typedef struct { Obj_8248B870 *p; void *rep; } Sp_8248B870;
typedef struct {
    char pad[0x10];
    char ctx[1];
} Self_8248B870;
extern Sp_8248B870 *fn_82365BD8(Sp_8248B870 *out, void *ctx);
extern void fn_822315A0(void *);

int fn_8248B870(Self_8248B870 *self)
{
    int a = 0;
    int b;
    Sp_8248B870 sp;
    unsigned char ok;
    int r;
    void *ctx = self->ctx;

    fn_82365BD8(&sp, ctx);
    ok = sp.p != 0;
    if (sp.rep != 0) {
        fn_822315A0(sp.rep);
    }
    if (ok) {
        fn_82365BD8(&sp, ctx);
        r = sp.p->vt->f14(sp.p, &a, &b);
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
        return r;
    }
    return 0;
}
