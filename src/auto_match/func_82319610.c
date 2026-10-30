typedef struct Node_82319610 {
    struct Node_82319610 *left;
    struct Node_82319610 *parent;
    struct Node_82319610 *right;
    char val[0x18];
    char color;
    char isnil;
} Node_82319610;

typedef struct Iter_82319610 {
    Node_82319610 *ptr;
} Iter_82319610;

void fn_82319610(Iter_82319610 *it)
{
    Node_82319610 *n;
    Node_82319610 *p;
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
