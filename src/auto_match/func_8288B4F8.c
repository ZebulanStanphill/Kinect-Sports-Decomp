typedef struct Node_8288B4F8 {
    struct Node_8288B4F8 *left;
    struct Node_8288B4F8 *parent;
    struct Node_8288B4F8 *right;
    char val[0x14];
    char color;
    char isnil;
} Node_8288B4F8;

typedef struct Iter_8288B4F8 {
    Node_8288B4F8 *ptr;
} Iter_8288B4F8;

void fn_8288B4F8(Iter_8288B4F8 *it)
{
    Node_8288B4F8 *n;
    Node_8288B4F8 *p;
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
