typedef struct Node_828E5F60 {
    struct Node_828E5F60 *left;
    struct Node_828E5F60 *parent;
    struct Node_828E5F60 *right;
    char val[0x10];
    char color;
    char isnil;
} Node_828E5F60;

typedef struct Iter_828E5F60 {
    Node_828E5F60 *ptr;
} Iter_828E5F60;

void fn_828E5F60(Iter_828E5F60 *it)
{
    Node_828E5F60 *n;
    Node_828E5F60 *p;
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
