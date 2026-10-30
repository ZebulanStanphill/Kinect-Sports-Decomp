typedef struct Node_8259BDA8 {
    struct Node_8259BDA8 *left;
    struct Node_8259BDA8 *parent;
    struct Node_8259BDA8 *right;
    char val[0x4];
    char color;
    char isnil;
} Node_8259BDA8;

typedef struct Iter_8259BDA8 {
    Node_8259BDA8 *ptr;
} Iter_8259BDA8;

void fn_8259BDA8(Iter_8259BDA8 *it)
{
    Node_8259BDA8 *n;
    Node_8259BDA8 *p;
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
