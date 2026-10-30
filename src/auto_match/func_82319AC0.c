typedef struct Node_82319AC0 {
    struct Node_82319AC0 *left;
    struct Node_82319AC0 *parent;
    struct Node_82319AC0 *right;
    char val[0x18];
    char color;
    char isnil;
} Node_82319AC0;

typedef struct Iter_82319AC0 {
    Node_82319AC0 *ptr;
} Iter_82319AC0;

void fn_82319AC0(Iter_82319AC0 *it)
{
    Node_82319AC0 *n;
    Node_82319AC0 *p;
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
