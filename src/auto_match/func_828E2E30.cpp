#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char value[0x24 - 0xC];
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

extern "C" Tree *fn_828E2E30(Tree *t)
{
    t->size = 0;
    t->head = std::_Allocate(1, (Node *)0);
    t->head->left = t->head;
    t->head->parent = t->head;
    t->head->right = t->head;
    t->head->color = 1;
    t->head->isnil = 1;
    return t;
}
