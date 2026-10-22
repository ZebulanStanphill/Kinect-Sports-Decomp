#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value;
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
    int alval;
};

struct Obj {
    Tree t[4];
};

extern "C" Obj *fn_822EAEE0(Obj *self)
{
    self->t[0].size = 0;
    self->t[0].head = std::_Allocate(1, (Node *)0);
    self->t[0].head->left = self->t[0].head;
    self->t[0].head->parent = self->t[0].head;
    self->t[0].head->right = self->t[0].head;
    self->t[0].head->color = 1;
    self->t[0].head->isnil = 1;
    self->t[1].size = 0;
    self->t[1].head = std::_Allocate(1, (Node *)0);
    self->t[1].head->left = self->t[1].head;
    self->t[1].head->parent = self->t[1].head;
    self->t[1].head->right = self->t[1].head;
    self->t[1].head->color = 1;
    self->t[1].head->isnil = 1;
    self->t[2].size = 0;
    self->t[2].head = std::_Allocate(1, (Node *)0);
    self->t[2].head->left = self->t[2].head;
    self->t[2].head->parent = self->t[2].head;
    self->t[2].head->right = self->t[2].head;
    self->t[2].head->color = 1;
    self->t[2].head->isnil = 1;
    self->t[3].size = 0;
    self->t[3].head = std::_Allocate(1, (Node *)0);
    self->t[3].head->left = self->t[3].head;
    self->t[3].head->parent = self->t[3].head;
    self->t[3].head->right = self->t[3].head;
    self->t[3].head->color = 1;
    self->t[3].head->isnil = 1;
    return self;
}
