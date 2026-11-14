typedef struct Params_82580C28 {
    int f00;
    int pad04[6];
    int size;                   /* 0x1c */
    void *arg;                  /* 0x20 */
    int pad24;
    void *cb1;                  /* 0x28 */
    void *cb2;                  /* 0x2c */
    void *context;              /* 0x30 */
} Params_82580C28;

struct Ptr_82580C28 {
    void *p;
};

typedef struct Obj_82580C28 {
    void *vt;
    Ptr_82580C28 handle;        /* 0x4 */
    void *owner;                /* 0x8 */
    int fc;                     /* 0xc */
} Obj_82580C28;

typedef struct Self_82580C28 {
    int pad0[2];
    void *owner;                /* 0x8 */
} Self_82580C28;

struct Heap_82580C28;
typedef struct HeapVtbl_82580C28 {
    void *pad0;
    void *(*alloc)(Heap_82580C28 *self, int size, void *tag, void *owner);
} HeapVtbl_82580C28;
struct Heap_82580C28 {
    HeapVtbl_82580C28 *vt;
};

extern "C" void fn_827DDB88(void);
extern "C" void fn_827DDBF8(void);
extern "C" void fn_82811438(void *buf, int *a, int n);
extern "C" int fn_82BFE230(Params_82580C28 *params, Ptr_82580C28 *handle);
extern "C" char lbl_821C55F8[];
extern "C" Heap_82580C28 *lbl_83156AA0;

static Obj_82580C28 *ctor(Obj_82580C28 *o, void *owner)
{
    o->vt = lbl_821C55F8;
    Ptr_82580C28 *h = &o->handle;
    h->p = 0;
    o->owner = owner;
    Params_82580C28 p = {};
    p.context = owner;
    o->fc = 0;
    p.cb1 = (void *)fn_827DDB88;
    p.cb2 = (void *)fn_827DDBF8;
    p.size = sizeof(p);
    fn_82BFE230(&p, h);
    return o;
}

extern "C" Obj_82580C28 *fn_82580C28(Self_82580C28 *self)
{
    Obj_82580C28 *o;
    int a0;
    char tag[32];

    a0 = 0;
    fn_82811438(tag, &a0, 0x10);
    o = (Obj_82580C28 *)lbl_83156AA0->vt->alloc(lbl_83156AA0, 0x10, tag, self->owner);
    return o ? ctor(o, self->owner) : 0;
}
