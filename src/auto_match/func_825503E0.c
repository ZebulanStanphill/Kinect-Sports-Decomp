typedef struct Node_825503E0 {
    struct Node_825503E0 *left;
    struct Node_825503E0 *parent;
    struct Node_825503E0 *right;
    char val[0x20];
    char color;
    char isnil;
} Node_825503E0;

typedef struct Iter_825503E0 {
    Node_825503E0 *ptr;
} Iter_825503E0;

void fn_825503E0(Iter_825503E0 *it)
{
    Node_825503E0 *n;
    Node_825503E0 *p;
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
