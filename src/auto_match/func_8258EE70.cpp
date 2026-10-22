#include "stdext/exception.h"

struct Value {
    char key[0x1c];
    int a;
    int b;
    int c;
    int d;
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
void fn_82240378(void *, const void *);
void fn_8258EF28(Result *, Tree *, Node *);
}

extern "C" Result *fn_8258EE70(Result *out, Tree *tree, Value *val)
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
            fn_82240378(v->key, val->key);
            v->a = val->a;
            v->b = val->b;
            v->c = val->c;
            v->d = val->d;
        }
        fn_8258EF28(out, tree, p);
        return out;
    }
    stdext::bad_alloc(0)._Raise();
}
