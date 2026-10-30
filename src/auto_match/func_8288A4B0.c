typedef struct Node_8288A4B0 {
    struct Node_8288A4B0 *left;
    struct Node_8288A4B0 *parent;
    struct Node_8288A4B0 *right;
    char val[0x8];
    char color;
    char isnil;
} Node_8288A4B0;

typedef struct Iter_8288A4B0 {
    Node_8288A4B0 *ptr;
} Iter_8288A4B0;

void fn_8288A4B0(Iter_8288A4B0 *it)
{
    Node_8288A4B0 *n;
    Node_8288A4B0 *p;
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
