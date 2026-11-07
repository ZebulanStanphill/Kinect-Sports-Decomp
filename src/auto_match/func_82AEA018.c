typedef struct Data_82AEA018 {
    unsigned char bytes[0x34];
} Data_82AEA018;

typedef struct Obj_82AEA018 {
    unsigned int head;
    Data_82AEA018 data;
} Obj_82AEA018;

typedef struct Cont_82AEA018 {
    unsigned int pad0;
    unsigned int head;
} Cont_82AEA018;

typedef struct Node_82AEA018 {
    unsigned char pad0[0x14];
    unsigned int key;
    unsigned char pad18[0xC];
    unsigned int link24;
    unsigned int link28;
} Node_82AEA018;

extern void fn_82AE9DE0(Data_82AEA018 *d, unsigned int node);

static int notNull_82AEA018(Node_82AEA018 *p)
{
    if (p)
        return 1;
    return 0;
}

void fn_82AEA018(Obj_82AEA018 *o, Obj_82AEA018 *src, Cont_82AEA018 *c, unsigned int n)
{
    unsigned int cur;
    unsigned int v;

    o->data = src->data;
    cur = n;
    for (;;) {
        unsigned int link = ((Node_82AEA018 *)(cur & ~1u))->link24;
        Node_82AEA018 *m;
        if (link & 1)
            m = 0;
        else
            m = (Node_82AEA018 *)((link & ~1u) - 0x28);
        if (!notNull_82AEA018(m))
            break;
        if ((m->key ^ ((Node_82AEA018 *)cur)->key) & 0x1fff)
            break;
        cur = (unsigned int)m;
    }
    o->head = cur;
    v = c->head;
    v = (v & 1) ? 0 : v;
    while (v != o->head) {
        fn_82AE9DE0(&o->data, v);
        v = ((Node_82AEA018 *)(v & ~1u))->link28;
        v = (v & 1) ? 0 : v;
    }
}
