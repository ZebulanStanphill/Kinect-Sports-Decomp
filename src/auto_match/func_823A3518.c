typedef struct List {
    int pad0[2];
    unsigned int count;
} List;
typedef struct Item {
    List **lists;
    int pad4[3];
    int cur;
} Item;
typedef struct Vec {
    Item **begin;
    Item **end;
} Vec;
typedef struct Sub90 {
    char pad[0x510];
    int m510;
} Sub90;
typedef struct Mgr {
    int pad0[2];
    Vec *items;
    char pad1[0x90 - 0xc];
    Sub90 *m90;
} Mgr;
typedef struct Elem {
    char pad0[0x24];
    int active;
    char pad1[0x20c - 0x28];
    int r20c;
    int r210;
    char pad2[0x278 - 0x214];
    int m278;
} Elem;
typedef struct Self {
    int pad0[2];
    Mgr *mgr;
} Self;

extern void fn_823985A8(Mgr *);
extern void fn_82397BA8(Mgr *);
extern Elem *fn_822ABA88(List *, unsigned int);
extern void fn_822E6008(Elem *, int);

static int vec_size(Vec *v)
{
    return v->end - v->begin;
}

void fn_823A3518(Self *self)
{
    int i;
    unsigned int j;
    Mgr *mgr;
    Item *item;
    Elem *e;

    fn_823985A8(self->mgr);
    fn_82397BA8(self->mgr);
    mgr = self->mgr;
    for (i = 0; i < vec_size(mgr->items); i++) {
        item = mgr->items->begin[i];
        for (j = 0; j < item->lists[item->cur]->count; j++) {
            e = fn_822ABA88(item->lists[item->cur], j);
            if (e->active != 0) {
                fn_822E6008(e, e->r20c);
                e->r20c = 0;
                fn_822E6008(e, e->r210);
                e->r210 = 0;
                e->m278 = 0;
            }
        }
    }
    self->mgr->m90->m510 = 0;
}
