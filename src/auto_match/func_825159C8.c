typedef struct Node_825159C8 {
    struct Node_825159C8 *left;
    struct Node_825159C8 *parent;
    struct Node_825159C8 *right;
    char val[0x5c];
    char color;
    char isnil;
} Node_825159C8;

typedef struct Iter_825159C8 {
    Node_825159C8 *ptr;
} Iter_825159C8;

void fn_825159C8(Iter_825159C8 *it)
{
    Node_825159C8 *n;
    Node_825159C8 *p;
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
