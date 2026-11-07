typedef struct Node_82AC8CE8 {
    int f0;
    struct Node_82AC8CE8 *next;
    int f8;
    int fc;
} Node_82AC8CE8;

typedef struct List_82AC8CE8 {
    Node_82AC8CE8 *head;
} List_82AC8CE8;

typedef struct Obj_82AC8CE8 {
    int f0;
    List_82AC8CE8 *slots[9];
    int f28;
    int f2c;
    int f30;
} Obj_82AC8CE8;

extern unsigned char fn_82AC88B8(Obj_82AC8CE8 *o, List_82AC8CE8 *l);
extern void fn_82AC8C90(Obj_82AC8CE8 *o, Node_82AC8CE8 *n, List_82AC8CE8 *l, int v);

static __forceinline int notNull_82AC8CE8(Node_82AC8CE8 *p)
{
    if (p)
        return 1;
    return 0;
}

static __forceinline int below_82AC8CE8(unsigned int i, unsigned int n)
{
    if (i < n)
        return 1;
    return 0;
}

void fn_82AC8CE8(Obj_82AC8CE8 *o, List_82AC8CE8 *l)
{
    unsigned int i;
    List_82AC8CE8 **p;
    Node_82AC8CE8 *n;

    i = 0;
    p = o->slots;
    do {
        if (l == *p) {
            *p = 0;
        }
        i++;
        p++;
    } while (below_82AC8CE8(i, 9));
    if (fn_82AC88B8(o, l)) {
        o->f30 = 0;
    }
    for (n = l->head; notNull_82AC8CE8(n); n = n->next) {
        fn_82AC8C90(o, n, l, n->fc);
    }
}
