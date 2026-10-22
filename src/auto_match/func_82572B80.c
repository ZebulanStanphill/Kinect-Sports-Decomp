typedef struct ItemA {
    char pad[0x40];
    void *key;
    char pad44[0x60 - 0x44];
} ItemA;

typedef struct ItemB {
    char pad[0x40];
    void *key;
    char pad44[0x50 - 0x44];
} ItemB;

typedef struct VecA {
    ItemA *begin;
    ItemA *end;
    char pad8[8];
    unsigned short n;
} VecA;

typedef struct VecB {
    ItemB *begin;
    ItemB *end;
    char pad8[8];
    unsigned short n;
} VecB;

typedef struct Slot {
    void *key;
    char pad4[0x1c];
    unsigned char active;
    char pad21[0x70 - 0x21];
} Slot;

typedef struct Mgr {
    char pad0[4];
    VecA a0;
    VecA a1;
    VecB b0;
    VecB b1;
    char pad54[0xa0 - 0x54];
    Slot s0;
    Slot s1;
} Mgr;

extern void fn_8251E5A0(void *vec, void *it);

static void ClearA(VecA *v)
{
    v->end = v->begin;
    v->n = 0;
}

static void ClearB(VecB *v)
{
    v->end = v->begin;
    v->n = 0;
}

void fn_82572B80(Mgr *m, void *key)
{
    ItemA *ia;
    ItemA *ea;
    ItemB *ib;
    ItemB *eb;

    if (key == 0) {
        m->s0.active = 0;
        m->s0.key = 0;
        m->s1.active = 0;
        m->s1.key = 0;
        ClearA(&m->a0);
        ClearA(&m->a1);
        ClearB(&m->b0);
        ClearB(&m->b1);
    } else {
        if (m->s0.key != 0 && m->s0.key == key) {
            m->s0.active = 0;
            m->s0.key = 0;
        }
        if (m->s1.key != 0 && m->s1.key == key) {
            m->s1.active = 0;
            m->s1.key = 0;
        }
        ea = m->a0.end;
        for (ia = m->a0.begin; ia < ea; ia++) {
            if (ia->key == key) {
                fn_8251E5A0(&m->a0, ia);
                ia--;
                ea--;
            }
        }
        ea = m->a1.end;
        for (ia = m->a1.begin; ia < ea; ia++) {
            if (ia->key == key) {
                fn_8251E5A0(&m->a1, ia);
                ia--;
                ea--;
            }
        }
        eb = m->b0.end;
        for (ib = m->b0.begin; ib < eb; ib++) {
            if (ib->key == key) {
                fn_8251E5A0(&m->b0, ib);
                ib--;
                eb--;
            }
        }
        eb = m->b1.end;
        for (ib = m->b1.begin; ib < eb; ib++) {
            if (ib->key == key) {
                fn_8251E5A0(&m->b1, ib);
                ib--;
                eb--;
            }
        }
    }
}
