typedef struct Node_822C7900 {
    struct Node_822C7900 *left;
    struct Node_822C7900 *parent;
    struct Node_822C7900 *right;
    char val[0x38];
    char color;
    char isnil;
} Node_822C7900;

typedef struct Iter_822C7900 {
    Node_822C7900 *ptr;
} Iter_822C7900;

void fn_822C7900(Iter_822C7900 *it)
{
    Node_822C7900 *n;
    Node_822C7900 *p;
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
