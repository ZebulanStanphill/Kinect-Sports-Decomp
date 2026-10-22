#include "stdext/xmemory.h"

struct Mapped {
    unsigned char data[0x74];
};

struct Pair {
    unsigned int first;
    Mapped second;
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

extern "C" {
Iter *fn_823E2F20(Iter *result, Tree *tree, Node *where, Node *node);
}

static inline Node *lbound(Tree *self, const unsigned int *key)
{
    Node *p = self->head->parent;
    Node *where = self->head;

    while (!p->isnil) {
        if (p->val.first < *key) {
            p = p->right;
        } else {
            where = p;
            p = p->left;
        }
    }
    return where;
}

extern "C" Mapped *fn_823E29C0(Tree *self, const unsigned int *key)
{
    Node *where = lbound(self, key);
    Node *it = where;

    if (it == self->head || *key < it->val.first) {
        unsigned int k;
        Mapped m;
        Node *n;
        Pair *pv;
        Iter r;

        k = *key;
        n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        pv = &n->val;
        if (pv != 0) {
            pv->first = k;
            pv->second = m;
        }
        fn_823E2F20(&r, self, where, n);
        it = r.ptr;
    }
    return &it->val.second;
}
