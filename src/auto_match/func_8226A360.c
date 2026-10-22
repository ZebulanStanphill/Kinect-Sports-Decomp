typedef struct Thing {
    char pad[0xd8];
    unsigned char flag;
} Thing;

typedef int (*FilterFn)(Thing *t);

typedef struct Mgr {
    char pad[0x354];
    Thing *slots[4];
    char pad2[0x374 - 0x364];
    FilterFn filter;
} Mgr;

typedef struct Owner {
    int pad;
    Mgr *mgr;
} Owner;

extern void *fn_8225C590(void);
extern Thing *fn_8225D9B8(void *a, void *b);
extern void fn_82526358(Thing *t, int a, int b);
extern void fn_82269338(Mgr *m, Thing *t);

void fn_8226A360(Owner *o, void *arg)
{
    Mgr *m = o->mgr;
    Thing *t;
    int i;
    int ok;

    t = fn_8225D9B8(fn_8225C590(), arg);
    if (t == 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        if (m->slots[i] == t) {
            return;
        }
    }
    if (t->flag == 0) {
        fn_82526358(t, 0x8001, 3);
    }
    ok = m->filter ? m->filter(t) : 1;
    if (ok) {
        fn_82269338(m, t);
    }
}
