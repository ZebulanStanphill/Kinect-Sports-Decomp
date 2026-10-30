typedef struct Child_822C4FF8 Child_822C4FF8;
typedef struct { void *f0; void *f1; void (*f2)(Child_822C4FF8 *); } ChildVT_822C4FF8;
struct Child_822C4FF8 { ChildVT_822C4FF8 *vt; };

typedef struct Tgt_822C4FF8 Tgt_822C4FF8;
typedef struct {
    void *f[9];
    void (*f9)(Tgt_822C4FF8 *, int);
} TgtVT_822C4FF8;
typedef struct { char pad[0x90]; int v; } Sub_822C4FF8;
typedef struct { char pad[0x8c0]; Sub_822C4FF8 *sub; } Ctx_822C4FF8;
struct Tgt_822C4FF8 {
    TgtVT_822C4FF8 *vt;
    int pad0[4];
    Ctx_822C4FF8 *ctx;
    int pad1[3];
    Child_822C4FF8 *w24;
};
typedef struct {
    int pad0;
    Tgt_822C4FF8 *cur;
    Child_822C4FF8 *child;
    int flag;
} Obj_822C4FF8;

int fn_822C4FF8(Obj_822C4FF8 *o, Tgt_822C4FF8 *t)
{
    if (t->w24 == o->child || o->flag != 0) {
        if (t == o->cur && o->flag == 0) {
            return 0;
        }
        if (o->child != 0) {
            o->child->vt->f2(o->child);
        }
        if (t->w24 != 0) {
            t->w24 = 0;
            *(int *)((char *)t->ctx->sub + 0x90) = 0;
            t->vt->f9(t, 0);
        }
    }
    return 1;
}
