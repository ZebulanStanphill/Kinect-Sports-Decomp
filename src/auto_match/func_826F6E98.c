typedef struct { int id; unsigned char type; } Msg;
typedef struct Item Item;
typedef struct {
    void *f0, *f4, *f8;
    void (*fc)(Item *self, int id, Msg *m);
    void *f10, *f14;
    void (*f18)(Item *self, int id, Msg *m);
} ItemVtbl;
struct Item { ItemVtbl *vt; };
typedef struct Mgr Mgr;
typedef struct {
    void *f0, *f4, *f8;
    Item *(*get)(Mgr *self, int kind);
} MgrVtbl;
struct Mgr { MgrVtbl *vt; };
typedef struct { int pad[2]; Mgr mgr; } Sys;
typedef struct {
    char pad[0x100];
    Sys *sys;
    char pad104[0x9e4 - 0x104];
    int id;
} Obj;

extern void fn_8267C4F0(Item *p);

void fn_826F6E98(Obj *o)
{
    Msg m;
    Item *a;
    Item *b;
    Item *c;

    m.id = o->id;
    m.type = 8;
    a = o->sys->mgr.vt->get(&o->sys->mgr, 0x1c);
    if (a != 0) {
        a->vt->fc(a, o->id, &m);
    }
    b = o->sys->mgr.vt->get(&o->sys->mgr, 0x22);
    if (b != 0) {
        b->vt->fc(b, o->id, &m);
    }
    c = o->sys->mgr.vt->get(&o->sys->mgr, 0x23);
    if (c != 0) {
        c->vt->f18(c, o->id, &m);
        fn_8267C4F0(c);
    }
    if (b != 0) {
        fn_8267C4F0(b);
    }
    if (a != 0) {
        fn_8267C4F0(a);
    }
}
