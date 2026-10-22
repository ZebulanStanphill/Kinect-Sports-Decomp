#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821B3A10[];
}

struct TNode {
    TNode *left;
    TNode *parent;
    TNode *right;
    int val[2];
    unsigned char color;
    unsigned char isnil;
};

struct Tree {
    int comp;
    TNode *head;
    unsigned int size;
    int al;
};

struct Obj {
    void **vtbl;
    int f4;
    Tree a;
    Tree b;
};

static inline void Tree_init(Tree *t)
{
    t->size = 0;
    t->head = std::_Allocate(1, (TNode *)0);
    t->head->left = t->head;
    t->head->parent = t->head;
    t->head->right = t->head;
    t->head->color = 1;
    t->head->isnil = 1;
}

extern "C" Obj *fn_82380DA0(Obj *self, int v)
{
    self->f4 = v;
    self->vtbl = lbl_821B3A10;
    Tree_init(&self->a);
    Tree_init(&self->b);
    return self;
}
