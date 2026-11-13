typedef struct Node_8284A218 Node_8284A218;
struct Node_8284A218 {
    Node_8284A218 *left;
    Node_8284A218 *parent;
    Node_8284A218 *right;
    char pad[0x2d - 0xc];
    char isnil;
};

static __forceinline Node_8284A218 **Left_8284A218(Node_8284A218 *p)
{
    return &p->left;
}

static __forceinline Node_8284A218 *Max_8284A218(Node_8284A218 *p)
{
    while (!p->right->isnil)
        p = p->right;
    return p;
}

Node_8284A218 **fn_8284A218(Node_8284A218 **it)
{
    if ((*it)->isnil) {
        *it = (*it)->right;
    } else if (!(*Left_8284A218(*it))->isnil) {
        *it = Max_8284A218(*Left_8284A218(*it));
    } else {
        Node_8284A218 *pnode;
        while (!(pnode = (*it)->parent)->isnil && *it == pnode->left)
            *it = pnode;
        if ((*it)->isnil) {
        } else {
            *it = pnode;
        }
    }
    return it;
}
