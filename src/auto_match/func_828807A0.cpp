#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char value[0x20 - 0xC];
    char color;
    char isnil;
    char pad[6];
};

struct Tree {
    int alloc;
    Node *head;
};

extern "C" Node *fn_828807A0(Tree *tree)
{
    Node *p = std::_Allocate(1, (Node *)0);
    p->left = tree->head;
    p->parent = tree->head;
    p->right = tree->head;
    p->color = 0;
    p->isnil = 0;
    return p;
}
