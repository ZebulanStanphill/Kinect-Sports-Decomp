#include "stdext/xmemory.h"

struct Pair {
    unsigned int first;
    int second;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair val;
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

struct Iter {
    Node *ptr;
};

extern "C" Iter *fn_82519388(Iter *result, Tree *tree, Node *where, Node *node);

static inline Node *Lbound(Tree *self, unsigned int key)
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

extern "C" void fn_825113E0(Tree *self, unsigned int key, int value)
{
    Iter it;
    it.ptr = Lbound(self, key);
    if (it.ptr == self->head || key < it.ptr->val.first) {
        Node *n = std::_Allocate(1, (Node *)0);
        Pair *pv;
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        pv = &n->val;
        if (pv != 0) {
            pv->first = key;
            pv->second = 0;
        }
        {
            Iter r;
            fn_82519388(&r, self, it.ptr, n);
            it = r;
        }
    }
    it.ptr->val.second = value;
}
