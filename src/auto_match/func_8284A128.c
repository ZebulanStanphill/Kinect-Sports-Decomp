typedef struct Node_8284A128 Node_8284A128;
struct Node_8284A128 {
    Node_8284A128 *left;
    Node_8284A128 *parent;
    Node_8284A128 *right;
    char pad[0x2d - 0xc];
    char isnil;
};

static __forceinline Node_8284A128 **Right_8284A128(Node_8284A128 *p)
{
    return &p->right;
}

static __forceinline Node_8284A128 *Min_8284A128(Node_8284A128 *p)
{
    while (!p->left->isnil)
        p = p->left;
    return p;
}
Node_8284A128 **fn_8284A128(Node_8284A128 **it)
{
    Node_8284A128 *pnode;

    if ((*it)->isnil) {
    } else {
        Node_8284A128 **r = Right_8284A128(*it);
        if (!(*r)->isnil) {
            *it = Min_8284A128(*Right_8284A128(*it));
        } else {
            while (!(pnode = (*it)->parent)->isnil && *it == pnode->right)
                *it = pnode;
            *it = pnode;
        }
    }
    return it;
}
