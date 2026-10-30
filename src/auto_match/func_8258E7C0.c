typedef struct Node_8258E7C0 {
    struct Node_8258E7C0 *left;
    struct Node_8258E7C0 *parent;
    struct Node_8258E7C0 *right;
    char val[0x2c];
    char color;
    char isnil;
} Node_8258E7C0;

typedef struct Iter_8258E7C0 {
    Node_8258E7C0 *ptr;
} Iter_8258E7C0;

void fn_8258E7C0(Iter_8258E7C0 *it)
{
    Node_8258E7C0 *n;
    Node_8258E7C0 *p;
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
