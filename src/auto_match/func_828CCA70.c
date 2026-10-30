typedef struct Node_828CCA70 {
    struct Node_828CCA70 *left;
    struct Node_828CCA70 *parent;
    struct Node_828CCA70 *right;
    char val[0xc];
    char color;
    char isnil;
} Node_828CCA70;

typedef struct Iter_828CCA70 {
    Node_828CCA70 *ptr;
} Iter_828CCA70;

void fn_828CCA70(Iter_828CCA70 *it)
{
    Node_828CCA70 *n;
    Node_828CCA70 *p;
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
