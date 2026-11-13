typedef struct Node_8284A4E8 Node_8284A4E8;
struct Node_8284A4E8 {
    Node_8284A4E8 *left;
    Node_8284A4E8 *parent;
    Node_8284A4E8 *right;
    char pad[0x2d - 0xc];
    char isnil;
};

typedef struct Tree_8284A4E8 {
    int alloc;
    Node_8284A4E8 *head;
    unsigned int size;
} Tree_8284A4E8;

static __forceinline Node_8284A4E8 **Left_8284A4E8(Node_8284A4E8 *p)
{
    return &p->left;
}

void fn_8284A4E8(Tree_8284A4E8 *self, Node_8284A4E8 *where)
{
    Node_8284A4E8 *pnode = where->right;

    where->right = pnode->left;
    if (!pnode->left->isnil)
        pnode->left->parent = where;
    pnode->parent = where->parent;
    if (where == self->head->parent)
        self->head->parent = pnode;
    else if (where == *Left_8284A4E8(where->parent))
        *Left_8284A4E8(where->parent) = pnode;
    else
        where->parent->right = pnode;
    pnode->left = where;
    where->parent = pnode;
}
