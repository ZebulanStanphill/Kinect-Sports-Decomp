#include "stdext/xmemory.h"

struct Node1 {
    Node1 *left;
    Node1 *parent;
    Node1 *right;
    int key[5];
    char color;
    char isnil;
};

struct Node2 {
    Node2 *left;
    Node2 *parent;
    Node2 *right;
    int key[2];
    char color;
    char isnil;
};

template <class Node>
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
    Tree<Node1> t1;
    int pad;
    Tree<Node2> t2;
};

extern "C" {
extern Obj lbl_83297924;
}

extern "C" Obj *fn_82518170(void)
{
    lbl_83297924.t1.init();
    lbl_83297924.t2.init();
    return &lbl_83297924;
}
