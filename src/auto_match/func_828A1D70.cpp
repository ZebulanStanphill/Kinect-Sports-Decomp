#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char value[0x1c - 0xC];
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
};

extern "C" Node *fn_828A1D70(Tree *tree)
{
    Node *p = std::_Allocate(1, (Node *)0);
    p->left = tree->head;
    p->parent = tree->head;
    p->right = tree->head;
    p->color = 0;
    p->isnil = 0;
    return p;
}
