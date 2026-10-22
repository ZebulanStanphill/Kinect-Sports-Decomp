#include "stdext/xmemory.h"

extern "C" {
void fn_82365BD8(void *dst, const void *src);
void fn_822315A0(void *p);
extern void *lbl_821C0A2C[];
}

struct Ref {
    int a;
    void *p;
    int c;
    Ref(const Ref &o) { fn_82365BD8(this, &o); }
    ~Ref() { if (p != 0) fn_822315A0(p); }
};

struct Functor {
    int a;
    Ref r;
};

struct Impl {
    void **vtbl;
    Functor f;
};

struct Function {
    int space[4];
    Impl *impl;
};

extern "C" Function *fn_824C6C98(Function *self, Functor fn)
{
    Functor f1 = fn;
    Functor f2 = f1;
    Impl *ptr = std::_Allocate(1, (Impl *)0);
    int a = f2.a;
    ptr->vtbl = lbl_821C0A2C;
    Functor *pf = &ptr->f;
    pf->a = a;
    fn_82365BD8(&pf->r, &f2.r);
    self->impl = ptr;
    return self;
}
