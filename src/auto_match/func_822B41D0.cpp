#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct V;
extern "C" {
V *fn_822B3F70(V *);
V *fn_822B44F0(V *, const V *);
void fn_822B4040(V *);
}

struct __declspec(align(16)) V {
    char data[0x30];
    V() {}
    V(const V &o) { fn_822B44F0(this, &o); }
};

struct Pair {
    unsigned int first;
    V second;
    Pair() {}
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
extern "C" It *fn_822B4718(It *, Map *, Node *, Node *);

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
};

extern "C" V *fn_822B41D0(Map *self, const unsigned int *key)
{
    It where = It(self->_Lbound(*key));
    if (where.p == self->head || *key < where.p->value.first) {
        V tmp;
        Pair pr;
        V *t = fn_822B3F70(&tmp);
        pr.first = *key;
        fn_822B44F0(&pr.second, t);
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        ::new ((void *)&n->value) Pair(pr);
        It res;
        fn_822B4718(&res, self, where.p, n);
        where = res;
        fn_822B4040(&pr.second);
        fn_822B4040(&tmp);
    }
    return &where.p->value.second;
}
