typedef struct Node_823E2AC0 {
    struct Node_823E2AC0 *left;
    struct Node_823E2AC0 *parent;
    struct Node_823E2AC0 *right;
    char val[0x78];
    char color;
    char isnil;
} Node_823E2AC0;

typedef struct Iter_823E2AC0 {
    Node_823E2AC0 *ptr;
} Iter_823E2AC0;

void fn_823E2AC0(Iter_823E2AC0 *it)
{
    Node_823E2AC0 *n;
    Node_823E2AC0 *p;
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
