#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct M {
    int v;
};

struct Pair {
    int key;
    M val;
    template <class A, class B>
    Pair(A &&k, B &&v) : key(k), val(v) {}
    Pair(Pair &&o) : key(o.key), val(o.val) {}
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

extern "C" void fn_8249CC10(It *ret, Tree *t, It where, Node *node);

static inline unsigned char less(const int &a, const int &b) { return a < b; }

static inline Node *Buynode(Tree *t, Pair &&v)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = t->head;
    n->parent = t->head;
    n->right = t->head;
    n->color = 0;
    n->isnil = 0;
    ::new ((void *)&n->value) Pair(static_cast<Pair &&>(v));
    return n;
}

static inline It insert(Tree *t, It where, Node *n)
{
    It r;
    fn_8249CC10(&r, t, where, n);
    return r;
}

extern "C" M *fn_824A08E8(Tree *t, const int *key)
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
        res = insert(t, w, Buynode(t, Pair(*key, M()))).p;
    }
    return &res->value.val;
}
