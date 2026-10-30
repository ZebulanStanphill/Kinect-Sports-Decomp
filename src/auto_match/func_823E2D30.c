typedef struct Node_823E2D30 {
    struct Node_823E2D30 *left;
    struct Node_823E2D30 *parent;
    struct Node_823E2D30 *right;
    char val[0x10];
    char color;
    char isnil;
} Node_823E2D30;

typedef struct Iter_823E2D30 {
    Node_823E2D30 *ptr;
} Iter_823E2D30;

void fn_823E2D30(Iter_823E2D30 *it)
{
    Node_823E2D30 *n;
    Node_823E2D30 *p;
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
