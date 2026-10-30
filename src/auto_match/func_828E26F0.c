typedef struct Node_828E26F0 {
    struct Node_828E26F0 *left;
    struct Node_828E26F0 *parent;
    struct Node_828E26F0 *right;
    char val[0x18];
    char color;
    char isnil;
} Node_828E26F0;

typedef struct Iter_828E26F0 {
    Node_828E26F0 *ptr;
} Iter_828E26F0;

void fn_828E26F0(Iter_828E26F0 *it)
{
    Node_828E26F0 *n;
    Node_828E26F0 *p;
    if (it->ptr->isnil) {
        return;
    }
    if (!it->ptr->right->isnil) {
        n = it->ptr->right;
        while (!n->left->isnil) {
            n = n->left;
        }
        it->ptr = n;
    } else {
        while (!(p = it->ptr->parent)->isnil && it->ptr == p->right) {
            it->ptr = p;
        }
        it->ptr = p;
    }
}
