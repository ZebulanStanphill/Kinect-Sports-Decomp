typedef struct Node_824CC510 {
    struct Node_824CC510 *left;
    struct Node_824CC510 *parent;
    struct Node_824CC510 *right;
    char val[0xac];
    char color;
    char isnil;
} Node_824CC510;

typedef struct Iter_824CC510 {
    Node_824CC510 *ptr;
} Iter_824CC510;

void fn_824CC510(Iter_824CC510 *it)
{
    Node_824CC510 *n;
    Node_824CC510 *p;
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
