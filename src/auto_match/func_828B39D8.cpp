#include "stdext/exception.h"

extern "C" void *fn_8265C9E0(unsigned int);

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value[3];
    char color;
    char isnil;
    char pad[6];
};

struct Tree {
    int alloc;
    Node *head;
};

template<class T> inline T *_Allocate(unsigned int count, T *)
{
    void *p = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)(-1) / sizeof(T) < count
             || (p = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)p;
}

extern "C" Node *fn_828B39D8(Tree *tree)
{
    Node *p = _Allocate(1, (Node *)0);
    p->left = tree->head;
    p->parent = tree->head;
    p->right = tree->head;
    p->color = 0;
    p->isnil = 0;
    return p;
}
