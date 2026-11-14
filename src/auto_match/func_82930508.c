/* List node equality: type 1 nodes are compared item by item, any other node by its virtual equals. */
typedef struct Node_82930508 Node_82930508;

typedef struct NodeVtbl_82930508 {
    int (*equals)(Node_82930508 *self, Node_82930508 *other);
} NodeVtbl_82930508;

struct Node_82930508 {
    NodeVtbl_82930508 *vt;
    int type;               /* 0x04 */
    Node_82930508 *item;    /* 0x08 */
    Node_82930508 *next;    /* 0x0c */
};

static __forceinline int ItemEquals(Node_82930508 *a, Node_82930508 *b)
{
    if (a != 0)
        return a->vt->equals(a, b);
    return 0 == b;
}

static __forceinline int SameType(Node_82930508 *self, Node_82930508 *other)
{
    return other != 0 && other->type == self->type;
}

unsigned char fn_82930508(Node_82930508 *self, Node_82930508 *other)
{
    Node_82930508 *a;
    Node_82930508 *b;
    if (!SameType(self, other))
        return 0;
    a = self;
    b = other;
    while (a != 0 && a->type == 1) {
        if (!SameType(a, b))
            return 0;
        if (!ItemEquals(a->item, b->item))
            return 0;
        a = a->next;
        b = b->next;
    }
    if (a != 0 && a->vt->equals(a, b) == 0)
        return 0;
    return 1;
}
