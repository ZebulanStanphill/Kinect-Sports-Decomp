typedef struct Node_822509A0 {
    struct Node_822509A0 *left;
    struct Node_822509A0 *parent;
    struct Node_822509A0 *right;
    char val[0x3c];
    char color;
    char isnil;
} Node_822509A0;

typedef struct Iter_822509A0 {
    Node_822509A0 *ptr;
} Iter_822509A0;

void fn_822509A0(Iter_822509A0 *it)
{
    Node_822509A0 *n;
    Node_822509A0 *p;
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
