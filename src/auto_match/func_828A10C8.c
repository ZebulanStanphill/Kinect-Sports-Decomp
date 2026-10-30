typedef struct Node_828A10C8 {
    struct Node_828A10C8 *left;
    struct Node_828A10C8 *parent;
    struct Node_828A10C8 *right;
    char val[0x1c];
    char color;
    char isnil;
} Node_828A10C8;

typedef struct Iter_828A10C8 {
    Node_828A10C8 *ptr;
} Iter_828A10C8;

void fn_828A10C8(Iter_828A10C8 *it)
{
    Node_828A10C8 *n;
    Node_828A10C8 *p;
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
