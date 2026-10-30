typedef struct Node_828EA790 {
    struct Node_828EA790 *left;
    struct Node_828EA790 *parent;
    struct Node_828EA790 *right;
    char val[0x8];
    char color;
    char isnil;
} Node_828EA790;

typedef struct Iter_828EA790 {
    Node_828EA790 *ptr;
} Iter_828EA790;

void fn_828EA790(Iter_828EA790 *it)
{
    Node_828EA790 *n;
    Node_828EA790 *p;
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
