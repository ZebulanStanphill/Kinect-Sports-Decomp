typedef struct Node_82934090 Node_82934090;
typedef struct NodeVtbl_82934090 {
    void *f00;
    Node_82934090 *(*Clone)(Node_82934090 *self);
} NodeVtbl_82934090;
struct Node_82934090 {
    NodeVtbl_82934090 *vt;
    int type;
    int f08;
    int f0c;
    int value;
    Node_82934090 *child;
};

extern void **fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, unsigned int align);
extern NodeVtbl_82934090 lbl_8202F188;

static __forceinline Node_82934090 *Node_init(Node_82934090 *node)
{
    node->vt = &lbl_8202F188;
    node->type = 0xd;
    node->f08 = 0;
    node->f0c = 0;
    node->value = 0;
    node->child = 0;
    return node;
}

Node_82934090 *fn_82934090(Node_82934090 *self)
{
    Node_82934090 *mem;
    Node_82934090 *node;

    mem = (Node_82934090 *)fn_829301D0(*fn_82934160(), 0x18, 0x10);
    if (mem != 0) {
        node = Node_init(mem);
    } else {
        node = 0;
    }
    if (node == 0) {
        return 0;
    }
    node->value = self->value;
    if (self->child != 0) {
        node->child = self->child->vt->Clone(self->child);
        if (node->child == 0) {
            return 0;
        }
    }
    return node;
}
