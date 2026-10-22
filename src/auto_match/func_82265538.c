extern void fn_822315A0(void *p);
extern void fn_82522ED8(void *p);
extern void fn_82529320(void *p, int a);
extern void fn_82672C20(int h, int id, int a, int b);
extern void fn_82A1C0F0(void *p);
extern int lbl_831CEF4C[];

typedef struct Link {
    struct Link *next;
    struct Link *prev;
} Link;

typedef struct Slot {
    int a;
    int b;
    int c;
    char pad[0x234 - 0xc];
} Slot;

typedef struct Mgr {
    int handle;
    char pad[0x20];
    Slot slots[1];
} Mgr;

typedef struct Obj {
    char pad0[0xdc];
    void *xdc;
    void *xe0;
    void *xe4;
    char pad1[0x104 - 0xe8];
    unsigned int state;
    char pad2[0x508 - 0x108];
    void *x508;
    char pad3[0x51c - 0x50c];
    int active;
    Mgr *mgr;
    char pad4[0x528 - 0x524];
    void *x528;
    char pad5[0x540 - 0x52c];
    int idx;
    char pad6[0x628 - 0x544];
    Link *link;
} Obj;

void fn_82265538(Obj *o)
{
    Link *l;
    Mgr *m;
    int idx;

    if (o->state == 0x3e5) {
        fn_82A1C0F0(&o->state);
    }
    l = o->link;
    if (l != 0) {
        if (l->next != 0) {
            l->next->prev = l->prev;
        }
        if (l->prev != 0) {
            l->prev->next = l->next;
        }
        l->next = 0;
        l->prev = 0;
        fn_82522ED8(l);
        o->link = 0;
    }
    m = o->mgr;
    if (m != 0) {
        if (o->active != 0) {
            idx = o->idx;
            fn_82672C20(m->handle, lbl_831CEF4C[idx], 0, 0);
            m->slots[idx].b = 0;
            m->slots[idx].c = 0;
            o->mgr->slots[o->idx].a = 0;
        }
        o->mgr = 0;
    }
    if (o->xdc != 0) {
        fn_82529320(o->xdc, 0);
        o->xdc = 0;
    }
    if (o->xe4 != 0) {
        fn_82529320(o->xe4, 0);
        o->xe4 = 0;
    }
    if (o->xe0 != 0) {
        fn_82529320(o->xe0, 0);
        o->xe0 = 0;
    }
    if (o->x508 != 0) {
        fn_82522ED8(o->x508);
        o->x508 = 0;
    }
    if (o->x528 != 0) {
        fn_822315A0(o->x528);
    }
}
