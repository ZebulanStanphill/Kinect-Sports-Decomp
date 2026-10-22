#include "stdext/exception.h"

struct Sub;
extern "C" {
void *fn_8265C9E0(unsigned int);
void fn_822C5B18(Sub *, const Sub *);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

template<class T> inline T *_Allocate(unsigned int count, T *)
{
    void *p = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)(-1) / sizeof(T) < count
             || (p = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)p;
}

struct Sub {
    __int64 d[3];
    Sub(const Sub &o) { fn_822C5B18(this, &o); }
};

struct Inner {
    Sub a;
    Sub b;
    Inner(const Inner &o) : a(o.a), b(o.b) {}
};

struct Val {
    int key;
    Inner inner;
    Val(const Val &o) : key(o.key), inner(o.inner) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Val val;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
};

struct Iterator {
    Node *ptr;
};

extern "C" Iterator *fn_8225E9E8(Iterator *, Tree *, unsigned int, Node *);

extern "C" Iterator *fn_8225E7B8(Iterator *ret, Tree *self, unsigned int where, const Val &val)
{
    Node *p = _Allocate(1, (Node *)0);
    p->left = self->head;
    p->parent = self->head;
    p->right = self->head;
    p->color = 0;
    p->isnil = 0;
    new (&p->val) Val(val);
    fn_8225E9E8(ret, self, where, p);
    return ret;
}
