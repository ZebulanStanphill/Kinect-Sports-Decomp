#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct __declspec(align(16)) Value {
    int data[12];
};

struct Pair {
    unsigned int first;
    Value second;
    Pair(const unsigned int &k, const Value &v) : first(k), second(v) {}
    Pair(Pair &&o) : first(o.first), second(o.second) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair value;
    char color;
    char isnil;
};

struct Iter {
    Node *node;
    Iter(Node *n) : node(n) {}
    Iter(const Iter &o) : node(o.node) {}
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

extern "C" {
Iter fn_823E1690(Tree *self, Node *where, Node *node);
}

static Iter Insert(Tree *t, Node *where, Node *n)
{
    return fn_823E1690(t, where, n);
}

extern "C" Value *fn_823E11F8(Tree *self, const unsigned int *key)
{
    Node *where = self->head;
    Node *p = self->head->parent;
    while (!p->isnil) {
        if (p->value.first < *key)
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    Iter it(where);
    if (it.node == self->head || *key < it.node->value.first) {
        Pair tmp(*key, Value());
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        ::new ((void *)&n->value) Pair((Pair &&)tmp);
        it = Insert(self, it.node, n);
    }
    return &it.node->value.second;
}
