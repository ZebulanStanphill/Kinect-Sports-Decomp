typedef struct Ctx {
    char pad0[0x598];
    int counter;
    char pad59c[0x10];
    void *heap;
} Ctx;

typedef struct Ref {
    Ctx *ctx;
    int value;
} Ref;

typedef struct List {
    int v[4];
} List;

typedef struct Obj {
    void *vtbl;
    unsigned char b4;
    unsigned char b5;
    char pad6[2];
    int id;
    int arg1;
    int m10;
    int m14;
    int m18;
    unsigned char b1c;
    unsigned char b1d;
    char pad1e[2];
    int arg2;
    List *list1;
    List *list2;
    Ref *ref;
} Obj;

extern void **fn_82B7BD28(void *heap, unsigned int size);
extern void fn_82BA03B8(List *l, void *heap);
extern char lbl_820E3564[];

static void *HeapNew(void *heap, unsigned int size)
{
    void **p = fn_82B7BD28(heap, size + 4);
    *p = heap;
    return p + 1;
}

Obj *fn_82BC0928(Obj *o, int arg1, int arg2, Ctx *ctx)
{
    Ref *ref;
    List *l;
    List *m;
    o->arg1 = arg1;
    o->arg2 = arg2;
    o->b4 = 0;
    o->vtbl = lbl_820E3564;
    o->b5 = 0;
    o->m10 = -1;
    o->m14 = 0;
    o->m18 = 0;
    o->b1c = 0;
    o->b1d = 0;
    ref = (Ref *)HeapNew(ctx->heap, sizeof(Ref));
    if (ref != 0) {
        ref->ctx = ctx;
        ref->value = 0;
    } else {
        ref = 0;
    }
    o->ref = ref;
    l = (List *)HeapNew(ctx->heap, sizeof(List));
    if (l != 0) {
        fn_82BA03B8(l, ctx->heap);
    } else {
        l = 0;
    }
    o->list1 = l;
    m = (List *)HeapNew(ctx->heap, sizeof(List));
    l = 0;
    if (m != 0) {
        fn_82BA03B8(m, ctx->heap);
        l = m;
    }
    o->list2 = l;
    o->id = ctx->counter;
    ctx->counter++;
    return o;
}
