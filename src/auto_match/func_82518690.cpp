#include "stdext/xmemory.h"

extern "C" {
void fn_8265CA20(void *p);
}

struct INode {
    INode *left;
    INode *parent;
    INode *right;
    unsigned int first;
    __int64 second[11];
    char color;
    char isnil;
};

struct IIter {
    INode *p;
};

struct Inner {
    int comp;
    INode *head;
    unsigned int size;
    int pad;
};

struct Pair {
    unsigned int first;
    Inner second;
};

struct ONode {
    ONode *left;
    ONode *parent;
    ONode *right;
    unsigned int key;
    Inner mapped;
    char color;
    char isnil;
};

struct OIter {
    ONode *p;
};

struct Outer {
    int comp;
    ONode *head;
    unsigned int size;
};

extern "C" {
Inner *fn_825189B8(Inner *self, const Inner *o);
IIter *fn_825188C8(IIter *ret, Inner *self, INode *first, INode *last);
OIter *fn_82519068(OIter *ret, Outer *self, ONode *where, const Pair *val);
}

static ONode *Lbound(Outer *self, const unsigned int *key)
{
    ONode *pn = self->head->parent;
    ONode *where = self->head;
    while (!pn->isnil) {
        if (pn->key < *key) {
            pn = pn->right;
        } else {
            where = pn;
            pn = pn->left;
        }
    }
    return where;
}

extern "C" Inner *fn_82518690(Outer *self, const unsigned int *key)
{
    ONode *where = Lbound(self, key);
    if (where == self->head || *key < where->key) {
        Inner tmp;
        Pair p;
        OIter r;
        tmp.size = 0;
        tmp.head = std::_Allocate(1, (INode *)0);
        tmp.head->left = tmp.head;
        tmp.head->parent = tmp.head;
        tmp.head->right = tmp.head;
        tmp.head->color = 1;
        tmp.head->isnil = 1;
        p.first = *key;
        p.second.size = 0;
        p.second.head = std::_Allocate(1, (INode *)0);
        p.second.head->left = p.second.head;
        p.second.head->parent = p.second.head;
        p.second.head->right = p.second.head;
        p.second.head->color = 1;
        p.second.head->isnil = 1;
        fn_825189B8(&p.second, &tmp);
        where = fn_82519068(&r, self, where, &p)->p;
        {
            IIter e;
            fn_825188C8(&e, &p.second, p.second.head->left, p.second.head);
            fn_8265CA20(p.second.head);
        }
        {
            IIter e;
            fn_825188C8(&e, &tmp, tmp.head->left, tmp.head);
            fn_8265CA20(tmp.head);
        }
    }
    return &where->mapped;
}
