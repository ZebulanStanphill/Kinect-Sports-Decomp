#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" {
extern float lbl_821CA45C[2];
extern float lbl_821CC160;
}

struct Value {
    int a;
    float b;
    float c;
    float d;
    float e;
    Value() : a(0), b(lbl_821CA45C[1]), c(lbl_821CC160), d(lbl_821CA45C[1]), e(lbl_821CA45C[1]) {}
};

struct Pair {
    unsigned int first;
    Value second;
    Pair(const unsigned int &k, const Value &v) : first(k), second(v) {}
    Pair(const Pair &r) : first(r.first), second(r.second) {}
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

extern "C" Iter *fn_82319688(Iter *result, Tree *tree, Node *where, Node *node);

static inline Node *Lbound(Tree *self, const unsigned int &key)
{
    Node *p = self->head->parent;
    Node *where = self->head;
    while (!p->isnil) {
        if (p->val.first < key)
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    return where;
}

static inline Node *Buynode(Tree *self, const Pair &v)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = self->head;
    n->parent = self->head;
    n->right = self->head;
    n->color = 0;
    n->isnil = 0;
    ::new ((void *)&n->val) Pair(v);
    return n;
}

extern "C" Value *fn_82318F38(Tree *self, const unsigned int *key)
{
    Iter it;
    it.ptr = Lbound(self, *key);
    if (it.ptr == self->head || *key < it.ptr->val.first) {
        Pair v(*key, Value());
        Iter r;
        fn_82319688(&r, self, it.ptr, Buynode(self, v));
        it = r;
    }
    return &it.ptr->val.second;
}
