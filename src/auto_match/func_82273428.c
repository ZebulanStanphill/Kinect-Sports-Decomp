typedef struct Node_82273428 {
    struct Node_82273428 *left;
    struct Node_82273428 *parent;
    struct Node_82273428 *right;
    char val[0x54];
    char color;
    char isnil;
} Node_82273428;

typedef struct Iter_82273428 {
    Node_82273428 *ptr;
} Iter_82273428;

void fn_82273428(Iter_82273428 *it)
{
    Node_82273428 *n;
    Node_82273428 *p;
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
