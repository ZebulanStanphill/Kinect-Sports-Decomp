typedef struct Sys_82251C00 Sys_82251C00;

typedef struct SysVtbl_82251C00 {
    void *slots[5];
    void (*Update)(Sys_82251C00 *self, void *ctx, int flags);
} SysVtbl_82251C00;

struct Sys_82251C00 {
    SysVtbl_82251C00 *vt;
};

typedef struct Owner_82251C00 {
    char pad0[0x68];
    Sys_82251C00 *a;
    int pad6c;
    Sys_82251C00 *b;
    int pad74;
    Sys_82251C00 *c;
    int pad7c;
    Sys_82251C00 *d;
} Owner_82251C00;

extern int fn_828E9D90(void *ctx);
extern void fn_828E9D60(void *ctx, int start);

int fn_82251C00(Owner_82251C00 *o, void *ctx)
{
    int start;
    int elapsed;

    start = fn_828E9D90(ctx);
    o->a->vt->Update(o->a, ctx, 0);
    o->b->vt->Update(o->b, ctx, 0);
    o->c->vt->Update(o->c, ctx, 0);
    o->d->vt->Update(o->d, ctx, 0);
    elapsed = fn_828E9D90(ctx) - start;
    fn_828E9D60(ctx, start);
    return elapsed;
}
