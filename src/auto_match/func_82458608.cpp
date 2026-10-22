#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
extern char lbl_821BAA3C[];
}

struct Obj {
    void *vtbl;
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

inline void *operator new(unsigned int, void *p) { return p; }

struct Impl {
    void *vtbl;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    Impl(const Obj *o) : vtbl(lbl_821BAA3C), a(o->a), b(o->b), c(o->c) {}
};

static void *allocate(unsigned int n)
{
    void *p = fn_8265C9E0(n);
    if (p == 0)
        stdext::bad_alloc(0)._Raise();
    return p;
}

extern "C" Impl *fn_82458608(Obj *self, void *where)
{
    if (where == 0)
        where = allocate(0x10);
    return new (where) Impl(self);
}
