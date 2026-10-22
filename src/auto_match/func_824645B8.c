extern int fn_8252AE68(void *p, int n);
extern int fn_82536690(void *list, void *ent);

typedef struct Ent {
    void *p;
    int x;
} Ent;

typedef struct Mgr {
    char pad0[0xB8];
    char *b8;
    char pad1[0x310 - 0xBC];
    Ent *begin;
    Ent *end;
    char pad2[0x3E4 - 0x318];
    char *p3e4;
    char pad3[0x8C4 - 0x3E8];
    char *p8c4;
} Mgr;

typedef struct Obj {
    char pad0[8];
    Mgr *mgr;
    char pad1[0x1C - 0xC];
    void *a;
    void *c;
    void *b;
    char pad2[0x54 - 0x28];
    char list[4];
} Obj;

void fn_824645B8(Obj *o)
{
    Ent *it = o->mgr->begin;
    Ent *end = o->mgr->end;
    char *p;

    for (; it < end; it++) {
        if (it->p != o->a && it->p != o->b && it->p != o->c && fn_8252AE68(it->p, 1) != 0) {
            fn_82536690(o->list, it);
        }
    }
    p = o->mgr->p3e4;
    if (p != 0) {
        *(int *)(p + 0xb70) = 1;
    }
    *(int *)(o->mgr->p8c4 + 0x2c) = 1;
    *(int *)(o->mgr->b8 + 0x28) = 1;
}
