#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Deque {
    void *proxy;
    void **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
};

extern "C" {
Deque *fn_825ACAC8(Deque *self);
void fn_823B9EF0(Deque *self, const Deque *src);
}

struct DQ {
    Deque d;
    int pad[2];
    DQ(const DQ &r)
    {
        fn_825ACAC8(&d);
        fn_823B9EF0(&d, &r.d);
    }
};

struct T3 {
    int c;
    DQ t;
    T3(const T3 &r) : c(r.c), t(r.t) {}
};

struct T2 {
    int b;
    T3 t;
    T2(const T2 &r) : b(r.b), t(r.t) {}
};

struct Pair {
    int a;
    T2 t;
    Pair(const Pair &r) : a(r.a), t(r.t) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair val;
    char color;
    char isnil;
};

struct Iter {
    Node *ptr;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

extern "C" Iter *fn_823B9A40(Iter *ret, Tree *self, Iter where, Node *node);

extern "C" Iter *fn_823B96F0(Iter *ret, Tree *self, Iter where, const Pair *val)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = self->head;
    n->parent = self->head;
    n->right = self->head;
    n->color = 0;
    n->isnil = 0;
    Pair *p = &n->val;
    if (p != 0) {
        p->a = val->a;
        T2 *d2 = &p->t;
        const T2 *s2 = &val->t;
        d2->b = s2->b;
        T3 *d3 = &d2->t;
        const T3 *s3 = &s2->t;
        d3->c = s3->c;
        DQ *d4 = &d3->t;
        const DQ *s4 = &s3->t;
        fn_825ACAC8(&d4->d);
        fn_823B9EF0(&d4->d, &s4->d);
    }
    fn_823B9A40(ret, self, where, n);
    return ret;
}
