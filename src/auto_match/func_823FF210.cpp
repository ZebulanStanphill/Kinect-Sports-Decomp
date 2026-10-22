#include "stdext/xmemory.h"

extern "C" void *lbl_821B7654[];

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Impl {
    void *vtbl;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    Impl(const Impl &o) { vtbl = lbl_821B7654; a = o.a; b = o.b; c = o.c; }
};

extern "C" Impl *fn_823FF210(Impl *self, void *where)
{
    if (where == 0)
        where = std::_Allocate(1, (Impl *)0);
    new (where) Impl(*self);
    return (Impl *)where;
}
