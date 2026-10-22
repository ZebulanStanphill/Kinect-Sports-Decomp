#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct Pair {
    unsigned int key;
    int val;
    Pair(unsigned int k, int v) : key(k), val(v) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    unsigned char color;
    unsigned char isnil;
};

struct It {
    Node *p;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

extern "C" void fn_82550458(It *ret, Tree *t, It where, Node *node);

static inline unsigned char less(const unsigned int &a, const unsigned int &b) { return a < b; }

static inline Node *Buynode(Tree *t, unsigned int k, int v)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = t->head;
    n->parent = t->head;
    n->right = t->head;
    n->color = 0;
    n->isnil = 0;
    ::new ((void *)&n->value) Pair(k, v);
    return n;
}

extern "C" int *fn_8254F740(Tree *t, const unsigned int *key)
{
    Node *where = t->head;
    Node *p = t->head->parent;
    while (!p->isnil) {
        if (less(p->value.key, *key))
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    It w;
    w.p = where;
    Node *res = where;
    if (where == t->head || less(*key, where->value.key)) {
        It r;
        fn_82550458(&r, t, w, Buynode(t, *key, 0));
        res = r.p;
    }
    return &res->value.val;
}
