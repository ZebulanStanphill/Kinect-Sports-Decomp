typedef struct Node_828887B0 {
    struct Node_828887B0 *left;
    struct Node_828887B0 *parent;
    struct Node_828887B0 *right;
    char val[0x54];
    char color;
    char isnil;
} Node_828887B0;

typedef struct Iter_828887B0 {
    Node_828887B0 *ptr;
} Iter_828887B0;

void fn_828887B0(Iter_828887B0 *it)
{
    Node_828887B0 *n;
    Node_828887B0 *p;
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
