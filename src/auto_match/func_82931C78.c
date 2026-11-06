typedef struct Node_82931C78 Node_82931C78;
typedef struct NodeVtbl_82931C78 {
    void *f00;
    Node_82931C78 *(*Clone)(Node_82931C78 *self);
} NodeVtbl_82931C78;
struct Node_82931C78 {
    NodeVtbl_82931C78 *vt;
    int type;
    int f08;
    int f0c;
    Node_82931C78 *child;
    int value;
};

extern void **fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, unsigned int align);
extern NodeVtbl_82931C78 lbl_8202F14C;

static __forceinline Node_82931C78 *Node_init(Node_82931C78 *node)
{
    node->vt = &lbl_8202F14C;
    node->type = 8;
    node->f08 = 0;
    node->f0c = 0;
    node->child = 0;
    node->value = 0;
    return node;
}

Node_82931C78 *fn_82931C78(Node_82931C78 *self)
{
    Node_82931C78 *mem;
    Node_82931C78 *node;

    mem = (Node_82931C78 *)fn_829301D0(*fn_82934160(), 0x18, 0x10);
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
