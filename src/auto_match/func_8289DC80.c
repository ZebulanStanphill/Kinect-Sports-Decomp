typedef struct Node_8289DC80 {
    struct Node_8289DC80 *left;
    struct Node_8289DC80 *parent;
    struct Node_8289DC80 *right;
    char val[0x4];
    char color;
    char isnil;
} Node_8289DC80;

typedef struct Iter_8289DC80 {
    Node_8289DC80 *ptr;
} Iter_8289DC80;

void fn_8289DC80(Iter_8289DC80 *it)
{
    Node_8289DC80 *n;
    Node_8289DC80 *p;
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
