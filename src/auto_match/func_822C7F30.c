typedef struct Node_822C7F30 {
    struct Node_822C7F30 *left;
    struct Node_822C7F30 *parent;
    struct Node_822C7F30 *right;
    char val[0x38];
    char color;
    char isnil;
} Node_822C7F30;

typedef struct Iter_822C7F30 {
    Node_822C7F30 *ptr;
} Iter_822C7F30;

void fn_822C7F30(Iter_822C7F30 *it)
{
    Node_822C7F30 *n;
    Node_822C7F30 *p;
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
