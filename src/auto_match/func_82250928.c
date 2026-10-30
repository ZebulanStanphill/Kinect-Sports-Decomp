typedef struct Node_82250928 {
    struct Node_82250928 *left;
    struct Node_82250928 *parent;
    struct Node_82250928 *right;
    char val[0x28];
    char color;
    char isnil;
} Node_82250928;

typedef struct Iter_82250928 {
    Node_82250928 *ptr;
} Iter_82250928;

void fn_82250928(Iter_82250928 *it)
{
    Node_82250928 *n;
    Node_82250928 *p;
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
