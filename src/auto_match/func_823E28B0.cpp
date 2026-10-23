#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Mapped {
    int v[3];
};

struct Pair {
    unsigned int first;
    Mapped second;
    Pair(const unsigned int &k, const Mapped &m) : first(k) {second=m;}
    Pair(const Pair &o) : first(o.first), second(o.second) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    char color;
    char isnil;
};

struct It {
    Node *p;
    It() {}
    It(Node *n) : p(n) {}
    It(const It &o) : p(o.p) {}
};

struct Map;
extern "C" It *fn_823E2DA8(It *, Map *, Node *, Node *);

struct Map {
    int comp;
    Node *head;
    unsigned int size;

    __forceinline Node *_Lbound(const unsigned int &key)
    {
        Node *p = head->parent;
        Node *where = head;
        while (!p->isnil)
            if (p->value.first < key)
                p = p->right;
            else {
                where = p;
                p = p->left;
            }
        return where;
    }
    __forceinline Node *_Buynode(const Pair &v)
    {
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = head;
        n->parent = head;
        n->right = head;
        n->color = 0;
        n->isnil = 0;
        ::new ((void *)&n->value) Pair(v);
        return n;
    }
};

extern "C" Mapped *fn_823E28B0(Map *self, const unsigned int *key)
{
    It where = It(self->_Lbound(*key));
    if (where.p == self->head || *key < where.p->value.first) {
        It res;
        fn_823E2DA8(&res, self, where.p, self->_Buynode(Pair(*key, Mapped())));
        where = res;
    }
    return &where.p->value.second;
}
