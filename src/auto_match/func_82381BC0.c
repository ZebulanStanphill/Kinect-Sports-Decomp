typedef struct Node_82381BC0 {
    struct Node_82381BC0 *left;
    struct Node_82381BC0 *parent;
    struct Node_82381BC0 *right;
    char val[0x8];
    char color;
    char isnil;
} Node_82381BC0;

typedef struct Iter_82381BC0 {
    Node_82381BC0 *ptr;
} Iter_82381BC0;

void fn_82381BC0(Iter_82381BC0 *it)
{
    Node_82381BC0 *n;
    Node_82381BC0 *p;
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
