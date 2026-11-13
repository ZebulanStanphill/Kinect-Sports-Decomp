extern void fn_824C97F0(int, const char *);

typedef struct Iface_82364760 Iface_82364760;
typedef struct IfaceVt_82364760 {
    int pad[8];
    void (*f20)(Iface_82364760 *);
} IfaceVt_82364760;
struct Iface_82364760 {
    IfaceVt_82364760 *vt;
};
typedef struct Ent_82364760 {
    char pad[0x28];
    int m28;
} Ent_82364760;
typedef struct Slot_82364760 {
    Ent_82364760 *ent;
    int x;
} Slot_82364760;
typedef struct Vec_82364760 {
    Slot_82364760 *begin;
    Slot_82364760 *end;
} Vec_82364760;
typedef struct A_82364760 {
    char pad0[0xa8];
    Vec_82364760 *vec;
    char pad1[0x3ec - 0xac];
    Iface_82364760 *iface;
} A_82364760;
typedef struct B_82364760 {
    char pad[0x2c];
    int m2c;
} B_82364760;

void fn_82364760(A_82364760 *a, B_82364760 *b)
{
    const char *name;
    Slot_82364760 *p;
    Slot_82364760 *e;

    a->iface->vt->f20(a->iface);
    if (b->m2c == 0) {
        name = "Player1Recover";
    } else {
        name = "Player2Recover";
    }
    p = a->vec->begin;
    e = a->vec->end;
    for (; p != e; p++) {
        fn_824C97F0(p->ent->m28, name);
    }
}
