typedef struct Node_8265BA28 {
    struct Node_8265BA28 *left;
    struct Node_8265BA28 *parent;
    struct Node_8265BA28 *right;
    char val[0x20];
    char color;
    char isnil;
} Node_8265BA28;

typedef struct Iter_8265BA28 {
    Node_8265BA28 *ptr;
} Iter_8265BA28;

void fn_8265BA28(Iter_8265BA28 *it)
{
    Node_8265BA28 *n;
    Node_8265BA28 *p;
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
