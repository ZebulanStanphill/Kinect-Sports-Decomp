#include "stdext/xmemory.h"

extern "C" {
extern float lbl_821CC160;
extern float lbl_82193CF0[];
}

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int key;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *_Myhead;
    unsigned int _Mysize;

    __forceinline void init()
    {
        _Mysize = 0;
        _Myhead = std::_Allocate(1, (Node *)0);
        _Myhead->left = _Myhead;
        _Myhead->parent = _Myhead;
        _Myhead->right = _Myhead;
        _Myhead->color = 1;
        _Myhead->isnil = 1;
    }
};

struct Obj {
    int a0;
    int a4;
    int a8;
    int ac;
    int b0;
    float f14;
    float f18;
    int x1c;
    int x20;
    int x24;
    float f28;
    float f2c;
    Tree tree;
    int x3c;
    int x40;
};

extern "C" Obj *fn_82448010(Obj *self)
{
    float *low=&lbl_82193CF0[-0x687];
    float c=lbl_821CC160,d=*low,e=low[0x68c];
    self->a0 = 0;
    self->f14 = c;
    self->a4 = 0;
    self->f18 = c;
    self->a8 = 0;
    self->f28 = d;
    self->x1c = 0;
    self->f2c = e;
    self->tree.init();
    self->x40 = 0;
    return self;
}
