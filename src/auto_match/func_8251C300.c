typedef struct Node_8251C300 {
    struct Node_8251C300 *left;
    struct Node_8251C300 *parent;
    struct Node_8251C300 *right;
    char val[0x28];
    char color;
    char isnil;
} Node_8251C300;

typedef struct Iter_8251C300 {
    Node_8251C300 *ptr;
} Iter_8251C300;

void fn_8251C300(Iter_8251C300 *it)
{
    Node_8251C300 *n;
    Node_8251C300 *p;
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
