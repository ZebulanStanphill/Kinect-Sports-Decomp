typedef struct Node_824CC480 {
    struct Node_824CC480 *left;
    struct Node_824CC480 *parent;
    struct Node_824CC480 *right;
    char val[0x44];
    char color;
    char isnil;
} Node_824CC480;

typedef struct Iter_824CC480 {
    Node_824CC480 *ptr;
} Iter_824CC480;

void fn_824CC480(Iter_824CC480 *it)
{
    Node_824CC480 *n;
    Node_824CC480 *p;
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
