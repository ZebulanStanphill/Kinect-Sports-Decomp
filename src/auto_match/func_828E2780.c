typedef struct Node_828E2780 {
    struct Node_828E2780 *left;
    struct Node_828E2780 *parent;
    struct Node_828E2780 *right;
    char val[0x18];
    char color;
    char isnil;
} Node_828E2780;

typedef struct Iter_828E2780 {
    Node_828E2780 *ptr;
} Iter_828E2780;

void fn_828E2780(Iter_828E2780 *it)
{
    Node_828E2780 *n;
    Node_828E2780 *p;
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
