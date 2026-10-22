#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct RefCount;

extern "C" {
unsigned char fn_8223AAC0(RefCount *rep);
void fn_822315A0(RefCount *rep);
}

struct Obj {
    int pad;
    int key;
};

template <class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

struct SharedPtr {
    Obj *ptr;
    RefCount *rep;
    SharedPtr() : ptr(0), rep(0) {}
    __forceinline SharedPtr(const SharedPtr &o) : ptr(0), rep(0)
    {
        Reset(o.ptr, o.rep);
    }
    SharedPtr(SharedPtr &&o) : ptr(0), rep(0)
    {
        if (this != &o) {
            swap(rep, o.rep);
            swap(ptr, o.ptr);
        }
    }
    ~SharedPtr()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
    void Reset(Obj *optr, RefCount *orep)
    {
        if (orep != 0 && fn_8223AAC0(orep))
            Reset0(optr, orep);
    }
    void Reset0(Obj *optr, RefCount *orep)
    {
        if (rep != 0)
            fn_822315A0(rep);
        rep = orep;
        ptr = optr;
    }
};

struct Pair {
    int first;
    SharedPtr second;
    __forceinline Pair(int k, const SharedPtr &s) : first(k), second(s) {}
    Pair(Pair &&o) : first(o.first), second((SharedPtr &&)o.second) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

struct Pairib {
    Node *it;
    bool ok;
    Pairib(Node *i, bool o) : it(i), ok(o) {}
    Pairib(const Pairib &o) : it(o.it), ok(o.ok) {}
};

struct Self {
    int pad;
    Tree tree;
};

extern "C" {
Pairib fn_8236DFD8(Tree *tree, Node *node);
}

extern "C" void fn_8236DDB8(Self *self, SharedPtr sp)
{
    Pair tmp(sp.ptr->key, sp);
    Tree *t = &self->tree;
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = t->head;
    n->parent = t->head;
    n->right = t->head;
    n->color = 0;
    n->isnil = 0;
    ::new ((void *)&n->value) Pair((Pair &&)tmp);
    fn_8236DFD8(t, n);
}
