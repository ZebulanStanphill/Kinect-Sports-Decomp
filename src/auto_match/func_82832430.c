typedef struct Node_82832430 {
    struct Node_82832430 *left;
    struct Node_82832430 *parent;
    struct Node_82832430 *right;
    char val[0x10];
    char color;
    char isnil;
} Node_82832430;

typedef struct Iter_82832430 {
    Node_82832430 *ptr;
} Iter_82832430;

void fn_82832430(Iter_82832430 *it)
{
    Node_82832430 *n;
    Node_82832430 *p;
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
