typedef struct Node_82248B90 {
    struct Node_82248B90 *left;
    struct Node_82248B90 *parent;
    struct Node_82248B90 *right;
    char val[0xc];
    char color;
    char isnil;
} Node_82248B90;

typedef struct Iter_82248B90 {
    Node_82248B90 *ptr;
} Iter_82248B90;

void fn_82248B90(Iter_82248B90 *it)
{
    Node_82248B90 *n;
    Node_82248B90 *p;
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
