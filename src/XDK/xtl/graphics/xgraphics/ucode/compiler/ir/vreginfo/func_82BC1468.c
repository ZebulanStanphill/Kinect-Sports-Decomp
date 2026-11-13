typedef struct Iface Iface;
typedef struct IfaceVtbl {
    void *f[10];
    void (*fn28)(Iface *self, void *obj);
} IfaceVtbl;
struct Iface { IfaceVtbl *vtbl; };

typedef struct Mgr {
    char pad0[0xa4];
    Iface *iface;
    char padA8[0xb8 - 0xa8];
    char sub;
} Mgr;

typedef struct Ctx {
    char pad0[0x564];
    char flag;
    char pad565[0x5ac - 0x565];
    int heap;
    char pad5b0[0xab0 - 0x5b0];
    Mgr *mgr;
} Ctx;

typedef struct Obj {
    void *vtbl;
    char b4;
    unsigned char b5;
    char pad6[2];
    int f8;
    int fc;
    int f10;
    int pad14[3];
    int f20;
    int pad24[3];
    int f30;
    int f34;
    int f38;
    int f3c;
} Obj;

extern void fn_82BC0928(Obj *o, int a, int b, Ctx *c);
extern int fn_82BBC0A8(void *a, int b, int c, Obj *o);
extern int *fn_82B7BD28(int heap, int size);
extern void *fn_82BC3A98(void *mem, Ctx *c);
extern void fn_82BC2958(void *a, int b, Obj *o);
extern void fn_82BC0A30(Obj *o, void *a);
extern char lbl_820E348C;

Obj *fn_82BC1468(Obj *o, int a, int b, Ctx *c)
{
    void *child;
    int heap;
    int *mem;

    fn_82BC0928(o, a, b, c);
    o->f30 = 0;
    o->vtbl = &lbl_820E348C;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f10 = fn_82BBC0A8(&c->mgr->sub, o->f20, o->fc, o);
    o->b5 = 1;
    if (c->flag == 0) {
        heap = c->heap;
        mem = fn_82B7BD28(heap, 0x3c4);
        *mem = heap;
        child = mem + 1 ? fn_82BC3A98(mem + 1, c) : 0;
        c->mgr->iface->vtbl->fn28(c->mgr->iface, child);
        fn_82BC2958(child, 0, o);
        fn_82BC0A30(o, child);
    }
    return o;
}
