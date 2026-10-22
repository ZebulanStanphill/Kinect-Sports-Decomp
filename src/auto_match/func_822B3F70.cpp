#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value;
    char color;
    char isnil;
};

struct Self {
    int pad0;
    Node *head1;
    unsigned int size1;
    int pad0c;
    int pad10;
    Node *head2;
    unsigned int size2;
};

extern "C" Self *fn_822B3F70(Self *self)
{
    self->size1 = 0;
    self->head1 = std::_Allocate(1, (Node *)0);
    self->head1->left = self->head1;
    self->head1->parent = self->head1;
    self->head1->right = self->head1;
    self->head1->color = 1;
    self->head1->isnil = 1;
    self->size2 = 0;
    self->head2 = std::_Allocate(1, (Node *)0);
    self->head2->left = self->head2;
    self->head2->parent = self->head2;
    self->head2->right = self->head2;
    self->head2->color = 1;
    self->head2->isnil = 1;
    return self;
}
