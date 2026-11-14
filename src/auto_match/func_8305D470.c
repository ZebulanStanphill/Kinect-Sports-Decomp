typedef struct Node_8305D470 {
    char pad0[0x1c];
    struct Node_8305D470 *parent;
    struct Node_8305D470 *next;
    struct Node_8305D470 *child;
} Node_8305D470;

typedef struct Tree_8305D470 {
    int pad0;
    Node_8305D470 *root;
} Tree_8305D470;

Node_8305D470 *fn_8305D470(Tree_8305D470 *self, Node_8305D470 *node)
{
    Node_8305D470 *parent;
    Node_8305D470 **link;
    if (node == 0) {
        return 0;
    }
    if (node->child != 0) {
        return node->child;
    }
    if (node->next != 0) {
        return node->next;
    }
    link = &node->parent;
    while (node->parent != 0) {
        if (node == self->root) {
            return 0;
        }
        parent = *link;
        if (parent->next != 0 && parent->next != node) {
            return parent->next;
        }
        node = parent;
        link = &node->parent;
    }
    return 0;
}
