typedef struct Node_828BA968 {
    struct Node_828BA968 *left;
    struct Node_828BA968 *parent;
    struct Node_828BA968 *right;
    char val[0x24];
    char color;
    char isnil;
} Node_828BA968;

typedef struct Iter_828BA968 {
    Node_828BA968 *ptr;
} Iter_828BA968;

void fn_828BA968(Iter_828BA968 *it)
{
    Node_828BA968 *n;
    Node_828BA968 *p;
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
