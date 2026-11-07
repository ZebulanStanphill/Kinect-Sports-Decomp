typedef struct Obj_822359F8 Obj_822359F8;

typedef struct Vtbl_822359F8 {
    void *pad[5];
    void (*f14)(Obj_822359F8 *self, int arg, int flag);
} Vtbl_822359F8;

struct Obj_822359F8 {
    Vtbl_822359F8 *vt;
};

typedef struct Owner_822359F8 {
    char pad0[0x68];
    Obj_822359F8 *a;
    int pad6c;
    Obj_822359F8 *b;
    int pad74;
    Obj_822359F8 *c;
} Owner_822359F8;

extern void fn_828E9D60(int ctx, int start);
extern int fn_828E9D90(int ctx);

int fn_822359F8(Owner_822359F8 *self, int ctx)
{
    int start;
    int diff;
    Obj_822359F8 *o;

    start = fn_828E9D90(ctx);
    o = self->a;
    o->vt->f14(o, ctx, 0);
    o = self->b;
    o->vt->f14(o, ctx, 0);
    o = self->c;
    o->vt->f14(o, ctx, 0);
    diff = fn_828E9D90(ctx) - start;
    fn_828E9D60(ctx, start);
    return diff;
}
