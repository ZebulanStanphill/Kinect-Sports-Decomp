#include "stdext/exception.h"

struct Value {
    char key[0x1c];
    int a;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
};

struct Result {
    Node *node;
    int ok;
};

extern "C" {
void *fn_8265C9E0(unsigned int);
void fn_8223B688(void *, const void *);
void fn_82326E10(Result *, Tree *, Node *);
}

extern "C" Result *fn_82326C58(Result *out, Tree *tree, Value *val)
{
    Node *p = (Node *)fn_8265C9E0(sizeof(Node));
    if (p != 0) {
        Value *v;
        p->left = tree->head;
        p->parent = tree->head;
        p->right = tree->head;
        p->color = 0;
        p->isnil = 0;
        v = &p->value;
        if (v != 0) {
            fn_8223B688(v->key, val->key);
            v->a = val->a;
        }
        fn_82326E10(out, tree, p);
        return out;
    }
    stdext::bad_alloc(0)._Raise();
}
