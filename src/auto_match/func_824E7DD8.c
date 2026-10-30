typedef struct Node_824E7DD8 {
    struct Node_824E7DD8 *left;
    struct Node_824E7DD8 *parent;
    struct Node_824E7DD8 *right;
    char val[0x84];
    char color;
    char isnil;
} Node_824E7DD8;

typedef struct Iter_824E7DD8 {
    Node_824E7DD8 *ptr;
} Iter_824E7DD8;

void fn_824E7DD8(Iter_824E7DD8 *it)
{
    Node_824E7DD8 *n;
    Node_824E7DD8 *p;
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
