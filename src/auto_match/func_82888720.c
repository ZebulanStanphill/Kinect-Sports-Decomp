typedef struct Node_82888720 {
    struct Node_82888720 *left;
    struct Node_82888720 *parent;
    struct Node_82888720 *right;
    char val[0x54];
    char color;
    char isnil;
} Node_82888720;

typedef struct Iter_82888720 {
    Node_82888720 *ptr;
} Iter_82888720;

void fn_82888720(Iter_82888720 *it)
{
    Node_82888720 *n;
    Node_82888720 *p;
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
