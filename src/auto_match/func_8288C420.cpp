#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char value[0x4C - 0xC];
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
};

extern "C" Tree *fn_8288C420(Tree *self)
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
