typedef struct Elem_82744540 {
    unsigned char flag;
    unsigned char pad[15];
} Elem_82744540;

typedef struct Ctx_82744540 {
    unsigned char pad0[0x288];
    void *heap;
} Ctx_82744540;

typedef struct World_82744540 {
    unsigned char pad0[0x78];
    Ctx_82744540 *ctx;
} World_82744540;

typedef struct Obj_82744540 {
    int f0;
    void *f4;
    unsigned char *f8;
    int fC, f10, f14;
    World_82744540 *world;
} Obj_82744540;

extern unsigned char fn_82695468(Obj_82744540 *self, int n);
extern void fn_826954C0(Obj_82744540 *self, const char *name, int a, int b);
extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void *fn_82744378(void *mem, World_82744540 *world);
extern void fn_827437A0(void *a, Ctx_82744540 **ctx, Elem_82744540 *e);
extern void fn_82743808(void *a, Ctx_82744540 **ctx, Elem_82744540 *e);
extern void fn_82696BC8(void *a, void *b);
extern void fn_82696330(Elem_82744540 *e);
extern void fn_826824B0(void *p);
void fn_82744540(Obj_82744540 *self)
{
    void *base;
    void *mem;
    void *p;
    Ctx_82744540 **ctx;
    Elem_82744540 elems[2];
    int i;
    Elem_82744540 *e;

    if (fn_82695468(self, 0x10) == 0) {
        fn_826954C0(self, "Point", 0, 0);
        return;
    }
    base = self->f8 != 0 ? self->f8 - 0x10 : 0;
    mem = fn_8267B890(self->world->ctx->heap, 0x30, 0);
    if (mem != 0) {
        p = fn_82744378(mem, self->world);
    } else {
        p = 0;
    }
    ctx = &self->world->ctx;
    for (i = 0; i < 2; i++) {
        elems[i].flag = 0;
    }
    fn_827437A0(base, ctx, elems);
    fn_82743808(p, ctx, elems);
    fn_82696BC8(self->f4, p);
    e = &elems[2];
    i = 1;
    do {
        e--;
        fn_82696330(e);
        i--;
    } while (i >= 0);
    if (p != 0) {
        fn_826824B0(p);
    }
}
