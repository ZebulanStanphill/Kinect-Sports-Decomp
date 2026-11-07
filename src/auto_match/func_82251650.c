typedef int (*VFunc_82251650)(void *self, int a, int b);

typedef struct Vtbl_82251650 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void *slot4;
    VFunc_82251650 f14;
} Vtbl_82251650;

typedef struct Obj_82251650 {
    Vtbl_82251650 *vt;
} Obj_82251650;

typedef struct Self_82251650 {
    char pad[0x68];
    Obj_82251650 *a68;
    int pad6c;
    Obj_82251650 *a70;
} Self_82251650;

extern void fn_828E9D60(int ctx, int t);
extern int fn_828E9D90(int ctx);

int fn_82251650(Self_82251650 *self, int ctx)
{
    int start;
    int diff;

    start = fn_828E9D90(ctx);
    self->a68->vt->f14(self->a68, ctx, 0);
    self->a70->vt->f14(self->a70, ctx, 0);
    diff = fn_828E9D90(ctx) - start;
    fn_828E9D60(ctx, start);
    return diff;
}
