typedef struct Node_823E1618 {
    struct Node_823E1618 *left;
    struct Node_823E1618 *parent;
    struct Node_823E1618 *right;
    char val[0x44];
    char color;
    char isnil;
} Node_823E1618;

typedef struct Iter_823E1618 {
    Node_823E1618 *ptr;
} Iter_823E1618;

void fn_823E1618(Iter_823E1618 *it)
{
    Node_823E1618 *n;
    Node_823E1618 *p;
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
