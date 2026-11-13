typedef struct Node_8284A328 Node_8284A328;
struct Node_8284A328 {
    Node_8284A328 *left;
    Node_8284A328 *parent;
    Node_8284A328 *right;
    char pad[0x2d - 0xc];
    char isnil;
};

typedef struct Tree_8284A328 {
    int alloc;
    Node_8284A328 *head;
    unsigned int size;
} Tree_8284A328;

static __forceinline Node_8284A328 **Left_8284A328(Node_8284A328 *p)
{
    return &p->left;
}

void fn_8284A328(Tree_8284A328 *self, Node_8284A328 *where)
{
    Node_8284A328 *pnode = where->left;

    where->left = pnode->right;
    if (!pnode->right->isnil)
        pnode->right->parent = where;
    pnode->parent = where->parent;
    if (where == self->head->parent)
        self->head->parent = pnode;
    else if (where == where->parent->right)
        where->parent->right = pnode;
    else
        *Left_8284A328(where->parent) = pnode;
    pnode->right = where;
    where->parent = pnode;
}
