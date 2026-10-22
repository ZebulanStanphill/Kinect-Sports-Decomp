#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value[2];
    char color;
    char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

struct Bound {
    void (*fn)(void *);
    void *obj;
};

struct Impl {
    void *vtbl;
    Bound f;
};

struct Function {
    union {
        Impl impl;
        double align;
        char space[16];
    } u;
    Impl *ptr;
};

struct Owned;

struct Ptr {
    Owned *p;
};

struct Obj {
    void *vtbl;
    Tree tree;
    int f10;
    int f14;
    int f18;
    char sub[0x1c];
    float f38;
    Ptr owned;
};

extern "C" {
extern void *lbl_821B9368[];
extern void *lbl_821B9378[];
extern float lbl_821CC160;
void fn_8223B688(void *self, void *arg);
Owned *fn_822B19F0(void *self, Function *f);
void fn_822B1B28(Owned *self);
void fn_82359C18(void *self);
void fn_82437E38(Obj *self, int a, int b);
void fn_82610EF0(void *self);
void fn_8265CA20(void *p);
}

static inline void Tree_init(Tree *t)
{
    t->size = 0;
    t->head = std::_Allocate(1, (Node *)0);
    t->head->left = t->head;
    t->head->parent = t->head;
    t->head->right = t->head;
    t->head->color = 1;
    t->head->isnil = 1;
}

static inline void Ptr_init(Ptr *p)
{
    p->p = 0;
}

extern "C" Obj *fn_82437C78(Obj *self, void *arg)
{
    void *mem;
    Owned *n;
    Owned *old;

    self->vtbl = lbl_821B9368;
    Tree_init(&self->tree);
    self->f14 = 0;
    self->f18 = 0;
    fn_8223B688(self->sub, arg);
    {
        float *fp = &self->f38;
        *fp = lbl_821CC160;
    }
    Ptr_init(&self->owned);
    mem = fn_8265C9E0(0x28);
    if (mem != 0) {
        Function f;
        Bound b;
        b.fn = fn_82610EF0;
        b.obj = self;
        f.u.impl.vtbl = lbl_821B9378;
        f.u.impl.f = b;
        f.ptr = &f.u.impl;
        n = fn_822B19F0(mem, &f);
    } else {
        n = 0;
    }
    old = self->owned.p;
    self->owned.p = n;
    if (old != 0) {
        fn_82359C18((char *)old + 0x10);
        fn_822B1B28(old);
        fn_8265CA20(old);
    }
    fn_82437E38(self, 0, 0);
    return self;
}
