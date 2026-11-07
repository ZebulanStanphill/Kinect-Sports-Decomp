extern char lbl_8202F140[];

typedef struct Node_82931A68 Node_82931A68;
typedef struct NodeVtbl_82931A68 {
    void *f0;
    Node_82931A68 *(*clone)(Node_82931A68 *self);
} NodeVtbl_82931A68;

struct Node_82931A68 {
    NodeVtbl_82931A68 *vtbl;
    int type;
    int f8;
    int fC;
    int value;
    Node_82931A68 *a;
    Node_82931A68 *b;
    Node_82931A68 *c;
};

extern void **fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, unsigned int align);

static __forceinline Node_82931A68 *ctor_82931A68(Node_82931A68 *n)
{
    n->type = 7;
    n->f8 = 0;
    n->vtbl = (NodeVtbl_82931A68 *)lbl_8202F140;
    n->fC = 0;
    n->value = 0;
    n->a = 0;
    n->b = 0;
    n->c = 0;
    return n;
}

Node_82931A68 *fn_82931A68(Node_82931A68 *o)
{
    void *mem = fn_829301D0(*fn_82934160(), 0x20, 0x10);
    Node_82931A68 *n = mem != 0 ? ctor_82931A68((Node_82931A68 *)mem) : 0;

    if (n == 0) {
        return 0;
    }
    n->value = o->value;
    if (o->a != 0 && (n->a = o->a->vtbl->clone(o->a)) == 0 ||
        o->b != 0 && (n->b = o->b->vtbl->clone(o->b)) == 0 ||
        o->c != 0 && (n->c = o->c->vtbl->clone(o->c)) == 0) {
        return 0;
    }
    return n;
}
