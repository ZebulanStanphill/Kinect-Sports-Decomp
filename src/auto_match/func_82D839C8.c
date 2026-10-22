typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *, int);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct Node {
    char pad[0x48];
    void **items;
    int count;
} Node;

typedef struct Vec {
    Node **data;
    int size;
} Vec;

typedef struct Ctx {
    char pad0[0x20];
    Node *root;
    void *cur;
    Vec stack;
    char pad30[4];
    Vec vec34;
    char pad3c[200 - 0x3c];
    char flag;
    char padc9[0x114 - 0xc9];
    void **pending;
    int npending;
} Ctx;

extern void fn_82CE4040(void *);
extern void fn_82CE4118(void *);
extern void fn_82D81078(Ctx *, void *, int);
extern void fn_82D81240(void *, Ctx *, void *);
extern void fn_82D82E28(Ctx *, void *);
extern void fn_82D8ED60(Ctx *, void *);
extern void fn_82DAE478(Ctx *);

void fn_82D839C8(Ctx *p)
{
    Vec *st = &p->stack;
    Obj *o;
    char tmp[8];

    while (p->npending > 0) {
        fn_82D82E28(p, *p->pending);
    }
    while (st->size > 0 && st->data[0]->count != 0) {
        fn_82D81240(tmp, p, *st->data[0]->items);
    }
    while (p->vec34.size > 0) {
        fn_82D81240(tmp, p, *p->vec34.data[0]->items);
    }
    fn_82CE4040(p->cur);
    fn_82D81240(tmp, p, p->cur);
    while (p->root->count > 0) {
        fn_82D81240(tmp, p, *p->root->items);
    }
    fn_82D81078(p, p->cur, 1);
    fn_82CE4118(p->cur);
    if (p->flag == 0) {
        fn_82D8ED60(p, st->data[st->size - 1]);
        o = (Obj *)st->data[st->size - 1];
        if (o != 0) {
            o->vt->dtor(o, 1);
        }
        st->size--;
    }
    fn_82DAE478(p);
}
