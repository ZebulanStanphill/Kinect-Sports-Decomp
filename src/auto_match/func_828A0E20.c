typedef struct Node_828A0E20 {
    struct Node_828A0E20 *left;
    struct Node_828A0E20 *parent;
    struct Node_828A0E20 *right;
    char val[0x4];
    char color;
    char isnil;
} Node_828A0E20;

typedef struct Iter_828A0E20 {
    Node_828A0E20 *ptr;
} Iter_828A0E20;

void fn_828A0E20(Iter_828A0E20 *it)
{
    Node_828A0E20 *n;
    Node_828A0E20 *p;
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
