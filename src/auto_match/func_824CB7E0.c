typedef struct Node_824CB7E0 {
    struct Node_824CB7E0 *left;
    struct Node_824CB7E0 *parent;
    struct Node_824CB7E0 *right;
    char val[0xac];
    char color;
    char isnil;
} Node_824CB7E0;

typedef struct Iter_824CB7E0 {
    Node_824CB7E0 *ptr;
} Iter_824CB7E0;

void fn_824CB7E0(Iter_824CB7E0 *it)
{
    Node_824CB7E0 *n;
    Node_824CB7E0 *p;
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
