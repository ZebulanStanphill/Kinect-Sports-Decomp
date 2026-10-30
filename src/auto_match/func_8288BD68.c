typedef struct Node_8288BD68 {
    struct Node_8288BD68 *left;
    struct Node_8288BD68 *parent;
    struct Node_8288BD68 *right;
    char val[0x40];
    char color;
    char isnil;
} Node_8288BD68;

typedef struct Iter_8288BD68 {
    Node_8288BD68 *ptr;
} Iter_8288BD68;

void fn_8288BD68(Iter_8288BD68 *it)
{
    Node_8288BD68 *n;
    Node_8288BD68 *p;
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
