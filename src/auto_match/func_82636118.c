typedef struct Item { int a, b; } Item;
typedef struct Ent { char pad0[0x5c]; int valid; char pad1[0x18]; Item *items; char pad2[0x26d0 - 0x7c]; } Ent;
typedef struct Mgr { int cur; Ent e[2]; } Mgr;

Item *fn_82636118(Mgr *m, int i)
{
    Ent *e = &m->e[m->cur];
    if (e->valid < 0) {
        return 0;
    }
    return e->items + i;
}
