#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int pad;
    __int64 value[8];
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

extern "C" Tree *fn_828A2468(Tree *self)
{
    self->size = 0;
    self->head = std::_Allocate(1, (Node *)0);
    self->head->left = self->head;
    self->head->parent = self->head;
    self->head->right = self->head;
    self->head->color = 1;
    self->head->isnil = 1;
    return self;
}
