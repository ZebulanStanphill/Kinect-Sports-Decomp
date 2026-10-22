#include "stdext/exception.h"

extern "C" void *fn_8265C9E0(unsigned int);

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    __int64 value[0xf0 / 8];
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
};

template <class T> inline T *_Allocate(unsigned int count, T *)
{
    void *p = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)-1 / sizeof(T) < count
             || (p = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)p;
}

extern "C" Node *fn_8287CF40(Tree *t)
{
    Node *p = _Allocate(1, (Node *)0);
    p->left = t->head;
    p->parent = t->head;
    p->right = t->head;
    p->color = 0;
    p->isnil = 0;
    return p;
}
