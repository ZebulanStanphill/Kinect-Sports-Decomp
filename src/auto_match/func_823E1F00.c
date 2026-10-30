typedef struct Node_823E1F00 {
    struct Node_823E1F00 *left;
    struct Node_823E1F00 *parent;
    struct Node_823E1F00 *right;
    char val[0x98];
    char color;
    char isnil;
} Node_823E1F00;

typedef struct Iter_823E1F00 {
    Node_823E1F00 *ptr;
} Iter_823E1F00;

void fn_823E1F00(Iter_823E1F00 *it)
{
    Node_823E1F00 *n;
    Node_823E1F00 *p;
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
