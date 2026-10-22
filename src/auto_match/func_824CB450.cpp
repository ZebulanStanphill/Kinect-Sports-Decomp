#include "stdext/xmemory.h"

struct Str {
    char data[0x1c];
};

extern "C" Str *fn_8223B688(Str *self, const Str *other);

struct Second {
    Str s;
    float x;
    float y;
    float z;
};

struct Value {
    Str first;
    Second second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    unsigned char color;
    unsigned char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

static void copy_second(Second *d, const Second &s)
{
    fn_8223B688(&d->s, &s.s);
    d->x = s.x;
    d->y = s.y;
    d->z = s.z;
}

static void copy_value(Value *d, const Str &a, const Second &b)
{
    fn_8223B688(&d->first, &a);
    copy_second(&d->second, b);
}

static inline Node *Buynode(Tree *t, const Value &v)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = t->head;
    n->parent = t->head;
    n->right = t->head;
    n->color = 0;
    n->isnil = 0;
    Value *pv = &n->value;
    if (pv != 0) {
        copy_value(pv, v.first, v.second);
    }
    return n;
}

extern "C" Node *fn_824CB450(Tree *t, Node *root, Node *where)
{
    Node *newroot = t->head;
    if (!root->isnil) {
        Node *p = Buynode(t, root->value);
        p->parent = where;
        p->color = root->color;
        if (newroot->isnil)
            newroot = p;
        p->left = fn_824CB450(t, root->left, p);
        p->right = fn_824CB450(t, root->right, p);
    }
    return newroot;
}
