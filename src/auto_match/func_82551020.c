typedef struct Node_82551020 {
    struct Node_82551020 *left;
    struct Node_82551020 *parent;
    struct Node_82551020 *right;
    char val[0x1c];
    char color;
    char isnil;
} Node_82551020;

typedef struct Iter_82551020 {
    Node_82551020 *ptr;
} Iter_82551020;

void fn_82551020(Iter_82551020 *it)
{
    Node_82551020 *n;
    Node_82551020 *p;
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
