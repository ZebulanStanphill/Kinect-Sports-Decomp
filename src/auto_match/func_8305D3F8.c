typedef struct Node_8305D3F8 {
    char pad0[0x2c];
    struct Node_8305D3F8 *parent;
    struct Node_8305D3F8 *next;
    struct Node_8305D3F8 *child;
} Node_8305D3F8;

typedef struct Tree_8305D3F8 {
    int pad0;
    Node_8305D3F8 *root;
} Tree_8305D3F8;

Node_8305D3F8 *fn_8305D3F8(Tree_8305D3F8 *self, Node_8305D3F8 *node)
{
    Node_8305D3F8 *parent;
    Node_8305D3F8 **link;
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
