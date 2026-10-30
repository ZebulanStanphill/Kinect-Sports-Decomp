typedef struct Node_828C1F70 {
    struct Node_828C1F70 *left;
    struct Node_828C1F70 *parent;
    struct Node_828C1F70 *right;
    char val[0x2c];
    char color;
    char isnil;
} Node_828C1F70;

typedef struct Iter_828C1F70 {
    Node_828C1F70 *ptr;
} Iter_828C1F70;

void fn_828C1F70(Iter_828C1F70 *it)
{
    Node_828C1F70 *n;
    Node_828C1F70 *p;
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
