typedef struct Node_8288BAE8 {
    struct Node_8288BAE8 *left;
    struct Node_8288BAE8 *parent;
    struct Node_8288BAE8 *right;
    char val[0x40];
    char color;
    char isnil;
} Node_8288BAE8;

typedef struct Iter_8288BAE8 {
    Node_8288BAE8 *ptr;
} Iter_8288BAE8;

void fn_8288BAE8(Iter_8288BAE8 *it)
{
    Node_8288BAE8 *n;
    Node_8288BAE8 *p;
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
