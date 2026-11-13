typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Table_822C5BC8 {
    int *entries;
} Table_822C5BC8;

typedef struct Source_822C5BC8 {
    char pad0[0x2c];
    int f2c;
    char pad30[0x50];
    __vector4 v80;
    char pad90[0x84];
    int f114;
} Source_822C5BC8;

typedef struct Owner_822C5BC8 {
    char pad0[8];
    Table_822C5BC8 *table;
} Owner_822C5BC8;

typedef struct Sub_822C5BC8 {
    __vector4 v;
    int entry;
    int f24;
    float f28;
    int f2c;
    int f30;
    unsigned char b34;
    unsigned char b35;
} Sub_822C5BC8;

typedef struct Obj_822C5BC8 {
    void *vt;
    int f4;
    int f8;
    Source_822C5BC8 *src;
    Owner_822C5BC8 *owner;
    Sub_822C5BC8 sub;
} Obj_822C5BC8;

typedef struct Block_822C5BC8 {
    void *vt;
    int uses;
    int weaks;
    Obj_822C5BC8 obj;
} Block_822C5BC8;

typedef struct Ptr_822C5BC8 {
    Obj_822C5BC8 *obj;
    Block_822C5BC8 *blk;
} Ptr_822C5BC8;

extern void *fn_8265C9E0(unsigned int size);
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AF3D0;

Ptr_822C5BC8 *fn_822C5BC8(Ptr_822C5BC8 *out, Source_822C5BC8 *src, Owner_822C5BC8 *owner, int *a, int b, int *c)
{
    Block_822C5BC8 *p;
    Obj_822C5BC8 *o;

    p = (Block_822C5BC8 *)fn_8265C9E0(0x60);
    if (p != 0) {
        p->uses = 1;
        p->vt = &lbl_821A8D8C;
        p->weaks = 1;
        o = &p->obj;
        if (o != 0) {
            int va = *a;
            int f114 = src->f114;
            int vc = *c;
            Sub_822C5BC8 *s = &o->sub;
            int e;
            o->src = src;
            o->owner = owner;
            o->f4 = va;
            o->f8 = f114;
            o->vt = &lbl_821AF3D0;
            s->v = src->v80;
            e = owner->table->entries[src->f2c == 0];
            s->f28 = 0.0f;
            s->f24 = b;
            s->f2c = 0;
            s->f30 = vc;
            s->b34 = 0;
            s->entry = e;
            s->b35 = 0;
        }
    } else {
        p = 0;
    }
    out->blk = p;
    out->obj = &p->obj;
    return out;
}
