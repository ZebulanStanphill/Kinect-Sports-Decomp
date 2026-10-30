typedef struct Node_823E1410 {
    struct Node_823E1410 *left;
    struct Node_823E1410 *parent;
    struct Node_823E1410 *right;
    char val[0x98];
    char color;
    char isnil;
} Node_823E1410;

typedef struct Iter_823E1410 {
    Node_823E1410 *ptr;
} Iter_823E1410;

void fn_823E1410(Iter_823E1410 *it)
{
    Node_823E1410 *n;
    Node_823E1410 *p;
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
