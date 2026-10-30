typedef struct Node_82518FF0 {
    struct Node_82518FF0 *left;
    struct Node_82518FF0 *parent;
    struct Node_82518FF0 *right;
    char val[0x14];
    char color;
    char isnil;
} Node_82518FF0;

typedef struct Iter_82518FF0 {
    Node_82518FF0 *ptr;
} Iter_82518FF0;

void fn_82518FF0(Iter_82518FF0 *it)
{
    Node_82518FF0 *n;
    Node_82518FF0 *p;
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
