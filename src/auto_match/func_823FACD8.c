typedef struct Node_823FACD8 {
    struct Node_823FACD8 *left;
    struct Node_823FACD8 *parent;
    struct Node_823FACD8 *right;
    char val[0x3c];
    char color;
    char isnil;
} Node_823FACD8;

typedef struct Iter_823FACD8 {
    Node_823FACD8 *ptr;
} Iter_823FACD8;

void fn_823FACD8(Iter_823FACD8 *it)
{
    Node_823FACD8 *n;
    Node_823FACD8 *p;
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
