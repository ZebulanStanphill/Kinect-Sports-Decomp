typedef struct Node_823E3450 {
    struct Node_823E3450 *left;
    struct Node_823E3450 *parent;
    struct Node_823E3450 *right;
    char val[0x78];
    char color;
    char isnil;
} Node_823E3450;

typedef struct Iter_823E3450 {
    Node_823E3450 *ptr;
} Iter_823E3450;

void fn_823E3450(Iter_823E3450 *it)
{
    Node_823E3450 *n;
    Node_823E3450 *p;
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
