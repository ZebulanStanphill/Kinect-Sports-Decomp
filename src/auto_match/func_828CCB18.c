typedef struct Node_828CCB18 {
    struct Node_828CCB18 *left;
    struct Node_828CCB18 *parent;
    struct Node_828CCB18 *right;
    char val[0x1c];
    char color;
    char isnil;
} Node_828CCB18;

typedef struct Iter_828CCB18 {
    Node_828CCB18 *ptr;
} Iter_828CCB18;

void fn_828CCB18(Iter_828CCB18 *it)
{
    Node_828CCB18 *n;
    Node_828CCB18 *p;
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
