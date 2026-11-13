typedef struct Node_8284A658 {
    struct Node_8284A658 *left;
    struct Node_8284A658 *parent;
    struct Node_8284A658 *right;
    char value[0x20];
    char color;
    char isnil;
} Node_8284A658;

typedef struct Tree_8284A658 {
    int comp;
    Node_8284A658 *head;
    unsigned int size;
} Tree_8284A658;

extern int fn_822462F0(void *left, void *right);

static __forceinline unsigned char Less_8284A658(void *left, void *right)
{
    return fn_822462F0(left, right) < 0;
}

Node_8284A658 *fn_8284A658(Tree_8284A658 *tree, void *keyval)
{
    Node_8284A658 *pnode = tree->head->parent;
    Node_8284A658 *wherenode = tree->head;

    while (!pnode->isnil) {
        if (Less_8284A658(pnode->value, keyval)) {
            pnode = pnode->right;
        } else {
            wherenode = pnode;
            pnode = pnode->left;
        }
    }
    return wherenode;
}
