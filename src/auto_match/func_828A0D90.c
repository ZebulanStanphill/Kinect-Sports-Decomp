typedef struct Node_828A0D90 {
    struct Node_828A0D90 *left;
    struct Node_828A0D90 *parent;
    struct Node_828A0D90 *right;
    char val[0x2c];
    char color;
    char isnil;
} Node_828A0D90;

typedef struct Iter_828A0D90 {
    Node_828A0D90 *ptr;
} Iter_828A0D90;

void fn_828A0D90(Iter_828A0D90 *it)
{
    Node_828A0D90 *n;
    Node_828A0D90 *p;
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
