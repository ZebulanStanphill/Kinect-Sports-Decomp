typedef struct Node_8225F028 {
    struct Node_8225F028 *left;
    struct Node_8225F028 *parent;
    struct Node_8225F028 *right;
    char val[0xc];
    char color;
    char isnil;
} Node_8225F028;

typedef struct Iter_8225F028 {
    Node_8225F028 *ptr;
} Iter_8225F028;

void fn_8225F028(Iter_8225F028 *it)
{
    Node_8225F028 *n;
    Node_8225F028 *p;
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
