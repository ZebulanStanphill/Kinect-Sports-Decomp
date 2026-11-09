extern char lbl_8202F0D4[];

typedef struct Node_82933F98 Node_82933F98;

typedef struct {
    void *f0;
    Node_82933F98 *(*clone)(Node_82933F98 *self);
} NodeVtbl_82933F98;

struct Node_82933F98 {
    NodeVtbl_82933F98 *vtbl;
    int type;
    Node_82933F98 *a;
    Node_82933F98 *b;
    int f10;
    int value;
};

extern void **fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, unsigned int align);

static __forceinline Node_82933F98 *ctor_82933F98(Node_82933F98 *n)
{
    n->type = 2;
    n->a = 0;
    n->vtbl = (NodeVtbl_82933F98 *)lbl_8202F0D4;
    n->b = 0;
    n->f10 = 0;
    n->value = 0;
    return n;
}

Node_82933F98 *fn_82933F98(Node_82933F98 *o)
{
    void *mem = fn_829301D0(*fn_82934160(), 0x18, 0x10);
    Node_82933F98 *n = mem != 0 ? ctor_82933F98((Node_82933F98 *)mem) : 0;

    if (n == 0) {
        return 0;
    }
    n->value = o->value;
    if (o->a != 0 && (n->a = o->a->vtbl->clone(o->a)) == 0) {
        return 0;
    }
    if (o->b != 0 && (n->b = o->b->vtbl->clone(o->b)) == 0) {
        return 0;
    }
    return n;
}
