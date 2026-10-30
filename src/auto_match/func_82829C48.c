typedef struct Node_82829C48 {
    struct Node_82829C48 *left;
    struct Node_82829C48 *parent;
    struct Node_82829C48 *right;
    char val[0x8];
    char color;
    char isnil;
} Node_82829C48;

typedef struct Iter_82829C48 {
    Node_82829C48 *ptr;
} Iter_82829C48;

void fn_82829C48(Iter_82829C48 *it)
{
    Node_82829C48 *n;
    Node_82829C48 *p;
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
