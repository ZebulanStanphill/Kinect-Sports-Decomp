typedef struct Node_8287CAA8 {
    struct Node_8287CAA8 *left;
    struct Node_8287CAA8 *parent;
    struct Node_8287CAA8 *right;
    char val[0xf4];
    char color;
    char isnil;
} Node_8287CAA8;

typedef struct Iter_8287CAA8 {
    Node_8287CAA8 *ptr;
} Iter_8287CAA8;

void fn_8287CAA8(Iter_8287CAA8 *it)
{
    Node_8287CAA8 *n;
    Node_8287CAA8 *p;
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
