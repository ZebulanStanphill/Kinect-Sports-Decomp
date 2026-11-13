typedef struct Node_8284A700 Node_8284A700;
struct Node_8284A700 {
    Node_8284A700 *left;
    Node_8284A700 *parent;
    Node_8284A700 *right;
    char value[0x20];
    char color;
    char isnil;
};

typedef struct Tree_8284A700 {
    int alval;
    Node_8284A700 *head;
    unsigned int size;
} Tree_8284A700;

extern Node_8284A700 *fn_8284A458(unsigned int count, Node_8284A700 *hint);

static __forceinline Node_8284A700 **Left_8284A700(Node_8284A700 *p)
{
    return &p->left;
}

static __forceinline Node_8284A700 *Buynode_8284A700(void)
{
    return fn_8284A458(1, 0);
}

Tree_8284A700 *fn_8284A700(Tree_8284A700 *tree, void *comp, void *al)
{
    char tmp;
    char *ptmp = &tmp;
    int pad[3];

    tree->size = 0;
    tree->head = Buynode_8284A700();
    *Left_8284A700(tree->head) = tree->head;
    tree->head->parent = tree->head;
    tree->head->right = tree->head;
    tree->head->color = 1;
    tree->head->isnil = 1;
    return tree;
}
