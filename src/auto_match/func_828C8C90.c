typedef struct Node_828C8C90 {
    struct Node_828C8C90 *left;
    struct Node_828C8C90 *parent;
    struct Node_828C8C90 *right;
    char val[0x3c];
    char color;
    char isnil;
} Node_828C8C90;

typedef struct Iter_828C8C90 {
    Node_828C8C90 *ptr;
} Iter_828C8C90;

void fn_828C8C90(Iter_828C8C90 *it)
{
    Node_828C8C90 *n;
    Node_828C8C90 *p;
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
