typedef struct Node_828A0D00 {
    struct Node_828A0D00 *left;
    struct Node_828A0D00 *parent;
    struct Node_828A0D00 *right;
    char val[0x44];
    char color;
    char isnil;
} Node_828A0D00;

typedef struct Iter_828A0D00 {
    Node_828A0D00 *ptr;
} Iter_828A0D00;

void fn_828A0D00(Iter_828A0D00 *it)
{
    Node_828A0D00 *n;
    Node_828A0D00 *p;
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
