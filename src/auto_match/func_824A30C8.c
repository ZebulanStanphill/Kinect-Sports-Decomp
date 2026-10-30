typedef struct Node_824A30C8 {
    struct Node_824A30C8 *left;
    struct Node_824A30C8 *parent;
    struct Node_824A30C8 *right;
    char val[0x24];
    char color;
    char isnil;
} Node_824A30C8;

typedef struct Iter_824A30C8 {
    Node_824A30C8 *ptr;
} Iter_824A30C8;

void fn_824A30C8(Iter_824A30C8 *it)
{
    Node_824A30C8 *n;
    Node_824A30C8 *p;
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
