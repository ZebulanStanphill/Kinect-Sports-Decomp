typedef struct Node_82872898 {
    struct Node_82872898 *left;
    struct Node_82872898 *parent;
    struct Node_82872898 *right;
    char val[0x4];
    char color;
    char isnil;
} Node_82872898;

typedef struct Iter_82872898 {
    Node_82872898 *ptr;
} Iter_82872898;

void fn_82872898(Iter_82872898 *it)
{
    Node_82872898 *n;
    Node_82872898 *p;
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
