#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str;
extern "C" Str *fn_82392C68(Str *dst, const Str *src);

struct Str {
    __int64 d[3];
    Str(const Str &o) { fn_82392C68(this, &o); }
};

struct Inner {
    Str s1;
    Str s2;
    __forceinline Inner(const Inner &o) : s1(o.s1), s2(o.s2) {}
};

struct Val {
    int a;
    int b;
    Inner in;
    __forceinline Val(const Val &o) : a(o.a), b(o.b), in(o.in) {}
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
    int comp;
    Node *head;
};

struct Iterator {
    Node *ptr;
};

extern "C" Iterator *fn_823F8CC0(Iterator *, Tree *, Node *, Node *);

extern "C" Iterator *fn_823F84C8(Iterator *ret, Tree *self, Node *where, const Val *val)
{
    Node *p = std::_Allocate(1, (Node *)0);
    p->left = self->head;
    p->parent = self->head;
    p->right = self->head;
    p->color = 0;
    p->isnil = 0;
    ::new ((void *)&p->val) Val(*val);
    fn_823F8CC0(ret, self, where, p);
    return ret;
}
