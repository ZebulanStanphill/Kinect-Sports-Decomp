typedef struct Node_82F56878 {
    struct Node_82F56878 *left;
    struct Node_82F56878 *parent;
    struct Node_82F56878 *right;
    __int64 value[7]; /* 8-aligned 0x38-byte value at 0x10 */
    char color;
    char isnil;
} Node_82F56878;

typedef struct Tree_82F56878 {
    int alloc;
    Node_82F56878 *head;
    unsigned int size;
} Tree_82F56878;

extern void *fn_825B1970(unsigned int size);

Tree_82F56878 *fn_82F56878(Tree_82F56878 *tree)
{
    tree->size = 0;
    tree->head = (Node_82F56878 *)fn_825B1970(sizeof(Node_82F56878));
    tree->head->left = tree->head;
    tree->head->parent = tree->head;
    tree->head->right = tree->head;
    tree->head->color = 1;
    tree->head->isnil = 1;
    return tree;
}
