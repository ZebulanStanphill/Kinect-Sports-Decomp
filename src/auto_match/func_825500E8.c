typedef struct Node_825500E8 {
    struct Node_825500E8 *left;
    struct Node_825500E8 *parent;
    struct Node_825500E8 *right;
    char val[0x1c];
    char color;
    char isnil;
} Node_825500E8;

typedef struct Iter_825500E8 {
    Node_825500E8 *ptr;
} Iter_825500E8;

void fn_825500E8(Iter_825500E8 *it)
{
    Node_825500E8 *n;
    Node_825500E8 *p;
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
