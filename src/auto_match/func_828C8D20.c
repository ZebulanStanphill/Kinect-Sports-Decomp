typedef struct Node_828C8D20 {
    struct Node_828C8D20 *left;
    struct Node_828C8D20 *parent;
    struct Node_828C8D20 *right;
    char val[0x3c];
    char color;
    char isnil;
} Node_828C8D20;

typedef struct Iter_828C8D20 {
    Node_828C8D20 *ptr;
} Iter_828C8D20;

void fn_828C8D20(Iter_828C8D20 *it)
{
    Node_828C8D20 *n;
    Node_828C8D20 *p;
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
