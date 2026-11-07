typedef unsigned char U8;

typedef struct Node_8305C550 {
    int pad[8];
    struct Node_8305C550 *left;   /* 0x20 */
    struct Node_8305C550 *right;  /* 0x24 */
} Node_8305C550;

typedef struct Tree_8305C550 {
    int pad0;
    Node_8305C550 *root;          /* 0x04 */
    float value;                  /* 0x08 */
} Tree_8305C550;

extern int fn_83066788(Node_8305C550 *node, int arg, float value);

static __forceinline U8 isLeaf(Node_8305C550 *n)
{
    return n->left == 0 && n->right == 0;
}

int fn_8305C550(Tree_8305C550 *tree, int arg)
{
    Node_8305C550 *node;
    int r;

    node = tree->root;
    while (node != 0) {
        if (isLeaf(node)) {
            return (int)node;
        }
        r = fn_83066788(node, arg, tree->value);
        if (r == 0 || r == 2) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    return 0;
}
