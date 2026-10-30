typedef struct Node_82273208 {
    struct Node_82273208 *left;
    struct Node_82273208 *parent;
    struct Node_82273208 *right;
    char val[0x54];
    char color;
    char isnil;
} Node_82273208;

typedef struct Iter_82273208 {
    Node_82273208 *ptr;
} Iter_82273208;

void fn_82273208(Iter_82273208 *it)
{
    Node_82273208 *n;
    Node_82273208 *p;
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
