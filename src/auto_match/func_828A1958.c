typedef struct Node_828A1958 {
    struct Node_828A1958 *left;
    struct Node_828A1958 *parent;
    struct Node_828A1958 *right;
    char val[0x24];
    char color;
    char isnil;
} Node_828A1958;

typedef struct Iter_828A1958 {
    Node_828A1958 *ptr;
} Iter_828A1958;

void fn_828A1958(Iter_828A1958 *it)
{
    Node_828A1958 *n;
    Node_828A1958 *p;
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
