
#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

template<class T1, class T2> inline void _Construct(T1 *p, const T2 &v)
{
    void *vp = p;
    ::new (vp) T1(v);
}

template<class T> struct allocator {
    T *allocate(unsigned int n) { return std::_Allocate(n, (T *)0); }
    template<class U> void construct(T *p, const U &v) { _Construct(p, v); }
};

struct Blob {
    char d[32];
};

struct Val {
    int key;
    Blob data;
    Val(const Val &o) : key(o.key), data(o.data) {}
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
    allocator<Node> alnod;
    Node *head;
};

struct Iterator {
    Node *ptr;
};

extern "C" Iterator *fn_82457DC8(Iterator *, Tree *, Node *);

extern "C" Iterator *fn_82457D28(Iterator *ret, Tree *self, const Val &val)
{
    Node *p = self->alnod.allocate(1);
    p->left = self->head;
    p->parent = self->head;
    p->right = self->head;
    p->color = 0;
    p->isnil = 0;
    _Construct(&p->val, val);
    fn_82457DC8(ret, self, p);
    return ret;
}
