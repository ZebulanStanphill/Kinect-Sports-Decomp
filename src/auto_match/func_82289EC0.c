typedef struct Blob {
    unsigned char b[0x24];
} Blob;

typedef struct VObj VObj;
typedef struct VObjVtbl {
    void *pad[25];
    int (*f64)(VObj *o);
} VObjVtbl;
struct VObj {
    VObjVtbl *vt;
};

typedef struct Game {
    char pad[0x8c0];
    VObj *f8c0;
    int f8c4;
    int f8c8;
} Game;

typedef struct Mgr {
    char pad[0x18b8];
    int f18b8;
} Mgr;

typedef struct Slot {
    int state;
    char pad[0x18];
    int f1c;
    char pad2[0x20];
} Slot;

typedef struct Obj {
    char pad0[0x604];
    int f604;
    char pad1[0x6a0 - 0x608];
    int idx;
    int pad6a4;
    Slot slots[2];
    char pad2[0x768 - 0x728];
    int f768;
    char pad3[0x11f0 - 0x76c];
    Mgr *mgr;
} Obj;

typedef struct Entry {
    Blob data;
    int valid;
} Entry;

typedef struct Info {
    char pad[0x12c];
    Entry ents[4];
} Info;

typedef struct Param {
    Game *g;
    int x4;
    Obj *o;
    Blob *pc;
} Param;

extern Info *fn_8225F160(void);
extern void fn_822883D0(Obj *o, int idx, Game *g);
extern void fn_82289670(Obj *o, int idx);
extern void fn_8228ABB8(Obj *o, int idx, int r, int *a, int *b);
extern void fn_82484998(Mgr *m, int x);
extern int fn_82486958(Mgr *m);

static void call(Obj *o, int idx, int r, int a, int b)
{
    int t[2];
    t[0] = a;
    t[1] = b;
    fn_8228ABB8(o, idx, r, &t[0], &t[1]);
}

void fn_82289EC0(Param *p)
{
    int x4;
    int r;
    Obj *o;
    Blob *src;
    Info *info;
    int idx;

    x4 = p->x4;
    r = p->g->f8c0->vt->f64(p->g->f8c0);
    o = p->o;
    fn_82289670(o, o->idx);
    o->slots[o->idx].state = 2;
    o->slots[o->idx].f1c = x4;
    if (o->mgr->f18b8 == 1 && o->idx == 2) {
        o->f768 = 4;
    }
    call(o, o->idx, r, p->g->f8c4, p->g->f8c8);
    fn_822883D0(o, o->idx, p->g);
    fn_82484998(o->mgr, x4);
    if (p->pc != 0) {
        if (o->mgr->f18b8 == 1 && o->idx == 2 && fn_82486958(o->mgr) == 3) {
            src = p->pc;
            info = fn_8225F160();
            info->ents[1].data = *src;
            info->ents[1].valid = 1;
        }
        src = p->pc;
        idx = o->idx;
        info = fn_8225F160();
        info->ents[idx].data = *src;
        info->ents[idx].valid = 1;
    }
    o->f604 = 1;
}
