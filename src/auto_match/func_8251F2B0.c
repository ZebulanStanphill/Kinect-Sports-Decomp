typedef struct Node_8251F2B0 {
    struct Node_8251F2B0 *left;
    struct Node_8251F2B0 *parent;
    struct Node_8251F2B0 *right;
    char val[0x20];
    char color;
    char isnil;
} Node_8251F2B0;

typedef struct Iter_8251F2B0 {
    Node_8251F2B0 *ptr;
} Iter_8251F2B0;

void fn_8251F2B0(Iter_8251F2B0 *it)
{
    Node_8251F2B0 *n;
    Node_8251F2B0 *p;
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
