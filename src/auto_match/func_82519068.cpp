#include "stdext/xmemory.h"

struct InNode {
    InNode *left;
    InNode *parent;
    InNode *right;
    char value[0x5c];
    char color;
    char isnil;
    char pad[6];
};

struct Map {
    int comp;
    InNode *head;
    unsigned int size;
    int alval;
};

extern "C" void fn_825189B8(Map *self, Map *right);

struct Pair {
    int first;
    Map second;
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
    int comp;
    Node *head;
    unsigned int size;
};

struct Iter {
    Node *ptr;
    Iter(Node *p) : ptr(p) {}
};

extern "C" Iter fn_82519500(Tree *self, Iter where, Node *node);

extern "C" Iter fn_82519068(Tree *self, Iter where, Pair *val)
{
    Node *node = std::_Allocate(1, (Node *)0);
    node->left = self->head;
    node->parent = self->head;
    node->right = self->head;
    node->color = 0;
    node->isnil = 0;
    Pair *p = &node->value;
    if (p != 0) {
        p->first = val->first;
        Map *m = &p->second;
        m->size = 0;
        m->head = std::_Allocate(1, (InNode *)0);
        m->head->left = m->head;
        m->head->parent = m->head;
        m->head->right = m->head;
        m->head->color = 1;
        m->head->isnil = 1;
        fn_825189B8(m, &val->second);
    }
    return fn_82519500(self, where, node);
}
