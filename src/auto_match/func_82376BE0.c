struct Obj_82376BE0;
typedef struct VT1_82376BE0 { void (*f0)(void *self, int flag); } VT1_82376BE0;
typedef struct Del1_82376BE0 { VT1_82376BE0 *vt; } Del1_82376BE0;
typedef struct VT2_82376BE0 { int pad[3]; void (*fc)(void *self, int flag); } VT2_82376BE0;
typedef struct Del2_82376BE0 { VT2_82376BE0 *vt; } Del2_82376BE0;
typedef struct Ctx_82376BE0 { char pad[0x93c]; int f93c; } Ctx_82376BE0;
typedef struct Mid_82376BE0 { char pad[0x4c]; Ctx_82376BE0 *f4c; } Mid_82376BE0;
typedef struct Sub_82376BE0 { char pad[0x10]; Del2_82376BE0 *obj; } Sub_82376BE0;
typedef struct Obj_82376BE0 {
    Mid_82376BE0 *f0;
    char pad4[0x1d0 - 4];
    unsigned slots[3];
    char pad1dc[0x20d0 - 0x1dc];
    Del1_82376BE0 *f20d0;
    char pad20d4[0x2150 - 0x20d4];
    Sub_82376BE0 sub2150;
} Obj_82376BE0;
extern void fn_82575DF0(int a, int b);
extern void fn_82529320(void *p, int a);
extern void fn_8265CA20(void *p);

Obj_82376BE0 *fn_82376BE0(Obj_82376BE0 *p, unsigned flags)
{
    unsigned *sp;
    int n;
    Del2_82376BE0 *d2;
    Sub_82376BE0 *sub;

    sp = p->slots;
    n = 3;
    do {
        if (*sp != 0) {
            fn_82575DF0(p->f0->f4c->f93c, *sp);
            *sp = 0;
        }
        n--;
        sp++;
    } while (n != 0);
    if (p->f0 != 0) {
        fn_82529320(p->f0, 0);
        p->f0 = 0;
    }
    if (p->f20d0 != 0)
        p->f20d0->vt->f0(p->f20d0, 1);
    p->f20d0 = 0;
    sub = &p->sub2150;
    d2 = sub->obj;
    if (d2 != 0) {
        d2->vt->fc(d2, (char *)d2 != (char *)sub);
        sub->obj = 0;
    }
    if (flags & 1)
        fn_8265CA20(p);
    return p;
}
