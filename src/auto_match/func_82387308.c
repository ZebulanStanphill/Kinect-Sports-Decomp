typedef struct Node_82387308 {
    struct Node_82387308 *left;
    struct Node_82387308 *parent;
    struct Node_82387308 *right;
    char val[0x24];
    char color;
    char isnil;
} Node_82387308;

typedef struct Iter_82387308 {
    Node_82387308 *ptr;
} Iter_82387308;

void fn_82387308(Iter_82387308 *it)
{
    Node_82387308 *n;
    Node_82387308 *p;
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
