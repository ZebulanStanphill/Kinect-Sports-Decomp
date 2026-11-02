typedef struct Ref_82B479B0 {
    int pad0;
    int pad1;
    int pad2;
    int len;
    unsigned cnt;
} Ref_82B479B0;

typedef struct List_82B479B0 {
    char pad[0x18];
    unsigned tail;
} List_82B479B0;

typedef struct Ctx_82B479B0 {
    char pad[0x234];
    List_82B479B0 *list;
} Ctx_82B479B0;

typedef struct Word_82B479B0 {
    unsigned hi : 4;
    unsigned kind : 3;
    unsigned lo : 25;
} Word_82B479B0;

typedef struct Link_82B479B0 {
    unsigned prev;
    unsigned next;
} Link_82B479B0;

typedef struct Obj_82B479B0 {
    char pad0[8];
    struct {
        unsigned top : 15;
        unsigned kind : 3;
        unsigned low : 14;
    } f;
    char pad1[0x18];
    Link_82B479B0 link;
    Word_82B479B0 *x;
    void *y;
} Obj_82B479B0;

extern Obj_82B479B0 *fn_82B841E8(Ctx_82B479B0 *c, List_82B479B0 *l, int a, int b, int c2, int d);
extern Ref_82B479B0 *fn_82ACA920(Ctx_82B479B0 *c, Ref_82B479B0 *r, int n);
extern void *fn_82AD1978(Obj_82B479B0 *o, Ref_82B479B0 *r);

Obj_82B479B0 *fn_82B479B0(Ctx_82B479B0 *c, Ref_82B479B0 *r1, Ref_82B479B0 *r2)
{
    Obj_82B479B0 *o;
    Ref_82B479B0 *a;
    unsigned *tail;
    Link_82B479B0 *q;
    o = fn_82B841E8(c, c->list, 0, 1, 2, 4);
    a = r1;
    if (r1->cnt != 0) {
        a = fn_82ACA920(c, r1, r1->len);
    }
    o->x = fn_82AD1978(o, a);
    if (r2->cnt != 0) {
        a = fn_82ACA920(c, r2, r2->len);
    } else {
        a = r2;
    }
    o->y = fn_82AD1978(o, a);
    o->f.kind = o->x->kind ? o->x->kind : 0;
    tail = &c->list->tail;
    q = (Link_82B479B0 *)(((unsigned)o & ~1u) + 0x24);
    q->prev = *tail;
    *(unsigned *)(*tail & ~1u) = (unsigned)q - 0x24;
    q->next = ((unsigned)tail - 0x24) | 1;
    *tail = (unsigned)&q->next;
    return o;
}
