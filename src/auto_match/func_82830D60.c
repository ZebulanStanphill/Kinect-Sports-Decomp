typedef struct Node_82830D60 {
    struct Node_82830D60 *left;
    struct Node_82830D60 *parent;
    struct Node_82830D60 *right;
    char val[0x14];
    char color;
    char isnil;
} Node_82830D60;

typedef struct Iter_82830D60 {
    Node_82830D60 *ptr;
} Iter_82830D60;

void fn_82830D60(Iter_82830D60 *it)
{
    Node_82830D60 *n;
    Node_82830D60 *p;
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
