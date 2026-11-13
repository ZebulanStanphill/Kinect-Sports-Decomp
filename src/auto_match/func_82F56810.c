typedef struct Node_82F56810 {
    struct Node_82F56810 *left;
    struct Node_82F56810 *parent;
    struct Node_82F56810 *right;
    unsigned char value[0x14];
    char color;
    char isnil;
} Node_82F56810;

typedef struct Tree_82F56810 {
    int alloc;
    Node_82F56810 *head;
    unsigned int size;
} Tree_82F56810;

extern void *fn_825B1970(unsigned int size);

Tree_82F56810 *fn_82F56810(Tree_82F56810 *tree)
{
    tree->size = 0;
    tree->head = (Node_82F56810 *)fn_825B1970(sizeof(Node_82F56810));
    tree->head->left = tree->head;
    tree->head->parent = tree->head;
    tree->head->right = tree->head;
    tree->head->color = 1;
    tree->head->isnil = 1;
    return tree;
}
