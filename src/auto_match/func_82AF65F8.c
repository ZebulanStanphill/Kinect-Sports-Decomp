typedef struct Node_82AF62F8 {
    char pad0[0x8];
    unsigned int pad8a : 1;
    unsigned int bound : 1;
    unsigned int pad8b : 8;
    unsigned int space : 3;
    unsigned int pad8c : 2;
    unsigned int count : 3;
    unsigned int kind : 7;
    unsigned int pad8d : 7;
} Node_82AF62F8;

typedef struct Item_82AF65F8 {
    Node_82AF62F8 *node; /* 0x0 */
    char pad4[0x10];
    int group; /* 0x14 */
    int order; /* 0x18 */
} Item_82AF65F8;

extern int fn_82AF62F8(Node_82AF62F8 *a, Node_82AF62F8 *b);

/* Sort order of two items: by node kind, group, order, then the node order. */
int fn_82AF65F8(Item_82AF65F8 *a, Item_82AF65F8 *b)
{
    int diff;
    Node_82AF62F8 *nodeB = b->node;

    diff = a->node->kind - nodeB->kind;
    if (diff != 0) {
        return diff;
    }
    diff = a->group - b->group;
    if (diff != 0) {
        return diff;
    }
    diff = a->order - b->order;
    if (diff != 0) {
        return diff;
    }
    return fn_82AF62F8(a->node, nodeB);
}
