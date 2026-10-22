#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *where) { return where; }

struct Pair {
    unsigned int first;
    int second;
    Pair(unsigned int k, int v) : first(k), second(v) {}
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

struct Self {
    char pad[0x14];
    Tree map;
};

extern "C" void fn_82519388(Node **ret, Tree *tree, Node *where, Node *node);

extern "C" void fn_82513D20(Self *self, unsigned int key, int value)
{
    Tree *t = &self->map;
    Node *where = t->head;
    Node *p = t->head->parent;
    while (!p->isnil) {
        if (p->value.first < key)
            p = p->right;
        else {
            where = p;
            p = p->left;
        }
    }
    Node *it = where;
    if (it == t->head || key < it->value.first) {
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = t->head;
        n->parent = t->head;
        n->right = t->head;
        n->color = 0;
        n->isnil = 0;
        new ((void *)&n->value) Pair(key, 0);
        Node *ret;
        fn_82519388(&ret, t, it, n);
        it = ret;
    }
    it->value.second = value;
}
