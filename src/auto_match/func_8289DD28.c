typedef struct Node_8289DD28 {
    struct Node_8289DD28 *left;
    struct Node_8289DD28 *parent;
    struct Node_8289DD28 *right;
    char val[0x10];
    char color;
    char isnil;
} Node_8289DD28;

typedef struct Iter_8289DD28 {
    Node_8289DD28 *ptr;
} Iter_8289DD28;

void fn_8289DD28(Iter_8289DD28 *it)
{
    Node_8289DD28 *n;
    Node_8289DD28 *p;
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
