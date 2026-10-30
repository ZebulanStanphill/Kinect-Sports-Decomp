typedef struct Node_828C00A0 {
    struct Node_828C00A0 *left;
    struct Node_828C00A0 *parent;
    struct Node_828C00A0 *right;
    char val[0x14];
    char color;
    char isnil;
} Node_828C00A0;

typedef struct Iter_828C00A0 {
    Node_828C00A0 *ptr;
} Iter_828C00A0;

void fn_828C00A0(Iter_828C00A0 *it)
{
    Node_828C00A0 *n;
    Node_828C00A0 *p;
    if (it->ptr->isnil) {
        it->ptr = it->ptr->right;
    } else if (!it->ptr->left->isnil) {
        n = it->ptr->left;
        while (!n->right->isnil) {
            n = n->right;
        }
        it->ptr = n;
    } else {
        while (!(p = it->ptr->parent)->isnil && it->ptr == p->left) {
            it->ptr = p;
        }
        if (!it->ptr->isnil) {
            it->ptr = p;
        }
    }
}
