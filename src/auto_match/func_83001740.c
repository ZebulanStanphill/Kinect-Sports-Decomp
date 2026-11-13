typedef struct Pair_83001740 {
    unsigned int key;
    void *value;
} Pair_83001740;

typedef struct Map_83001740 {
    Pair_83001740 *begin;
    Pair_83001740 *end;
} Map_83001740;

typedef struct Owner_83001740 {
    char pad0[0x3c];
    unsigned char slot;
} Owner_83001740;

typedef struct Obj_83001740 {
    char pad0[0x24];
    Owner_83001740 *owner;      /* 0x24 */
    char pad28[0x54 - 0x28];
    Map_83001740 *children;     /* 0x54 */
} Obj_83001740;

extern void *lbl_832642EC;
extern void fn_8301B058(void *mgr, Obj_83001740 *o);
extern void fn_83004B48(Obj_83001740 *o, void *target, int slot, int a, int b);

static __inline int Found(Map_83001740 *m, Pair_83001740 *p) { return p != m->end; }
static __inline void **Get(Map_83001740 *m, Pair_83001740 *p) { return Found(m, p) ? &p->value : 0; }

void fn_83001740(Obj_83001740 *o, unsigned int key, int a, int b)
{
    void *target;

    if (key != 0) {
        Map_83001740 *m = o->children;
        Pair_83001740 *e;
        void **v;
        if (m == 0) {
            return;
        }
        for (e = m->begin; e != m->end && e->key != key; e++) {
        }
        v = Get(m, e);
        if (v == 0) {
            return;
        }
        target = *v;
    } else {
        if (o->owner == 0 || o->owner->slot == 0xff) {
            return;
        }
        fn_8301B058(lbl_832642EC, o);
        target = o->owner;
    }
    if (target != 0) {
        fn_83004B48(o, target, 0xff, a, b);
    }
}
